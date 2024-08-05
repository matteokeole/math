#pragma once

#include <immintrin.h>
#include <iostream>

template<typename T>
struct mat4x4 {
	protected:
		T entries[16];

	public:
		mat4x4();

		// mat4x4(const mat4x4&);

		// mat4x4(const mat4x4&&);

		T& operator [](int);

		// mat4x4& operator =(const mat4x4&);

		// mat4x4&& operator *(const mat4x4&) const &;

		// mat4x4&& operator *(const mat4x4&) &&;

		// mat4x4& operator *=(const mat4x4&);

		// mat4x4& invert();

		// mat4x4& transpose();
};

template<typename T>
inline std::ostream& operator <<(std::ostream&, mat4x4<T>&);