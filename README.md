# Source 2013 Engine Code
## Whats This?
The 2007 engine code ported to the 2013 source branch.
## Does it compile?
Yes.
## Does it work?
Yes... until you load a map.
## Issues
### Missing Functionality
There is a lot of stuff which did not exist on the 2007 engine, i added/fixed some functions but most of them are just place holders.
### Deprecated Steam Api
most ***(if not all of it)*** of the steam api from 2007 is deprecated, that means with the current steam api functions were renamed, replaced or just dissapeared completly, currently i disabled steam in the code to avoid issues.
### Map load crash
Crash on the function [ClientSettingsChanged](https://github.com/ValveSoftware/source-sdk-2013/blob/master/sp/src/game/server/gameinterface.cpp#L2755)
