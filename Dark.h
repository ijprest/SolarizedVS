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

// This is the "Dark" theme
#define THEME_NAME								"Solarized Dark"
#define THEME_GUID								"{82903FA5-A781-4088-BE17-526DFECCD587}"

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

#define theme_plaintext_bkg				background
#define theme_plaintext						content
#define theme_border							content_dim

// Tab colors
#define theme_tab_active					theme_main
#define theme_tab_active_text			content_bold
#define theme_tab_inactive				content_grey
#define theme_tab_inactive_text		content_bold
#define theme_tab_hover						content_bold
#define theme_tab_hover_text			theme_main
#define theme_tab_unselected			background
#define theme_tab_unselected_text	content
#define theme_tab_provisional			color_violet
