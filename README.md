Opengl - notes

PROJECTION MATRIX:

gluPerspective(fovy, width, height, near, far);

fovy vertical: angle in degree;
width e height: screen window;
near: distance between eye and first plane;
far distance between eye and last plane;

aspect = width / height;

f = 1/tan(fovy/2); // WARNING: fovy must not be converted to radians

Mat4x4 = {
f/aspect, 0, 0, 0,
0, f, 0, 0,
0, 0, (far+near)/(near-far), -1,
0, 0, (2*far*near)/(near-far), 0
}

VIEW MATRIX:

gluLookAt(E, C, U);

E eye position;
C target;
U axis position (0,0,1) z points up;

L = normalize(C - E);
S = normalize(L * U); (cross product)
V = S * L;

L = -L;

Mat4x4 = {
S.x, V.x, L.x, 0,
S.y, V.y, L.y, 0,
S.z, V.z, L.z, 0,
-dot(S, E), -dot(V, E), -dot(L, E), 1
}
