#ifndef zxMath_h
#define zxMath_h

namespace zxMath
{
	class vec2
	{
	public:
		float								x, y;
		vec2();
		vec2(float x, float y);
		void								set(float x, float y);
		void								show();
	};

	class vec3
	{
	public:
		float								x, y, z;
		vec3();
		vec3(float x, float y, float z);
		void								set(float x, float y, float z);
		void								show();
	};

	class vec4
	{
	public:
		float								x, y, z, a;
		vec4();
		vec4(float x, float y, float z, float a);
		void								set(float x, float y, float z, float a);
		void								show();
	};
	
	class mat2
	{
	public:
		float								m[4];
		mat2();
		mat2(float a, float b, float c, float d);
		mat2(vec2 A, vec2 B);
		void								set(float a, float b, float c, float d);
		void								set(vec2 A, vec2 B);
		void								show();
	};
	
	class mat3
	{
	public:
		float								m[9];
		mat3();
		mat3(float a, float b, float c, float d, float e, float f, float g, float h, float i);
		mat3(vec3 A, vec3 B, vec3 C);
		void								set(float a, float b, float c, float d, float e, float f, float g, float h, float i);
		void								set(vec3 A, vec3 B, vec3 C);
		void								show();
	};

	class mat4
	{
	public:
		float 								m[16];
		mat4();
		mat4(float a, float b, float c, float d, float e, float f, float g, float h, float i, float j, float k, float l, float m, float n, float o, float p);
		mat4(vec4 A, vec4 B, vec4 C, vec4 D);
		void								set(float a, float b, float c, float d, float e, float f, float g, float h, float i, float j, float k, float l, float m, float n, float o, float p);
		void								set(vec4 A, vec4 B, vec4 C, vec4 D);
		void								show();
	};
	
	vec2									cross(vec2 A, vec2 B);
	vec3									cross(vec3 A, vec3 B);
	vec4									cross(vec4 A, vec4 B);
	float									det(mat2 A);
	float									det(mat3 A);
	float									det(mat4 A);
	float									dot(vec2 A, vec2 B);
	float									dot(vec3 A, vec3 B);
	float									dot(vec4 A, vec4 B);
	float									magnitude(vec2 A);
	float									magnitude(vec3 A);
	float									magnitude(vec4 A);
	vec2									normalize(vec2 A);
	vec3									normalize(vec3 A);
	vec4									normalize(vec4 A);
	mat4									product(mat4 A, mat4 B);
	mat4									transpose(mat4 A);
	mat4									inverse(mat4 A);
	mat4									perspective(float fovy, float width, float height, float near, float far);
	mat4									lookAt(vec3 E, vec3 C, vec3 U);
	mat4									defaultCamera(vec3 E, vec3 C);
	mat4									modelViewProjection(mat4 M, mat4 V, mat4 P);
};

#endif
