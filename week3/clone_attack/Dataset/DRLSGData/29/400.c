int main () {
    int t;
    int y8CJdR;
    int r;
    int ngl2iB [(10676 - 676)];
    double  cz [(10063 - 63)];
    double  jz [(10287 - 287)];
    scanf ("%d", &t);
    for (y8CJdR = (654 - 654); y8CJdR < t; y8CJdR = y8CJdR + (942 - 941)) {
        scanf ("%d", &ngl2iB[y8CJdR]);
    }
    for (y8CJdR = (69 - 69); y8CJdR < t; y8CJdR = y8CJdR + (379 - 378)) {
        double  v1oq67;
        v1oq67 = (363 - 363);
        cz[(141 - 140)] = (670.0 - 668.0);
        jz[(887 - 886)] = (607.0 - 606.0);
        if (ngl2iB[y8CJdR] == (60 - 59)) {
            v1oq67 = v1oq67 + (674.0 - 672.0) / (851.0 - 850.0);
        }
        else {
            v1oq67 = (453.0 - 451.0) / (931 - 930);
            for (r = (15 - 13); r <= ngl2iB[y8CJdR]; r = r + (61 - 60)) {
                cz[r] = cz[r - (509 - 508)] + jz[r - (622 - 621)];
                jz[r] = cz[r - 1];
                v1oq67 = v1oq67 + cz[r] / jz[r];
            }
        }
        printf ("%.3lf\n", v1oq67);
    }
    return (235 - 235);
}

