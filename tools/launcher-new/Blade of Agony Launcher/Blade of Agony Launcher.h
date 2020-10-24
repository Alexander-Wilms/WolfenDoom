#pragma once

#include "resource.h"

TCHAR SettingsFile[] = TEXT("./boa-launcher.ini");
TCHAR IWadName[] = TEXT("boa.ipk3");
TCHAR SourcePortName[] = TEXT("gzdoom.exe");

enum DetailSettings
{
	DETAIL_UNCHANGED,
	DETAIL_DEFAULT,
	DETAIL_VERYLOW,
	DETAIL_LOW,
	DETAIL_NORMAL,
	DETAIL_HIGH,
	DETAIL_VERYHIGH,
	DETAIL_END
};

TCHAR DetailSettingsStrings[][50] = {
	TEXT("Use Last Settings"),
	TEXT("Reset to Default Settings"),
	TEXT("Very Low Detail (fastest)"),
	TEXT("Low Detail (faster)"),
	TEXT("Normal Detail"),
	TEXT("High Detail (prettier)"),
	TEXT("Very High Detail (beautiful)"),
};

TCHAR DetailSettingsCmd[][50] = {
	TEXT(""),
	TEXT("+set boa_bidiswitch 0 +set boa_bubbleswitch 1 +set boa_cinderswitch 1 +set boa_cloudswitch 1 +set boa_dustswitch 1 +set boa_fogswitch 1 +set boa_leavesswitch 1 +set boa_litsswitch 1 +set boa_rainswitch 1 +set boa_snowswitch 1 +set boa_smokeswitch 1 +set boa_smoketype 1 +set boa_splashswitch 1 +set boa_steamswitch 1 boa_spriteshadowdistance 1024 +set boa_bloodlifetime 180 +set boa_maxparticleactors 512 +set boa_maxdebrisactors 64 +set boa_boomswitch 5 +set boa_casinglifetime 180 +set boa_debrislifetime 180 +set boa_fireswitch 5 +set boa_grasslod 8192 +set boa_scenelod 8192 +set boa_sfxlod 8192 +set boa_grasslod 8192 +set boa_sparkswitch 5 +set boa_treeslod 8192 +set boa_lightningdensity 10 +set boa_pp_lensflares 0 +set boa_pp_vignette 1 +set boa_filmgrain 1 +set boa_colorgrading 1 +set boa_mblur 1 +set boa_blood_gibs 1 +set boa_blood_pools 1 +set gl_mirrors 1 +set gl_plane_reflection 1 +set gl_bloom 1 +set gl_fxaa 1 +set gl_ssao 1 +set gl_light_shadowmap 0 +set gl_multisample 2 +set gl_texture_filter 2"),
	TEXT("+set boa_bidiswitch 1 +set boa_bubbleswitch 0 +set boa_cinderswitch 0 +set boa_cloudswitch 0 +set boa_dustswitch 0 +set boa_fogswitch 0 +set boa_leavesswitch 0 +set boa_litsswitch 0 +set boa_rainswitch 0 +set boa_snowswitch 0 +set boa_smokeswitch 0 +set boa_smoketype 0 +set boa_splashswitch 0 +set boa_steamswitch 0 boa_spriteshadowdistance 0 +set boa_bloodlifetime 15 +set boa_maxparticleactors 32 +set boa_maxdebrisactors 8 +set boa_boomswitch 1 +set boa_casinglifetime 15 +set boa_debrislifetime 15 +set boa_fireswitch 1 +set boa_grasslod 512 +set boa_scenelod 512 +set boa_sfxlod 512 +set boa_grasslod 512 +set boa_sparkswitch 1 +set boa_treeslod 512 +set boa_lightningdensity 1 +set boa_pp_lensflares 0 +set boa_pp_vignette 0 +set boa_filmgrain 0 +set boa_colorgrading 0 +set boa_mblur 0 +set boa_blood_gibs 0 +set boa_blood_pools 0 +set gl_mirrors 0 +set gl_plane_reflection 0 +set gl_bloom 0 +set gl_fxaa 0 +set gl_ssao 0 +set gl_light_shadowmap 0 +set gl_multisample 1 +set gl_texture_filter 0"),
	TEXT("+set boa_bidiswitch 1 +set boa_bubbleswitch 0 +set boa_cinderswitch 0 +set boa_cloudswitch 0 +set boa_dustswitch 0 +set boa_fogswitch 0 +set boa_leavesswitch 1 +set boa_litsswitch 0 +set boa_rainswitch 0 +set boa_snowswitch 0 +set boa_smokeswitch 0 +set boa_smoketype 0 +set boa_splashswitch 0 +set boa_steamswitch 0 boa_spriteshadowdistance 0 +set boa_bloodlifetime 30 +set boa_maxparticleactors 64 +set boa_maxdebrisactors 16 +set boa_boomswitch 2 +set boa_casinglifetime 30 +set boa_debrislifetime 30 +set boa_fireswitch 2 +set boa_grasslod 1024 +set boa_scenelod 1024 +set boa_sfxlod 512 +set boa_grasslod 1024 +set boa_sparkswitch 2 +set boa_treeslod 1024 +set boa_lightningdensity 4 +set boa_pp_lensflares 0 +set boa_pp_vignette 0 +set boa_filmgrain 0 +set boa_colorgrading 1 +set boa_mblur 0 +set boa_blood_gibs 1 +set boa_blood_pools 0 +set gl_mirrors 0 +set gl_plane_reflection 0 +set gl_bloom 0 +set gl_fxaa 0 +set gl_ssao 0 +set gl_light_shadowmap 0 +set gl_multisample 1 +set gl_texture_filter 0"),
	TEXT("+set boa_bidiswitch 0 +set boa_bubbleswitch 1 +set boa_cinderswitch 1 +set boa_cloudswitch 0 +set boa_dustswitch 0 +set boa_fogswitch 1 +set boa_leavesswitch 1 +set boa_litsswitch 1 +set boa_rainswitch 1 +set boa_snowswitch 1 +set boa_smokeswitch 1 +set boa_smoketype 0 +set boa_splashswitch 1 +set boa_steamswitch 0 boa_spriteshadowdistance 512 +set boa_bloodlifetime 60 +set boa_maxparticleactors 128 +set boa_maxdebrisactors 32 +set boa_boomswitch 3 +set boa_casinglifetime 60 +set boa_debrislifetime 60 +set boa_fireswitch 3 +set boa_grasslod 2048 +set boa_scenelod 2048 +set boa_sfxlod 1024 +set boa_grasslod 2048 +set boa_sparkswitch 3 +set boa_treeslod 1024 +set boa_lightningdensity 8 +set boa_pp_lensflares 0 +set boa_pp_vignette 0 +set boa_filmgrain 0 +set boa_colorgrading 1 +set boa_mblur 0 +set boa_blood_gibs 1 +set boa_blood_pools 1 +set gl_mirrors 1 +set gl_plane_reflection 1 +set gl_bloom 0 +set gl_fxaa 0 +set gl_ssao 0 +set gl_light_shadowmap 0 +set gl_multisample 1 +set gl_texture_filter 0"),
	TEXT("+set boa_bidiswitch 0 +set boa_bubbleswitch 1 +set boa_cinderswitch 1 +set boa_cloudswitch 1 +set boa_dustswitch 1 +set boa_fogswitch 1 +set boa_leavesswitch 1 +set boa_litsswitch 1 +set boa_rainswitch 1 +set boa_snowswitch 1 +set boa_smokeswitch 1 +set boa_smoketype 0 +set boa_splashswitch 1 +set boa_steamswitch 1 boa_spriteshadowdistance 2048 +set boa_bloodlifetime 270 +set boa_maxparticleactors 512 +set boa_maxdebrisactors 64 +set boa_boomswitch 5 +set boa_casinglifetime 270 +set boa_debrislifetime 270 +set boa_fireswitch 5 +set boa_grasslod 16384 +set boa_scenelod 16384 +set boa_sfxlod 16384 +set boa_grasslod 16384 +set boa_sparkswitch 5 +set boa_treeslod 16384 +set boa_lightningdensity 10 +set boa_pp_lensflares 1 +set boa_pp_vignette 1 +set boa_filmgrain 1 +set boa_colorgrading 1 +set boa_mblur 1 +set boa_blood_gibs 1 +set boa_blood_pools 1 +set gl_mirrors 1 +set gl_plane_reflection 1 +set gl_bloom 1 +set gl_fxaa 2 +set gl_ssao 1 +set gl_light_shadowmap 1 +set gl_multisample 3 +set gl_texture_filter 4"),
	TEXT("+set boa_bidiswitch 0 +set boa_bubbleswitch 1 +set boa_cinderswitch 1 +set boa_cloudswitch 1 +set boa_dustswitch 1 +set boa_fogswitch 1 +set boa_leavesswitch 1 +set boa_litsswitch 1 +set boa_rainswitch 1 +set boa_snowswitch 1 +set boa_smokeswitch 1 +set boa_smoketype 0 +set boa_splashswitch 1 +set boa_steamswitch 1 boa_spriteshadowdistance 4096 +set boa_bloodlifetime 360 +set boa_maxparticleactors 512 +set boa_maxdebrisactors 64 +set boa_boomswitch 5 +set boa_casinglifetime 360 +set boa_debrislifetime 360 +set boa_fireswitch 5 +set boa_grasslod 16384 +set boa_scenelod 16384 +set boa_sfxlod 16384 +set boa_grasslod 16384 +set boa_sparkswitch 5 +set boa_treeslod 16384 +set boa_lightningdensity 10 +set boa_pp_lensflares 1 +set boa_pp_vignette 1 +set boa_filmgrain 1 +set boa_colorgrading 1 +set boa_mblur 1 +set boa_blood_gibs 1 +set boa_blood_pools 1 +set gl_mirrors 1 +set gl_plane_reflection 1 +set gl_bloom 1 +set gl_fxaa 4 +set gl_ssao 1 +set gl_light_shadowmap 1 +set gl_multisample 4 +set gl_texture_filter 6"),
};

