#include "zxMath.h"
#include <iostream>
#include <math.h>

zxMath::vec2::vec2()
{
	this->set(0, 0);
}

zxMath::vec2::vec2(float x, float y)
{
	this->set(x, y);
}

void zxMath::vec2::set(float x, float y)
{
	this->x = x;
	this->y = y;
}

void zxMath::vec2::show()
{
	std::cout << this->x << "\t" << this->y << "\n";
}

zxMath::vec3::vec3()
{
	this->set(0, 0, 0);
}

zxMath::vec3::vec3(float x, float y, float z)
{
	this->set(x, y, z);
}

void zxMath::vec3::set(float x, float y, float z)
{
	this->x = x;
	this->y = y;
	this->z = z;
}

void zxMath::vec3::show()
{
	std::cout << this->x << "\t" << this->y << "\t" << this->z << "\n";
}

zxMath::vec4::vec4()
{
	this->set(0, 0, 0, 0);
}

zxMath::vec4::vec4(float x, float y, float z, float a)
{
	this->set(x, y, z, a);
}

void zxMath::vec4::set(float x, float y, float z, float a)
{
	this->x = x;
	this->y = y;
	this->z = z;
	this->a = a;
}

void zxMath::vec4::show()
{
	std::cout << this->x << "\t" << this->y << "\t" << this->z << "\t" << a << "\n";
}

zxMath::mat2::mat2()
{
	this->set(1, 0, 0, 1);
}

zxMath::mat2::mat2(float a, float b, float c, float d)
{
	this->set(a, b, c, d);
}

zxMath::mat2::mat2(zxMath::vec2 A, zxMath::vec2 B)
{
	this->set(A, B);
}

void zxMath::mat2::set(float a, float b, float c, float d)
{
	this->m[0] = a; this->m[1] = b;
	this->m[2] = c; this->m[3] = d;
}

void zxMath::mat2::set(zxMath::vec2 A, zxMath::vec2 B)
{
	this->m[0] = A.x; this->m[1] = A.y;
	this->m[2] = B.x; this->m[3] = B.y;
}

void zxMath::mat2::show()
{
	std::cout << this->m[0] << "\t" << this->m[1] << "\n";
	std::cout << this->m[2] << "\t" << this->m[3] << "\n";
}

zxMath::mat3::mat3()
{
	this->set(1, 0, 0, 0, 1, 0, 0, 0, 1);
}

zxMath::mat3::mat3(float a, float b, float c, float d, float e, float f, float g, float h, float i)
{
	this->set(a, b, c, d, e, f, g, h, i);
}

zxMath::mat3::mat3(zxMath::vec3 A, zxMath::vec3 B, zxMath::vec3 C)
{
	this->set(A, B, C);
}

void zxMath::mat3::set(float a, float b, float c, float d, float e, float f, float g, float h, float i)
{
	this->m[0] = a; this->m[1] = b; this->m[2] = c;
	this->m[3] = d; this->m[4] = e; this->m[5] = f;
	this->m[6] = g; this->m[7] = h; this->m[8] = i;
}

void zxMath::mat3::set(zxMath::vec3 A, zxMath::vec3 B, zxMath::vec3 C)
{
	this->m[0] = A.x; this->m[1] = A.y; this->m[2] = A.z;
	this->m[3] = B.x; this->m[4] = B.y; this->m[5] = B.z;
	this->m[6] = C.x; this->m[7] = C.y; this->m[8] = C.z;
}

void zxMath::mat3::show()
{
	std::cout << this->m[0] << "\t" << this->m[1] << "\t" <<this->m[2] << "\t" << "\n";
	std::cout << this->m[3] << "\t" << this->m[4] << "\t" <<this->m[5] << "\t" << "\n";
	std::cout << this->m[6] << "\t" << this->m[7] << "\t" <<this->m[8] << "\t" << "\n";
}

zxMath::mat4::mat4()
{
	this->set(1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1, 0, 0, 0, 0, 1);
}

zxMath::mat4::mat4(float a, float b, float c, float d, float e, float f, float g, float h, float i, float j, float k, float l, float m, float n, float o, float p)
{
	this->set(a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p);
}

