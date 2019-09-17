#ifndef __VEC3_H__
#define __VEC3_H__

template <class T>

class vec3 {

public:

	T x, y, z;

	vc3() {}
	vec3(const T& x, const T& y, const T& z) : x(x), y(y), z(z) {}
	vec3(const vec3& p) : x(p.x), y(p.y), z(p.z) {}

	vec3 operator + (const vec3 &vec) {
		return vec3(x + vec.x, y + vec.y, z + vec.z);
	}

	vec3 operator - (const vec3 &vec) {
		return vec3(x - vec.x, y - vec.y, z - vec.z);
	}

	vec3 operator += (const vec3 &vec) {

		x += vec.x;
		y += vec.y;
		z += vec.z;

		return *this;
	}

	vec3 operator -= (const vec3 &vec) {

		x -= vec.x;
		y -= vec.y;
		z -= vec.z;

		return *this;
	}

	vec3 operator = (const vec3 &vec) {

		x = vec.x;
		y = vec.y;
		z = vec.z;

		return *this;
	}
	
	bool operator == (const vec3 &vec) const{

		return x == vec.x && y == vec.y && z == vec.z;
	}

	vec3 operator *k (const vec3 &(TYPE) k) {
		x = x * k;
		y = y * k;
		z = z * k;

		return *this;
	}

	TYPE operator * (const vec3 &vec) {

		return (x * vec.x) + (y * vec.y) + (z * vec.z);
	}

	TYPE magnitude() {

		return sqrt(x * x + y * y + z * z);
	}

	void normalize() {

		x = x / magnitude;
		y = y / magnitude;
		z = z / magnitude;
	}

	void zero() {

		x = y = z = (TYPE)0;
	}

	bool is_zero() {

		return x == (TYPE)0 && y == (TYPE)0 && z == (TYPE)0;
	}

	TYPE distance_to(const vec3& vec) {

		TYPE a = x - vec.x;
		TYPE b = y - vec.y;
		TYPE c = z - vec.z;

		return sqrt(a * a + b * b + c * c);
	}

	








};



















#endif
