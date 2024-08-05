#include <cassert>
#include "mat/mat3x3.cpp"
#include "mat/mat4x4.cpp"
#include "vec/vec2.cpp"
#include "vec/vec3.cpp"
#include "vec/vec4.cpp"

template<typename T>
static void print(const std::string& name, const vec2<T>& vector) {
	std::cout << name << " = " << vector << std::endl;
}

template<typename T>
static void print(const std::string& name, const vec3<T>& vector) {
	std::cout << name << " = " << vector << std::endl;
}

template<typename T>
static void print(const std::string& name, const vec4<T>& vector) {
	std::cout << name << " = " << vector << std::endl;
}

static void test1() {
	// (OK) Default constructor
	vec2<int> v1(1, 2);

	// (OK) Copy constructor
	vec2<int> v2 = v1;
	// OR
	//vec2<int> v2(v1);

	// (OK) Addition
	//v1 + v2;

	// (OK) Addition, then assignment
	// This calls the constructor once per addition!
	//vec2<int> v3(v1 + v2);
	// OR
	//vec2<int> v3 = v1 + v2;

	// (OK) Addition assignment
	// This does not call the constructor
	//v1 += v2;

	// (OK) Addition assignment, then assignment
	// This calls the constructor once
	vec2<int> v3 = v1 += v2;
	// OR
	//vec2<int> v3(v1 += v2);

	print("v1", v1);
	print("v2", v2);
	print("v3", v3);
}

static void testAdd() {
	vec2<float> v1(1, 1);
	vec2<float> v2(2, 2);
	vec2<float> v3(3, 3);
	vec2<float> v4(4, 4);
	vec2<float> v5(0, 0);

	v5 = v1 + v4;

	print("v5", v5);

	v5 = v1 + v2 + v3 + v4;

	print("v5", v5);
}

static void testVec2Sum() {
	vec2<uint32_t> a(1, 2);
	vec2<uint32_t> b(3, 4);
	vec2<uint32_t> c(0, 0);

	print("c", c);

	c = a + b;

	print("c", c);
}

static void testVec2Negate() {
	vec2<float> a(1, 2);
	vec2<float> n(-a);

	print("-a", n);
}

static void testVec2Normalize() {
	vec2<float> a(1, 1);
	vec2<float> n(a);

	n.normalize();

	print("a", a);
	print("n", n);
}

static void testVec2Dot() {
	vec2<float> a(1, 2);
	vec2<float> b(2, 3);

	float dot = a.dot(b);

	assert((dot == 8) && "The result of a.dot(b) is invalid");
}

static void testVec3Negate() {
	vec3<float> a(1, 2, 3);
	vec3<float> n(-a);

	print("-a", n);
}

static void testVec3Cross() {
	vec3<float> a(1, 4, 6);
	vec3<float> b(5, 3, 2);
	vec3<float> ab = a.cross(b);

	// assert((ab == vec3<float>(-10, 28, -17)) && "The result of a.cross(b) is invalid");
	print("ab", ab);
}

static void testVec3TripleCross() {
	vec3<float> a(1, 4, 6);
	vec3<float> b(5, 3, 2);
	vec3<float> aba = a.cross(b).cross(a);

	print("aba", aba);
}

static void testVec3Normalize() {
	vec3<float> a(1, 1, 1);
	vec3<float> n(a);

	n.normalize();

	print("a", a);
	print("n", n);
}

static void testVec3Dot() {
	vec3<float> a(1, 2, 3);
	vec3<float> b(3, 4, 5);

	float dot = a.dot(b);

	assert((dot == 26) && "The result of a.dot(b) is invalid");
}

static void testVec4Negate() {
	vec4<float> a(1, 2, 3, 4);
	vec4<float> n(-a);

	print("-a", n);
}

static void testVec4Normalize() {
	vec4<float> a(1, 1, 1, 1);
	vec4<float> n(a);

	n.normalize();

	print("a", a);
	print("n", n);
}

static void testVec4Dot() {
	vec4<float> a(1, 2, 3, 4);
	vec4<float> b(4, 5, 6, 7);

	float dot = a.dot(b);

	assert((dot == 60) && "The result of a.dot(b) is invalid");
}

int main() {
	//  vec2 tests
	// testVec2Sum();
	// testVec2Negate();
	// testVec2Normalize();
	// testVec2Dot();

	// vec3 tests
	// testVec3Negate();
	// testVec3Cross();
	// testVec3TripleCross();
	// testVec3Normalize();
	// testVec3Dot();

	// vec4 tests
	// testVec4Negate();
	// testVec4Normalize();
	// testVec4Dot();

	// mat3x3 tests

	// mat4x4 tests

	std::cin.get();
}