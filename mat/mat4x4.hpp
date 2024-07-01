#pragma once

#include <iostream>

template<typename T>
struct mat4x4 {
	private:
		T entries[16];

	public:
		mat4x4();

		mat4x4(const mat4x4&);

		mat4x4(const mat4x4&&);

		T operator [](int) const;

		mat4x4& operator =(const mat4x4&);

		mat4x4&& operator *(const mat4x4&) const &;

		mat4x4&& operator *(const mat4x4&) &&;

		mat4x4& operator *=(const mat4x4&);

		mat4x4& invert();

		mat4x4& transpose();
};

template<typename T>
inline std::ostream& operator <<(std::ostream&, const mat4x4<T>&);