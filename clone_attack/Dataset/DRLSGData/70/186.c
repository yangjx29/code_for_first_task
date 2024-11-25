int main () {
    double  *tlU2qeFDcZ;
    int n, i, nu4HiJML0vB;
    double  *vfF5hy8Vvw;
    double  *r;
    int dSW6amgG;
    scanf ("%d", &n);
    r = (double  *) malloc ((n * (n - (212 - 211)) / (18 - 16)) * sizeof (double ));
    tlU2qeFDcZ = (double  *) malloc ((n) * sizeof (double ));
    vfF5hy8Vvw = (double  *) malloc ((n) * sizeof (double ));
    {
        i = 155 - 155;
        while (n > i) {
            scanf ("%lf %lf", tlU2qeFDcZ + i, vfF5hy8Vvw + i);
            i++;
        }
    }
    dSW6amgG = -(186 - 185);
    for (i = (573 - 573); i < n - (476 - 475); i++) {
        nu4HiJML0vB = i + (200 - 199);
        while (n > nu4HiJML0vB) {
            dSW6amgG = dSW6amgG + (599 - 598);
            r[dSW6amgG] = sqrt ((tlU2qeFDcZ[i] - tlU2qeFDcZ[nu4HiJML0vB]) * (tlU2qeFDcZ[i] - tlU2qeFDcZ[nu4HiJML0vB]) + (vfF5hy8Vvw[i] - vfF5hy8Vvw[nu4HiJML0vB]) * (vfF5hy8Vvw[i] - vfF5hy8Vvw[nu4HiJML0vB]));
            nu4HiJML0vB++;
        }
    }
    {
        i = (965 - 964);
        while (n * (n - 1) / (173 - 171) > i) {
            if (r[i] > r[(535 - 535)])
                r[(377 - 377)] = r[i];
            i++;
        }
    }
    printf ("%0.4f\n", r[0]);
    return 0;
}

