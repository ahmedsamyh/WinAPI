workspace "winapi"
    configurations {"Debug", "Release"}
    location "build"

project "winapi"
    kind "ConsoleApp"
    language "C++"
    architecture "x64"
    cppdialect "c++latest"
    staticruntime "On"
    targetdir "bin/%{cfg.buildcfg}"

files {"src/**.cpp"}
includedirs {"include"}

filter "configurations:Debug"
    runtime "Debug"
    defines {"DEBUG"}
    symbols "On"

filter "configurations:Release"
    runtime "Release"
    defines {"NDEBUG"}
    optimize "On"

filter{}
----------------------------------------------------
project "eg01"
    kind "ConsoleApp"
    language "C++"
    architecture "x64"
    cppdialect "c++latest"
    staticruntime "On"
    targetdir "examples/bin/%{cfg.buildcfg}"

files {"examples/eg01.cpp"}
includedirs {"include"}

filter "configurations:Debug"
    runtime "Debug"
    defines {"DEBUG"}
    symbols "On"

filter "configurations:Release"
    runtime "Release"
    defines {"NDEBUG"}
    optimize "On"

filter{}
----------------------------------------------------
project "eg02"
    kind "ConsoleApp"
    language "C++"
    architecture "x64"
    cppdialect "c++latest"
    staticruntime "On"
    targetdir "examples/bin/%{cfg.buildcfg}"

files {"examples/eg02.cpp"}
includedirs {"include"}

filter "configurations:Debug"
    runtime "Debug"
    defines {"DEBUG"}
    symbols "On"

filter "configurations:Release"
    runtime "Release"
    defines {"NDEBUG"}
    optimize "On"

filter {}
----------------------------------------------------

