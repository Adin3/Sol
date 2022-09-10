project "UmbrelaGameEngine"
	kind "ConsoleApp"
	language "C++"
	cppdialect "C++20"
	--staticruntime "on"

	targetdir ("%{wks.location}/bin/" .. outputdir .. "/%{prj.name}")
	objdir ("%{wks.location}/bin-int/" .. outputdir .. "/%{prj.name}")
	
	files
	{
		"vendor/**.cpp",
		"vendor/**.h",
		"vendor/**.c",
		"vendor/imgui/**.h",
		"vendor/imgui/**.cpp",
		"src/**.cpp",
		"src/**.h",
		"misc/**.cpp",
		"misc/**.h",
		"gfx/**.cpp",
		"gfx/**.h",
		"shader/**.cpp",
		"shader/**.h",
		"game/**.cpp",
		"game/**.h",
	}
	
	includedirs 
	{
		"%{wks.location}/Dependencies/GLFW/include"
	}
	
	libdirs 
	{
		"%{wks.location}/Dependencies/GLFW/lib-vc2019"
	}
	
	links
	{
		"glfw3.lib",
		"opengl32.lib",
		"irrKlang.lib",
		--"user32.lib",
		--"kernel32.lib",
		--"shell32.lib",
	}

	filter "system:windows"
		systemversion "latest"

	filter "configurations:Debug"
		runtime "Debug"
		symbols "on"

	filter "configurations:Release"
		runtime "Release"
		optimize "on"