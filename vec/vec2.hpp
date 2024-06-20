#pragma once

#include <iostream>

template<typename T>
struct vec2 {
	T x, y;

	vec2(T, T);

	vec2(const vec2&);

	vec2(const vec2&&);

	vec2& operator =(const vec2&);

	vec2&& operator +(const vec2&) const &;

	vec2&& operator +(const vec2&) &&;

	vec2& operator +=(const vec2&);

	vec2&& operator -(const vec2&) const &;

	vec2&& operator -(const vec2&) &&;

	vec2& operator -=(const vec2&);

	vec2&& operator *(const vec2&) const &;

	vec2&& operator *(const vec2&) &&;

	vec2& operator *=(const vec2&);

	vec2&& operator /(const vec2&) const &;

	vec2&& operator /(const vec2&) &&;

	vec2& operator /=(const vec2&);

	bool operator ==(const vec2&) const;

	vec2& normalize();

	T dot(const vec2&) const;

	T length() const;
};

template<typename T>
inline std::ostream& operator <<(std::ostream&, const vec2<T>&);