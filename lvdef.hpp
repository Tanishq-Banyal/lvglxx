#pragma once

#include <vector>
#include <cstdint>
#include <iostream>

namespace lvc				// LVGL C Headers are inside namespace lvc
{
	extern "C"				// without extern C, it clashes with <cstdint>
	{
		#include "lvgl/lvgl.h"
	}
}

namespace lv
{
	/* // Broken Concepts in MSVC (or broken code ?)
	#include <concepts>
	template<typename T>		// Defining "numeric" Concept
	concept numeric = std::integral<T> or std::floating_point<T>;
	template<numeric T>
	*/
	template<typename T> struct Vector2
	{
		T x;
		T y;
	};
}