zxMath::mat4::mat4(zxMath::vec4 A, zxMath::vec4 B, zxMath::vec4 C, zxMath::vec4 D)
{
	this->set(A, B, C, D);
}

void zxMath::mat4::set(float a, float b, float c, float d, float e, float f, float g, float h, float i, float j, float k, float l, float m, float n, float o, float p)
{
	this->m[ 0] = a; this->m[ 1] = b; this->m[ 2] = c; this->m[ 3] = d;
	this->m[ 4] = e; this->m[ 5] = f; this->m[ 6] = g; this->m[ 7] = h;
	this->m[ 8] = i; this->m[ 9] = j; this->m[10] = k; this->m[11] = l;
	this->m[12] = m; this->m[13] = n; this->m[14] = o; this->m[15] = p;
}

void zxMath::mat4::set(zxMath::vec4 A, zxMath::vec4 B, zxMath::vec4 C, zxMath::vec4 D)
{
	this->m[ 0] = A.x; this->m[ 1] = A.y; this->m[ 2] = A.z; this->m[ 3] = A.a;
	this->m[ 4] = B.x; this->m[ 5] = B.y; this->m[ 6] = B.z; this->m[ 7] = B.a;
	this->m[ 8] = C.x; this->m[ 9] = C.y; this->m[10] = C.z; this->m[11] = C.a;
	this->m[12] = D.x; this->m[13] = D.y; this->m[14] = D.z; this->m[15] = D.a;
}

void zxMath::mat4::show()
{
	std::cout << this->m[ 0] << "\t" << this->m[ 1] << "\t" << this->m[ 2] << "\t" << this->m[ 3] << "\n";
	std::cout << this->m[ 4] << "\t" << this->m[ 5] << "\t" << this->m[ 6] << "\t" << this->m[ 7] << "\n";
	std::cout << this->m[ 8] << "\t" << this->m[ 9] << "\t" << this->m[10] << "\t" << this->m[11] << "\n";
	std::cout << this->m[12] << "\t" << this->m[13] << "\t" << this->m[14] << "\t" << this->m[15] << "\n";
}

zxMath::vec2 zxMath::cross(zxMath::vec2 A, zxMath::vec2 B)
{
	zxMath::vec2 R(A.x * B.y - A.y * B.x, 0);
	return R;
}

zxMath::vec3 zxMath::cross(zxMath::vec3 A, zxMath::vec3 B)
{
	zxMath::vec3 R(A.y * B.z - A.z * B.y, A.z * B.x - A.x * B.z, A.x * B.y - A.y * B.x);
	return R;
}

zxMath::vec4 zxMath::cross(zxMath::vec4 A, zxMath::vec4 B)
{
	vec4 R(A.y * B.z - A.z * B.y, A.z * B.x - A.x * B.z, A.x * B.y - A.y * B.x, 0);
	return R;
}

float zxMath::det(zxMath::mat2 A)
{
	float r = A.m[0] * A.m[3] - A.m[1] * A.m[2];
	return r;
}

float zxMath::det(zxMath::mat3 A)
{
	float r = 
	A.m[ 0] * A.m[ 4] * A.m[ 8] +
	A.m[ 1] * A.m[ 5] * A.m[ 6] +
	A.m[ 2] * A.m[ 3] * A.m[ 7] -
	A.m[ 6] * A.m[ 4] * A.m[ 2] -
	A.m[ 7] * A.m[ 5] * A.m[ 0] -
	A.m[ 8] * A.m[ 3] * A.m[ 1];
	return r;
}