enum LoadDisplacementTextures
{
	DIS_NO,
	DIS_YES,
	DIS_END
};

TCHAR DisplacementTexturesStrings[][50] = {
	TEXT("Do not use displacement textures (faster)"),
	TEXT("Use displacement textures (beautiful)"),
};

TCHAR DisplacementTexturesCmd[][50] = {
	TEXT(""),
	TEXT("-file boa_dt.pk3"),
};

enum UseDeveloperCommentary
{
	DEVC_NO,
	DEVC_YES,
	DEVC_END
};

TCHAR DeveloperCommentaryCmd[][50] = {
	TEXT("+set boa_devcomswitch 0"),
	TEXT("+set boa_devcomswitch 1")
};

enum Languages
{
	LANGUAGE_MAX = 9
};

TCHAR LanguagesList[][50] = {
	TEXT("English"), // en
	TEXT("German"), // de
	TEXT("Spanish"), // es
	TEXT("Russian"), // ru
	TEXT("Portugese"), // pt
	TEXT("Italian"), // it
	TEXT("Turkish"), // trk
	TEXT("French"), // fr
	TEXT("Czech"), // cs
};

TCHAR LanguagesCmd[][50] = {
	TEXT("+language en"), // en
	TEXT("+language de"), // de
	TEXT("+language es"), // es
	TEXT("+language ru"), // ru
	TEXT("+language pt"), // pt
	TEXT("+language it"), // it
	TEXT("+language trk"), // trk
	TEXT("+language fr"), // fr
	TEXT("+language cs"), // cs
};

