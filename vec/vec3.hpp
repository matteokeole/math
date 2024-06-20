#pragma once

#include <iostream>

template<typename T>
struct vec3 {
	T x, y, z;

	vec3(T, T, T);

	vec3(const vec3&);

	vec3(const vec3&&);

	vec3& operator =(const vec3&);

	vec3&& operator +(const vec3&) const &;

	vec3&& operator +(const vec3&) &&;

	vec3& operator +=(const vec3&);

	vec3&& operator -(const vec3&) const &;

	vec3&& operator -(const vec3&) &&;

	vec3& operator -=(const vec3&);

	vec3&& operator *(const vec3&) const &;

	vec3&& operator *(const vec3&) &&;

	vec3& operator *=(const vec3&);

	vec3&& operator /(const vec3&) const &;

	vec3&& operator /(const vec3&) &&;

	vec3& operator /=(const vec3&);

	bool operator ==(const vec3&) const;

	vec3 cross(const vec3&) const;

	vec3& normalize();

	T dot(const vec3&) const;

	T length() const;
};

template<typename T>
inline std::ostream& operator <<(std::ostream&, const vec3<T>&);