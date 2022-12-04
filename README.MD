### ContextMenuHandler
The original project is here：https://github.com/ebmoluoc/ContextMenuHandler
Context menu shell extension that is ready to be customized and included in a solution.

#### This project needs CppHelpers to be able to build. They both must be in the same directory. Get it from here:  https://github.com/ebmoluoc/CppHelpers

Create a context menu to make it easier to copy the path to the folder with or without single/double quotation mask,with or without file name.This is convenient for some software developers.

After compiling the project, run the following command：  
    regsvr32 ContextMenuHandler.dll  
The right-click menu adds "Copy Path", click "Copy Path", and the submenu pops up:  

* Folder + File Name   
* Folder + File Name  With ''  
* Folder + File Name  With ""  
* Folder   
* Folder  With ''  
* Folde  With ""  

It also works for selecting multiple files at the same time.
This project was compiled under Visual Studio 2022.
