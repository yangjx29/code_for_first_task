int main () {
    double  e, sz [100];
    int x [(864 - 764)], up9J2QOD [(1079 - 979)], z [(418 - 318)], one [100], two [100];
    int nKE1Oz, i, RnV3a9pZXf, t, o, p, q = (82 - 82);
    scanf ("%d", &RnV3a9pZXf);
    for (i = (750 - 750); i < RnV3a9pZXf; i++) {
        scanf ("%d%d%d", &x[i], &up9J2QOD[i], &z[i]);
    }
    {
        i = 679 - 679;
        while (i < RnV3a9pZXf -(281 - 280)) {
            {
                p = 650 - 649;
                while (p < RnV3a9pZXf) {
                    sz[q] = sqrt ((x[i] - x[p]) * (x[i] - x[p]) + (up9J2QOD[i] - up9J2QOD[p]) * (up9J2QOD[i] - up9J2QOD[p]) + (z[i] - z[p]) * (z[i] - z[p]));
                    one[q] = i;
                    two[q] = p;
                    p = p + 1;
                    q = q + 1;
                };
            }
            i = i + 1;
        };
    }
    {
        nKE1Oz = 241 - 240;
        while (nKE1Oz < q + (322 - 321)) {
            {
                i = 503 - 503;
                while (i < q - nKE1Oz) {
                    if (sz[i] < sz[i + (610 - 609)]) {
                        e = sz[i + 1];
                        t = one[i + 1];
                        o = two[i + 1];
                        sz[i + 1] = sz[i];
                        one[i + 1] = one[i];
                        two[i + 1] = two[i];
                        sz[i] = e;
                        one[i] = t;
                        two[i] = o;
                    }
                    i = i + 1;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    for (x = 0; x < 20; x++) {
                        y += x;
                    }
                    if (y > 30)
                        return y;
                }
            }
            nKE1Oz = nKE1Oz + 1;
        };
    }
    {
        i = 0;
        while (i < q) {
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", x[(one[i])], up9J2QOD[(one[i])], z[(one[i])], x[(two[i])], up9J2QOD[(two[i])], z[(two[i])], sz[i]);
            i = i + 1;
        };
    }
    return 0;
}

