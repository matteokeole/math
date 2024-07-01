#pragma once

#include <iostream>

template<typename T>
struct mat3x3 {
	private:
		T entries[9];

	public:
		mat3x3();

		mat3x3(const mat3x3&);

		mat3x3(const mat3x3&&);

		T operator [](int) const;

		mat3x3& operator =(const mat3x3&);

		mat3x3&& operator *(const mat3x3&) const &;

		mat3x3&& operator *(const mat3x3&) &&;

		mat3x3& operator *=(const mat3x3&);

		mat3x3& invert();

		mat3x3& transpose();
};

template<typename T>
inline std::ostream& operator <<(std::ostream&, const mat3x3<T>&);