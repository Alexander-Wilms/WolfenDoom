class LightningBolt: Actor
{
	Default
	{
	RenderStyle "None";
	+CLIENTSIDEONLY
	+NOINTERACTION
	}
	States
	{
	Spawn:
		TNT1 A 1 LIGHT("Lightning1");
		"####" A 1 LIGHT("Lightning2");
		"####" A 1 LIGHT("Lightning3");
		"####" A 1 LIGHT("Lightning4");
		"####" A 1 LIGHT("Lightning5");
		"####" A 1 LIGHT("Lightning6");
		"####" A 1 LIGHT("Lightning7");
		"####" A 1 LIGHT("Lightning8");
		"####" A 1 LIGHT("Lightning9");
		"####" A 1 LIGHT("Lightning10");
		Stop;
	}
}