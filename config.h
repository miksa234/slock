/* user and group to drop privileges to */
static const char *user  = "miksa";
static const char *group = "wheel";

static const char *colorname[NUMCOLS] = {
	[BACKGROUND] =   "black",     /* after initialization */
	[INIT] =   "#632328",     /* after initialization */
	[INPUT] =  "#632328",   /* during input */
	[FAILED] = "#2d2d2d",   /* wrong password */
    [CAPS] = "red",         /* CapsLock on */
};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* time in seconds before the monitor shuts down */
static const int monitortime = 5;

/* insert grid pattern with scale 1:1, the size can be changed with logosize */
static const int logosize = 26;
static const int logow = 10;	/* grid width and height for right center alignment*/
static const int logoh = 16;

/*static XRectangle rectangles[9] = {*/
	/* x	y	w	h */
/*	{ 0,	3,	1,	3 },
	{ 1,	3,	2,	1 },
	{ 0,	5,	8,	1 },
	{ 3,	0,	1,	5 },
	{ 5,	3,	1,	2 },
	{ 7,	3,	1,	2 },
	{ 8,	3,	4,	1 },
	{ 9,	4,	1,	2 },
	{ 11,	4,	1,	2 },

};
*/
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
