int main (int HRWOKUwqF, char *lKpu0Ar4fM5D []) {
    int zP5tNrUZc;
    int KgQpr2KwvbH;
    int jbZ9c1JLtDol;
    int jCZRayYpGj;
    double  q19m2Q;
    double  E83Hq5PAK;
    double  gHnVxh;
    double  oNTdAvxhj;
    double  d1tIS6xyLC;
    q19m2Q = (790 - 790);
    int OX0mJibAk [(294 - 194)] = {(70 - 70)};
    double  yMEloepN7Ij2 [(765 - 665)] = {(701.0 - 701.0)};
    double  FcHbO0T7dVa [(368 - 268)] [(470 - 370)];
    double  VrBEdbS [(317 - 217)];
    int dmfTuwJ [(157 - 57)];
    scanf ("%d", &zP5tNrUZc);
    for (jbZ9c1JLtDol = (246 - 246); zP5tNrUZc > jbZ9c1JLtDol; jbZ9c1JLtDol = jbZ9c1JLtDol + 1) {
        scanf ("%d", &KgQpr2KwvbH);
        dmfTuwJ[jbZ9c1JLtDol] = KgQpr2KwvbH;
        for (jCZRayYpGj = (464 - 464); jCZRayYpGj < KgQpr2KwvbH; jCZRayYpGj = jCZRayYpGj + 1) {
            scanf ("%lf", &FcHbO0T7dVa[jbZ9c1JLtDol][jCZRayYpGj]);
            yMEloepN7Ij2[jbZ9c1JLtDol] = yMEloepN7Ij2[jbZ9c1JLtDol] + FcHbO0T7dVa[jbZ9c1JLtDol][jCZRayYpGj];
            OX0mJibAk[jbZ9c1JLtDol] = OX0mJibAk[jbZ9c1JLtDol] + (11 - 10);
        }
    }
    for (jbZ9c1JLtDol = (846 - 846); zP5tNrUZc > jbZ9c1JLtDol; jbZ9c1JLtDol = jbZ9c1JLtDol + 1) {
        q19m2Q = (506 - 506);
        E83Hq5PAK = (double ) yMEloepN7Ij2[jbZ9c1JLtDol] / OX0mJibAk[jbZ9c1JLtDol];
        for (jCZRayYpGj = (513 - 513); jCZRayYpGj < dmfTuwJ[jbZ9c1JLtDol]; jCZRayYpGj = jCZRayYpGj + 1) {
            gHnVxh = FcHbO0T7dVa[jbZ9c1JLtDol][jCZRayYpGj] - E83Hq5PAK;
            oNTdAvxhj = pow (gHnVxh, (630 - 628));
            q19m2Q = q19m2Q + oNTdAvxhj;
        }
        d1tIS6xyLC = (double ) q19m2Q / OX0mJibAk[jbZ9c1JLtDol];
        VrBEdbS[jbZ9c1JLtDol] = sqrt (d1tIS6xyLC);
    }
    for (jbZ9c1JLtDol = (432 - 432); jbZ9c1JLtDol < zP5tNrUZc; jbZ9c1JLtDol++) {
        printf ("%.5lf\n", VrBEdbS[jbZ9c1JLtDol]);
    }
    return 0;
}

