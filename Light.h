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

#include "Colors.h"

// This is the "Dark" theme
#define THEME_NAME									"Solarized Light"
#define THEME_GUID									"{3D64809F-6963-BA9F-4ECE-F477219BB15B}"

// Symbolic names; these are the names we'll use elsewhere,
// and we'll re-define them for different themes (e.g., light
// vs. dark).
#define background_accent						color_base3
#define background									color_base2
#define content_dim									color_base1
#define content_faint								color_base0
#define content_grey								color_base00
#define content											color_base01
#define content_bold								color_base02
#define content_extrabold						color_base03

#define theme_main									color_blue
#define theme_accent								color_violet
#define theme_accent2								color_cyan
#define theme_lightbold							color_yellow
#define theme_bold									color_orange
#define theme_changed								color_red

#define theme_commentbackground			FFE0E0D0				// slightly darker than color_base2; used as a comment background only
#define theme_visiblewhitespace			FFB3C1C8				// dimmer than color_base1; used for visible-whitespace only

#include "Theme.h"

