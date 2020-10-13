
# CMake

## Introduction

CMake is an open-source, cross-platform family of tools designed to build, test and package software. CMake is used to control the software compilation process using simple platform and compiler independent configuration files, and generate native makefiles and workspaces that can be used in the compiler environment of your choice. The suite of CMake tools were created by [Kitware](http://www.kitware.com/cmake) in response to the need for a powerful, cross-platform build environment for open-source projects such as ITK and VTK.
For full documentation visit the  [CMake Home Page](https://cmake.org/)  and the  [CMake Documentation Page](https://cmake.org/documentation). The  [CMake Community Wiki](https://gitlab.kitware.com/cmake/community/-/wikis/home)  also references useful guides and recipes.


## License

CMake is distributed under the OSI-approved BSD 3-clause License. See  [Copyright.txt](https://github.com/Kitware/CMake/blob/master/Copyright.txt)  for details.



### Prerequisites

You will need:

-   A modern C/C++ compiler
- Git
- make
-   CMake 3.1+ installed (on a Mac, run  `brew install cmake`)
-   If you prefer to code in a great IDE, I highly recommend  [Jetbrains CLion](https://www.jetbrains.com/clion/). 


### Supported Platforms

-   Microsoft Windows
-   Apple macOS
-   Linux
-   FreeBSD
-   OpenBSD
-   Solaris
-   AIX

Other UNIX-like operating systems may work too out of the box, if not it should not be a major problem to port CMake to this platform. Please post to the  [CMake Discourse Forum](https://discourse.cmake.org/)  to ask if others have had experience with the platform.

## Install CMake

First of all, you need to install  `cmake`.

On Ubuntu:

```
sudo apt-get install cmake

```

On macOS:

```
brew install cmake

```

Make sure the  `cmake`  is installed correctly:

```
% cmake --version
cmake version 3.10.2

CMake suite maintained and supported by Kitware (kitware.com/cmake).

```

## How to build this demo

#### UNIX/Mac OSX

Re-generate the build files using the following command:

```
cd build/
cmake ..
make
make install
```

The resultant files now have been installed in the bin directory. You can navigate there and execute them as follows :

```
./function
./numbers
```

# Other Links

There are CMake tutorials which you will find useful during your CMake journey.
- [CMake with Directories](https://hacksd.wordpress.com/2018/08/09/cmake-with-directories/)
    
-   [CMake : Simplifying Build Process](https://hacksd.wordpress.com/2018/07/20/cmake/)
