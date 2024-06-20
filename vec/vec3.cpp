#include "vec3.hpp"

template<typename T>
vec3<T>::vec3(T x, T y, T z) : x(x), y(y), z(z) {}

template<typename T>
vec3<T>::vec3(const vec3& v) : x(v.x), y(v.y), z(v.z) {}

template<typename T>
vec3<T>::vec3(const vec3&& v) : x(v.x), y(v.y), z(v.z) {}

template<typename T>
vec3<T>& vec3<T>::operator =(const vec3& v) {
	x = v.x;
	y = v.y;
	z = v.z;

	return *this;
}

template<typename T>
vec3<T>&& vec3<T>::operator +(const vec3& v) const & {
	return std::move(vec3(x + v.x, y + v.y, z + v.z));
}

template<typename T>
vec3<T>&& vec3<T>::operator +(const vec3& v) && {
	x += v.x;
	y += v.y;
	z += v.z;

	return std::move(*this);
}

template<typename T>
vec3<T>& vec3<T>::operator +=(const vec3& v) {
	x += v.x;
	y += v.y;
	z += v.z;

	return *this;
}

template<typename T>
vec3<T>&& vec3<T>::operator -(const vec3& v) const & {
	return std::move(vec3(x - v.x, y - v.y, z - v.z));
}

template<typename T>
vec3<T>&& vec3<T>::operator -(const vec3& v) && {
	x -= v.x;
	y -= v.y;
	z -= v.z;

	return std::move(*this);
}

template<typename T>
vec3<T>& vec3<T>::operator -=(const vec3& v) {
	x -= v.x;
	y -= v.y;
	z -= v.z;

	return *this;
}

template<typename T>
vec3<T>&& vec3<T>::operator *(const vec3& v) const & {
	return std::move(vec3(x * v.x, y * v.y, z * v.z));
}

template<typename T>
vec3<T>&& vec3<T>::operator *(const vec3& v) && {
	x *= v.x;
	y *= v.y;
	z *= v.z;

	return std::move(*this);
}

template<typename T>
vec3<T>& vec3<T>::operator *=(const vec3& v) {
	x *= v.x;
	y *= v.y;
	z *= v.z;

	return *this;
}

template<typename T>
vec3<T>&& vec3<T>::operator /(const vec3& v) const & {
	return std::move(vec3(x / v.x, y / v.y, z / v.z));
}

template<typename T>
vec3<T>&& vec3<T>::operator /(const vec3& v) && {
	x /= v.x;
	y /= v.y;
	z /= v.z;

	return std::move(*this);
}

template<typename T>
vec3<T>& vec3<T>::operator /=(const vec3& v) {
	x /= v.x;
	y /= v.y;
	z /= v.z;

	return *this;
}

template<typename T>
bool vec3<T>::operator ==(const vec3& v) const {
	return x == v.x && y == v.y && z == v.z;
}

template<typename T>
vec3<T> vec3<T>::cross(const vec3& v) const {
	return vec3(
		y * v.z - z * v.y,
		z * v.x - x * v.z,
		x * v.y - y * v.x
	);
}

template<typename T>
vec3<T>& vec3<T>::normalize() {
	T l = length();

	if (l == 0) {
		return *this;
	}

	x /= l;
	y /= l;
	z /= l;

	return *this;
}

template<typename T>
T vec3<T>::dot(const vec3& v) const {
	return x * v.x + y * v.y + z * v.z;
}

template<typename T>
T vec3<T>::length() const {
	return sqrt(dot(*this));
}

template<typename T>
inline std::ostream& operator <<(std::ostream& stream, const vec3<T>& vector) {
	return stream << "(" << vector.x << ", " << vector.y << ", " << vector.z << ")";
}