#include "vec2.hpp"

template<typename T>
vec2<T>::vec2(T x, T y) : x(x), y(y) {}

template<typename T>
vec2<T>::vec2(const vec2& v) : x(v.x), y(v.y) {}

template<typename T>
vec2<T>::vec2(const vec2&& v) : x(v.x), y(v.y) {}

template<typename T>
vec2<T>& vec2<T>::operator =(const vec2& v) {
	x = v.x;
	y = v.y;

	return *this;
}

template<typename T>
vec2<T>&& vec2<T>::operator +(const vec2& v) const & {
	return std::move(vec2(x + v.x, y + v.y));
}

template<typename T>
vec2<T>&& vec2<T>::operator +(const vec2& v) && {
	x += v.x;
	y += v.y;

	return std::move(*this);
}

template<typename T>
vec2<T>& vec2<T>::operator +=(const vec2& v) {
	x += v.x;
	y += v.y;

	return *this;
}

template<typename T>
vec2<T>&& vec2<T>::operator -(const vec2& v) const & {
	return std::move(vec2(x - v.x, y - v.y));
}

template<typename T>
vec2<T>&& vec2<T>::operator -(const vec2& v) && {
	x -= v.x;
	y -= v.y;

	return std::move(*this);
}

template<typename T>
vec2<T>& vec2<T>::operator -=(const vec2& v) {
	x -= v.x;
	y -= v.y;

	return *this;
}

template<typename T>
vec2<T>&& vec2<T>::operator *(const vec2& v) const & {
	return std::move(vec2(x * v.x, y * v.y));
}

template<typename T>
vec2<T>&& vec2<T>::operator *(const vec2& v) && {
	x *= v.x;
	y *= v.y;

	return std::move(*this);
}

template<typename T>
vec2<T>& vec2<T>::operator *=(const vec2& v) {
	x *= v.x;
	y *= v.y;

	return *this;
}

template<typename T>
vec2<T>&& vec2<T>::operator /(const vec2& v) const & {
	return std::move(vec2(x / v.x, y / v.y));
}

template<typename T>
vec2<T>&& vec2<T>::operator /(const vec2& v) && {
	x /= v.x;
	y /= v.y;

	return std::move(*this);
}

template<typename T>
vec2<T>& vec2<T>::operator /=(const vec2& v) {
	x /= v.x;
	y /= v.y;

	return *this;
}

template<typename T>
bool vec2<T>::operator ==(const vec2& v) const {
	return x == v.x && y == v.y;
}

template<typename T>
vec2<T>& vec2<T>::normalize() {
	T l = length();

	if (l == 0) {
		return *this;
	}

	x /= l;
	y /= l;

	return *this;
}

template<typename T>
T vec2<T>::dot(const vec2& v) const {
	return x * v.x + y * v.y;
}

template<typename T>
T vec2<T>::length() const {
	return sqrt(dot(*this));
}

template<typename T>
inline std::ostream& operator <<(std::ostream& stream, const vec2<T>& vector) {
	return stream << "(" << vector.x << ", " << vector.y << ")";
}