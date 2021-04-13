//teleports player if he's in sight and below actor
class ExTeleportIfPlayerBelow: Actor
{
	Default
	{
		//$Category Teleports
		//$Title Teleport (player below)
		//$Sprite TELED0
		//$Arg0 "Destination Tag"
		//$Arg0Type 14
		Radius 16;
		Height 16;
		RenderStyle "None";
		+NOGRAVITY
	}
	States
	{
	Spawn:
		TELE D 2;
		"####" D 4 A_LookEx(LOF_NOSOUNDCHECK, 0, 152, 0, 360);
		Loop;
	See:
		"####" D 4 A_CheckSight("Spawn");
		"####" D 0 A_JumpIf(CallACS("ExGetPlayerZ") < Pos.Z, "Teleport");
		Loop;
	Teleport:
		"####" D 0 ACS_NamedExecute("ExTeleportPlayer", 0, TID, args[0]);
		"####" D 8;
		Goto Spawn;
	}
}

//teleports player if he's in sight and above actor
class ExTeleportIfPlayerAbove : ExTeleportIfPlayerBelow
{
	Default
	{
		//$Title Teleport (player above)
		//$Sprite TELEU0
	}
	States
	{
	See:
		TELE U 4 A_CheckSight("Spawn");
		"####" U 0 A_JumpIf(CallACS("ExGetPlayerZ") > Pos.Z, "Teleport");
		Loop;
	}
}