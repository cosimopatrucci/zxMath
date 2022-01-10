#ifndef zxMath_h
#define zxMath_h

namespace zxMath
{
	class vec2
	{
	public:
		double								x, y;
		vec2();
		vec2(double x, double y);
	};

	class vec3
	{
	public:
		double								x, y, z;
		vec3();
		vec3(double x, double y, double z);
	};

	class vec4
	{
	public:
		double								x, y, z, a;
		vec4();
		vec4(double x, double y, double z, double a);
	};
	
	class mat2
	{
	public:
		double								m[4];
		mat2();
		mat2(double a, double b, double c, double d);
		mat2(vec2 A, vec2 B);
		void								show();
	};
	
	class mat3
	{
	public:
		double								m[9];
		mat3();
		mat3(double a, double b, double c, double d, double e, double f, double g, double h, double i);
		mat3(vec3 A, vec3 B, vec3 C);
		void								show();
	};

	class mat4
	{
	public:
		double 								m[16];
		mat4();
		mat4(double a, double b, double c, double d, double e, double f, double g, double h, double i, double j, double k, double l, double m, double n, double o, double p);
		mat4(vec4 A, vec4 B, vec4 C, vec4 D);
		void								show();
	};
	
	vec2									cross(vec2 A, vec2 B);
	vec3									cross(vec3 A, vec3 B);
	vec4									cross(vec4 A, vec4 B);
	double									det(mat2 A);
	double									det(mat3 A);
	double									det(mat4 A);
	double									dot(vec2 A, vec2 B);
	double									dot(vec3 A, vec3 B);
	double									dot(vec4 A, vec4 B);
	double									magnitude(vec2 A);
	double									magnitude(vec3 A);
	double									magnitude(vec4 A);
	vec2									normalize(vec2 A);
	vec3									normalize(vec3 A);
	vec4									normalize(vec4 A);
	mat4									product(mat4 A, mat4 B);
	mat4									transpose(mat4 A);
	mat4									inverse(mat4 A);
	mat4									perspective(double fovy, double width, double height, double near, double far);
	mat4									lookAt(vec3 E, vec3 C, vec3 U);
	mat4									defaultCamera(vec3 E, vec3 C);
};

#endif