float zxMath::det(zxMath::mat4 A)
{
	zxMath::mat3 J(A.m[ 1], A.m[ 2], A.m[ 3], A.m[ 5], A.m[ 6], A.m[ 7], A.m[ 9], A.m[10], A.m[11]);
	zxMath::mat3 K(A.m[ 0], A.m[ 2], A.m[ 3], A.m[ 4], A.m[ 6], A.m[ 7], A.m[ 8], A.m[10], A.m[11]);
	zxMath::mat3 L(A.m[ 0], A.m[ 1], A.m[ 3], A.m[ 4], A.m[ 5], A.m[ 7], A.m[ 8], A.m[ 9], A.m[11]);
	zxMath::mat3 M(A.m[ 0], A.m[ 1], A.m[ 2], A.m[ 4], A.m[ 5], A.m[ 6], A.m[ 8], A.m[ 9], A.m[10]);
	float d = 
	- A.m[12] * zxMath::det(J)
	+ A.m[13] * zxMath::det(K)
	- A.m[14] * zxMath::det(L)
	+ A.m[15] * zxMath::det(M);
	return d;
}

float zxMath::dot(zxMath::vec2 A, zxMath::vec2 B)
{
	return A.x * B.x + A.y * B.y;
}

float zxMath::dot(zxMath::vec3 A, zxMath::vec3 B)
{
	return A.x * B.x + A.y * B.y + A.z * B.z;
}

float zxMath::dot(zxMath::vec4 A, zxMath::vec4 B)
{
	return A.x * B.x + A.y * B.y + A.z * B.z + A.a * B.a;
}

float zxMath::magnitude(zxMath::vec2 A)
{
	return sqrt(A.x * A.x + A.y * A.y);
}

float zxMath::magnitude(zxMath::vec3 A)
{
	return sqrt(A.x * A.x + A.y * A.y + A.z * A.z);
}

float zxMath::magnitude(zxMath::vec4 A)
{
	float r = sqrt(A.x * A.x + A.y * A.y + A.z * A.z);
	return r;
}

zxMath::vec2 zxMath::normalize(zxMath::vec2 A)
{
	float d = zxMath::magnitude(A);
	zxMath::vec2 R(A.x / d, A.y / d);
	return R;
}

zxMath::vec3 zxMath::normalize(zxMath::vec3 A)
{
	float d = zxMath::magnitude(A);
	zxMath::vec3 R(A.x / d, A.y / d, A.z / d);
	return R;
}

zxMath::vec4 zxMath::normalize(zxMath::vec4 A)
{
	float d = zxMath::magnitude(A);
	zxMath::vec4 R(A.x / d, A.y / d, A.z / d, 0);
	return R;
}

zxMath::mat4 zxMath::product(zxMath::mat4 A, zxMath::mat4 B)
{
	zxMath::mat4 R(
	A.m[ 0] * B.m[ 0] + A.m[ 1] * B.m[ 4] + A.m[ 2] * B.m[ 8] + A.m[ 3] * B.m[12],
	A.m[ 0] * B.m[ 1] + A.m[ 1] * B.m[ 5] + A.m[ 2] * B.m[ 9] + A.m[ 3] * B.m[13],
	A.m[ 0] * B.m[ 2] + A.m[ 1] * B.m[ 6] + A.m[ 2] * B.m[10] + A.m[ 3] * B.m[14],
	A.m[ 0] * B.m[ 3] + A.m[ 1] * B.m[ 7] + A.m[ 2] * B.m[11] + A.m[ 3] * B.m[15],
	A.m[ 4] * B.m[ 0] + A.m[ 5] * B.m[ 4] + A.m[ 6] * B.m[ 8] + A.m[ 7] * B.m[12],
	A.m[ 4] * B.m[ 1] + A.m[ 5] * B.m[ 5] + A.m[ 6] * B.m[ 9] + A.m[ 7] * B.m[13],
	A.m[ 4] * B.m[ 2] + A.m[ 5] * B.m[ 6] + A.m[ 6] * B.m[10] + A.m[ 7] * B.m[14],
	A.m[ 4] * B.m[ 3] + A.m[ 5] * B.m[ 7] + A.m[ 6] * B.m[11] + A.m[ 7] * B.m[15],
	A.m[ 8] * B.m[ 0] + A.m[ 9] * B.m[ 4] + A.m[10] * B.m[ 8] + A.m[11] * B.m[12],
	A.m[ 8] * B.m[ 1] + A.m[ 9] * B.m[ 5] + A.m[10] * B.m[ 9] + A.m[11] * B.m[13],
	A.m[ 8] * B.m[ 2] + A.m[ 9] * B.m[ 6] + A.m[10] * B.m[10] + A.m[11] * B.m[14],
	A.m[ 8] * B.m[ 3] + A.m[ 9] * B.m[ 7] + A.m[10] * B.m[11] + A.m[11] * B.m[15],
	A.m[12] * B.m[ 0] + A.m[13] * B.m[ 4] + A.m[14] * B.m[ 8] + A.m[15] * B.m[12],
	A.m[12] * B.m[ 1] + A.m[13] * B.m[ 5] + A.m[14] * B.m[ 9] + A.m[15] * B.m[13],
	A.m[12] * B.m[ 2] + A.m[13] * B.m[ 6] + A.m[14] * B.m[10] + A.m[15] * B.m[14],
	A.m[12] * B.m[ 3] + A.m[13] * B.m[ 7] + A.m[14] * B.m[11] + A.m[15] * B.m[15]
	);
	return R;
}

