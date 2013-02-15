SolarizedVS
===========

A "Solarized" color theme for Visual Studio 2012, based on the work of Ethan Schoonover:
* http://ethanschoonover.com/solarized

This is a *full* theme, including menus, toolbars, tool-windows, etc.


Building and Running
--------------------

I'm using Visual Studio 2012 itself to build the theme.  In particular, I'm using the text-replacement capabilities of the C-preprocessor to set color values.  In the future, this should allow me to quickly generate "light" and "dark" versions of the theme (though I've concentrated on "dark", for now).

To generate the theme, just open and build the solution.  This will generate a Solarized.vstheme files, which you can then apply to Visual Studio.  I recommend using the Visual Studio Color Theme Editor to apply the theme:
* http://visualstudiogallery.msdn.microsoft.com/20cd93a2-c435-4d00-a797-499f16402378


A Work-In-Progress
------------------

This is also a work-in-progress.  I have obviously concentrated on elements that I see during my day-to-day work as a C++ and C# developer, but am very interested in completing the entire theme.

Any items I have not yet discovered in the UI will be "hot-pink" (#ffff00ff).  This color was chosen because it obviously stand out from the rest of the UI.

Please report any UI elements that show up using hot-pink, preferably with screenshots, and instructions on how to get to that bit of UI.
