/* user and group to drop privileges to */
static const char *user  = "mika";
static const char *group = "wheel";

static const char *colorname[NUMCOLS] = {
	[BACKGROUND] =   "black",     /* after initialization */
	[INIT] =   "#A16C1F",     /* after initialization */
	[INPUT] =  "#A96C8A",   /* during input */
	[FAILED] = "#2d2d2d",   /* wrong password */
    [CAPS] = "#6CA98A",         /* CapsLock on */
};

/* treat a cleared input like a wrong password (color) */
static int failonclear = 0;

static int logosize = 50;
static int logow = 9; /* Grid width and height for right center alignment*/
static int logoh = 6;

/* Setup specific draw on two monitors  should be 0 false or 1 true */
static int draw_on_two= 1;

static XRectangle rectangles_double[18] = {
	/* x	y	w	h */
	{ 0,	4,	1,	2 },
	{ 1,	2,	1,	2 },
	{ 2,	0,	1,	2 },
	{ 4,	0,	1,	6 },
	{ 4,	0,	3,	1 },
	{ 4,	5,	3,	1 },
	{ 6,	0,	1,	6 },
    //
	{ -40,	4,	1,	2 },
	{ -39,	2,	1,	2 },
	{ -38,	0,	1,	2 },
	{ -36,	0,	1,	6 },
	{ -36,	0,	3,	1 },
	{ -36,	5,	3,	1 },
	{ -34,	0,	1,	6 },
};

static XRectangle rectangles[18] = {
	/* x	y	w	h */
	{ 0,	4,	1,	2 },
	{ 1,	2,	1,	2 },
	{ 2,	0,	1,	2 },
	{ 4,	0,	1,	6 },
	{ 4,	0,	3,	1 },
	{ 4,	5,	3,	1 },
	{ 6,	0,	1,	6 },
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
static int blurRadius=10;
/*Enable Pixelation*/
#define PIXELATION
/*Set pixelation radius*/
static int pixelSize=10;

/*
 * Xresources preferences to load at startup
 */
ResourcePref resources[] = {
		{ "color_background", STRING,   &colorname[BACKGROUND] },
		{ "color_init",       STRING,   &colorname[INIT] },
		{ "color_input",      STRING,   &colorname[INPUT] },
		{ "color_failed",     STRING,   &colorname[FAILED] },
		{ "color_caps",       STRING,   &colorname[CAPS] },
		{ "failonclear",      INTEGER,  &failonclear },
		{ "logosize",         INTEGER,  &logosize },
		{ "logow",            INTEGER,  &logow },
		{ "logoh",            INTEGER,  &logoh },
		{ "draw_on_two",      INTEGER,  &draw_on_two },
		{ "blurRadius",       INTEGER,  &blurRadius },
		{ "pixelSize",        INTEGER,  &pixelSize },
};

