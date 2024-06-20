#include <cassert>
#include "vec/vec2.cpp"
#include "vec/vec3.cpp"

template<typename T>
static void print(const std::string& name, const vec2<T>& vector) {
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

static void testCross() {
	vec3<float> a(1, 4, 6);
	vec3<float> b(5, 3, 2);
	vec3<float> cross = a.cross(b);

	assert((cross == vec3<float>(-10, 28, -17)) && "The result of a.cross(b) is invalid");
}

int main() {
	testCross();

	std::cin.get();
}