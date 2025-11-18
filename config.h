/* user and group to drop privileges to */
static const char *user  = "mika";
static const char *group = "mika";

static const char *colorname[NUMCOLS] = {
	[BACKGROUND] =   "black",     /* after initialization */
	[INIT] =   "#A96C8A",     /* after initialization */
	[INPUT] =  "#A96C8A",   /* during input */
	[FAILED] = "#2d2d2d",   /* wrong password */
    [CAPS] = "#6CA98A",         /* CapsLock on */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

static const int monitortime = 600;

static const int logosize = 50;
static const int logow = 9; /* Grid width and height for right center alignment*/
static const int logoh = 6;

static XRectangle rectangles[9] = {
	/* x	y	w	h */
	{ 0,	4,	1,	2 },
	{ 1,	2,	1,	2 },
	{ 2,	0,	1,	2 },
	{ 4,	0,	1,	6 },
	{ 4,	0,	3,	1 },
	{ 4,	5,	3,	1 },
	{ 6,	0,	1,	6 },
};

/*Enable blur*/
#define BLUR
/*Set blur radius*/
static const int blurRadius=10;
/*Enable Pixelation*/
#define PIXELATION
/*Set pixelation radius*/
static const int pixelSize=10;

/*
 * Xresources preferences to load at startup
 */
ResourcePref resources[] = {
		{ "color_background",   STRING,   &colorname[BACKGROUND] },
		{ "color_init",        STRING,    &colorname[INIT] },
		{ "color_input",        STRING,   &colorname[INPUT] },
		{ "color_failed",       STRING,   &colorname[FAILED] },
		{ "color_caps",       STRING,     &colorname[CAPS] },
};

