//
// SolarizedVS - A Solarized Color Theme for Visual Studio
// Copyright (C) 2013  Ian Prest
// 
// Permission is hereby granted, free of charge, to any person 
// obtaining a copy of this software and associated documentation 
// files (the "Software"), to deal in the Software without 
// restriction, including without limitation the rights to use, 
// copy, modify, merge, publish, distribute, sublicense, and/or 
// sell copies of the Software, and to permit persons to whom 
// the Software is furnished to do so, subject to the following 
// conditions:
// 
// The above copyright notice and this permission notice shall be 
// included in all copies or substantial portions of the Software.
// 
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, 
// EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES 
// OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND 
// NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT 
// HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, 
// WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING 
// FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR
// OTHER DEALINGS IN THE SOFTWARE.
//

//
// The Solarized colors themselves, by Ethan Schoonover
// http://ethanschoonover.com/solarized
//
#define color_base03							FF002B36
#define color_base02							FF073642
#define color_base01							FF586E75
#define color_base00							FF657B83
#define color_base0								FF839496
#define color_base1								FF93A1A1
#define color_base2								FFEEE8D5
#define color_base3								FFFDF6E3
#define color_yellow							FFB58900
#define color_orange							FFCB4B16
#define color_red									FFDC322F
#define color_magenta							FFD33682
#define color_violet							FF6C71C4
#define color_blue								FF268BD2
#define color_cyan								FF2AA198
#define color_green								FF859900

// Values to represent special VS color definitions
#define auto											color,auto			// "Automatic"
#define default										color,default		// "Default"
#define void											color,void			// not-specified

// Symbolic names; these are the names we'll use elsewhere,
// and we'll re-define them for different themes (e.g., light
// vs. dark).
#define background_accent					color_base03
#define background								color_base02
#define content_dim								color_base01
#define content_faint							color_base00
#define content_grey							color_base0
#define content										color_base1
#define content_bold							color_base2
#define content_extrabold					color_base3

#define theme_main								color_blue
#define theme_accent							color_violet
#define theme_accent2							color_cyan
#define theme_lightbold						color_yellow
#define theme_bold								color_orange
#define theme_changed							color_red

#define theme_commentbackground		FF073E4B				// slightly brighter than color_base02; used as a comment background only
#define theme_visiblewhitespace		FF094A5B				// dimmer than color_base01; used for visible-whitespace only

#define transp_lighten						60FFFFFF
#define transp_darken							60000000

#define unknown_color							FFFF00FF				// used for items we don't yet understand


// Helper macros
#define _FOREGROUND4_(x) <Foreground Type="CT_RAW" Source=#x />
#define _FOREGROUND4_auto(x) <Foreground Type="CT_AUTOMATIC" Source="00000000" />
#define _FOREGROUND4_void(x)
#define _FOREGROUND4_default(x)
#define _FOREGROUND3(x,y,...) _FOREGROUND4_##y(x)
#define _FOREGROUND2(xy) _FOREGROUND3 xy
#define _FOREGROUND1(xy) _FOREGROUND2((xy,))
#define _FOREGROUND(xy) _FOREGROUND1(xy)

#define _BACKGROUND4_(x) <Background Type="CT_RAW" Source=#x />
#define _BACKGROUND4_auto(x) <Background Type="CT_AUTOMATIC" Source="00000000" />
#define _BACKGROUND4_default(x) //<Background Type="CT_DEFAULT" Source="00000000" />
#define _BACKGROUND4_void(x)
#define _BACKGROUND3(x,y,...) _BACKGROUND4_##y(x)
#define _BACKGROUND2(xy) _BACKGROUND3 xy
#define _BACKGROUND1(xy) _BACKGROUND2((xy,))
#define _BACKGROUND(xy) _BACKGROUND1(xy)

#define COLOR(theName, theForeground, theBackground) \
	<Color Name=theName>_BACKGROUND(theBackground)_FOREGROUND(theForeground)</Color>

