/*#ifndef __VEC3_H__
#define __VEC3_H__

template <class T>

class vec3 {

public:

	T x, y, z;

	vec3() {}
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

	vec3 operator ** (const vec3 &k) {
		x = x * k;
		y = y * k;
		z = z * k;

		return *this;
	}

	T operator * (const vec3 &vec) {

		return (x * vec.x) + (y * vec.y) + (z * vec.z);
	}

	T magnitude() {

		return sqrt(x * x + y * y + z * z);
	}

	void normalize() {

		x = x / magnitude;
		y = y / magnitude;
		z = z / magnitude;
	}

	void zero() {

		x = y = z = (T)0;
	}

	bool is_zero() {

		return x == (T)0 && y == (T)0 && z == (T)0;
	}

	T distance_to(const vec3& vec) {

		T a = x - vec.x;
		T b = y - vec.y;
		T c = z - vec.z;

		return sqrt(a * a + b * b + c * c);
	}

	void printvec() const {
		cout << x << " " << y << "  " << z << endl;
	}
	
};


#endif*/

#ifndef __VEC3_H__
#define __VEC3_H__

template <class T>

class vec3 {

private:

	T x;
	T y;
	T z;

public:
	vec3() : x(0), y(0), z(0) {}

	vec3(T _x, T _y, T _z) : x(_x), y(_y), z(_z) {}

	vec3(vec3 &_copy) : x(_copy.x), y(_copy.y), z(_copy.z) {}

	~vec3() {}

	vec3 operator + (const vec3 &aux) const {
		vec3 res;

		res.x = x + aux.x;
		res.y = y + aux.y;
		res.z = z + aux.z;

		cout << res.x << " " << res.y << " " << res.z << " " << endl;

		return res;
	}

	vec3 operator - (const vec3 &aux) const {
		vec3 res;

		res.x = x -= aux.x;
		res.y = y -= aux.y;
		res.z = z -= aux.z;

		cout << res.x << " " << res.y << " " << res.z << " " << endl;

		return res;
	}

	bool operator += (const vec3 &aux) {

		x += aux.x;
		y += aux.y;
		z += aux.z;

		return true;
	}

	bool operator -= (const vec3 &aux) {

		x -= aux.x;
		y -= aux.y;
		z -= aux.z;

		return true;
	}

	bool operator = (const vec3 &aux) {
		x = aux.x;
		y = aux.y;
		z = aux.z;

		return true;
	}

	bool operator == (const vec3 &aux) const {
		return x == aux.x && y == aux.y && z == aux.z;
	}

	T length() const {
		return sqrt(x*x + y * y + z * z);
	}

	void normalize() {

		x = x / length();
		y = y / length();
		z = z / length();

	}

	void zero() {

		x = 0;
		y = 0;
		z = 0;
	}

	bool is_zero() const {

		return x == 0 && y == 0 && z == 0;
	}

	T distance_to(const vec3 &aux) const {

		return sqrt((x - aux.x)*(x - aux.x) + (y - aux.y)*(y - aux.y) + (z - aux.z)*(z - aux.z));
	}

	void printvec() const {
		cout << x << " " << y << "  " << z << endl;
	}

};



#endif