enum TexFilterSettings
{
	TEXFILT_UNCHANGED,
	TEXFILT_NONE,
	TEXFILT_TRILINEAR,
	TEXFILT_TRILINEARNNX,
	TEXFILT_END
};

TCHAR TexFilterSettingsStrings[][50] = {
	TEXT("Use Last Settings"),
	TEXT("No Texture Filtering"),
	TEXT("Trilinear"),
	TEXT("Trilinear (w/ Normal2x)"),
};

TCHAR TexFilterSettingsCmd[][120] = {
	TEXT(""),
	TEXT("+gl_texture_filter 0 +gl_texture_filter_anisotropic 0 +gl_texture_hqresizemode 6 +gl_texture_hqresizemult 1"),
	TEXT("+gl_texture_filter 4 +gl_texture_filter_anisotropic 8 +gl_texture_hqresizemode 6 +gl_texture_hqresizemult 1"),
	TEXT("+gl_texture_filter 4 +gl_texture_filter_anisotropic 16 +gl_texture_hqresizemode 6 +gl_texture_hqresizemult 2"),
};

struct LauncherSettings
{
	bool DontShow = false;
	int DisplacementTextures = DIS_YES;
	int Detail = DETAIL_UNCHANGED;
	bool DevCommentary = false;
	int Language = 0;
	int TexFilter = TEXFILT_UNCHANGED;
};

extern LauncherSettings settings;