zxMath::mat4 zxMath::transpose(zxMath::mat4 A)
{
	mat4 R(
	A.m[ 0], A.m[ 4], A.m[ 8], A.m[12],
	A.m[ 1], A.m[ 5], A.m[ 9], A.m[13],
	A.m[ 2], A.m[ 6], A.m[10], A.m[14],
	A.m[ 3], A.m[ 7], A.m[11], A.m[15]);
	return R;
}

zxMath::mat4 zxMath::inverse(zxMath::mat4 A)
{
	float det = zxMath::det(A), d[16];
	zxMath::mat4 R;
	if(det != 0)
	{
		for(unsigned short n = 0; n < 16; n++)
		{
			zxMath::mat3 B;
			unsigned short p = n % 4, q = n / 4, i = 0;
			for(unsigned short j = 0; j < 16; j++)
			{
				if(j % 4 != p && j / 4 != q)
				{
					B.m[i] = A.m[j];
					i++;
				}
			}
			d[n] = pow(-1, p + q + 2) * zxMath::det(B) / det;
		}
		R.set(d[0], d[4], d[8], d[12], d[1], d[5], d[9], d[13], d[2], d[6], d[10], d[14], d[3], d[7], d[11], d[15]);
	}
	else
	{
		std::cout << "matrix does not have an inverse. Determinant is zero.\n";
	}
	return R;
}

zxMath::mat4 zxMath::perspective(float fovy, float width, float height, float near, float far)
{
	float aspect = width / height, f = 1 / tan(fovy / 2);
	zxMath::mat4 R(
	f / aspect, 0, 0, 0,
	0, f, 0, 0,
	0, 0, (far + near) / (near - far), -1,
	0, 0, (2 * far * near) / (near - far), 0);
	return R;
}

zxMath::mat4 zxMath::lookAt(zxMath::vec3 E, zxMath::vec3 C, zxMath::vec3 U)
{
	zxMath::vec3 L = zxMath::normalize(zxMath::vec3(C.x - E.x, C.y - E.y, C.z - E.z));
	zxMath::vec3 S = zxMath::normalize(zxMath::cross(L, U));
	zxMath::vec3 V = zxMath::cross(S, L);
	L.x *= -1; L.y *= -1; L.z *= -1;
	zxMath::mat4 R(
	vec4(S.x, V.x, L.x, 0),
    vec4(S.y, V.y, L.y, 0),
    vec4(S.z, V.z, L.z, 0),
    vec4(-dot(S, E), -dot(V, E), -dot(L, E), 1));
	return R;
}

zxMath::mat4 zxMath::modelViewProjection(zxMath::mat4 M, zxMath::mat4 V, zxMath::mat4 P)
{
	zxMath::mat4 R = zxMath::product(zxMath::product(M, V), P);
	return R;
}

zxMath::mat4 zxMath::defaultCamera(zxMath::vec3 E, zxMath::vec3 C)
{
	zxMath::vec3 U(0, 0, 1);
	return zxMath::lookAt(E, C, U);
}
