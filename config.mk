# slock version
VERSION = 1.6

# paths
PREFIX = $(out)
MANPREFIX = $(PREFIX)/share/man

# Do NOT hardcode X11 paths on Nix
X11INC =
X11LIB =

# Xinerama
XINERAMALIBS = -lXinerama
XINERAMAFLAGS = -DXINERAMA

# freetype / Xft
FREETYPELIBS = -lXft
FREETYPEINC =

# includes and libs (NO /usr paths)
INCS = -I.
LIBS = -lc -lcrypt \
	   -lX11 -lImlib2 \
	   $(XINERAMALIBS) $(FREETYPELIBS) \
	   -lXext -lXrandr

# flags
CPPFLAGS = -DVERSION=\"$(VERSION)\" -D_DEFAULT_SOURCE -DHAVE_SHADOW_H $(XINERAMAFLAGS)
CFLAGS = -std=c99 -pedantic -Wall -Ofast $(INCS) $(CPPFLAGS)
LDFLAGS = -s $(LIBS)

COMPATSRC = explicit_bzero.c
