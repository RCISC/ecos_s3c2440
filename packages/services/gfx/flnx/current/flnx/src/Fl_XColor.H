//
// "$Id: Fl_XColor.H,v 1.1.1.1 2003/08/07 21:18:40 jasonk Exp $"
//
// X-specific color definitions for the Fast Light Tool Kit (FLTK).
//
// Copyright 1998-1999 by Bill Spitzak and others.
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Library General Public
// License as published by the Free Software Foundation; either
// version 2 of the License, or (at your option) any later version.
//
// This library is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Library General Public License for more details.
//
// You should have received a copy of the GNU Library General Public
// License along with this library; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307
// USA.
//
// Please report all bugs and problems to "fltk-bugs@easysw.com".
//

#include <config.h>
#include <FL/Enumerations.H>

// one of these for each color in fltk's "colormap":
// if overlays are enabled, another one for the overlay
struct Fl_XColor {
  unsigned char r,g,b;	// actual color used by X
  unsigned char mapped;	// true when XAllocColor done
  unsigned long pixel;	// the X pixel to use
};
extern FL_EXPORT Fl_XColor fl_xmap[/*overlay*/][256];

// mask & shifts to produce xcolor for truecolor visuals:
extern FL_EXPORT unsigned char fl_redmask, fl_greenmask, fl_bluemask;
extern FL_EXPORT int fl_redshift, fl_greenshift, fl_blueshift, fl_extrashift;

//
// End of "$Id: Fl_XColor.H,v 1.1.1.1 2003/08/07 21:18:40 jasonk Exp $".
//
