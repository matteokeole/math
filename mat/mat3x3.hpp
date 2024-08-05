#pragma once

#include <immintrin.h>
#include <iostream>

template<typename T>
struct mat3x3 {
	protected:
		T entries[9];

	public:
		mat3x3();

		// mat3x3(const mat3x3&);

		// mat3x3(const mat3x3&&);

		T& operator [](int);

		// mat3x3& operator =(const mat3x3&);

		// mat3x3&& operator *(const mat3x3&) const &;

		// mat3x3&& operator *(const mat3x3&) &&;

		// mat3x3& operator *=(const mat3x3&);

		// mat3x3& invert();

		// mat3x3& transpose();
};

template<typename T>
inline std::ostream& operator <<(std::ostream&, mat3x3<T>&);