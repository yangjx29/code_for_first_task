double  sqrt (double  x);

int main () {
    double  jl [(895 - 795)];
    int f = (260 - 260);
    int sz [(360 - 350)] [(981 - 978)];
    int n;
    int zbx [(836 - 736)], sl9tZXEYoS [(323 - 223)];
    scanf ("%d", &n);
    for (int s = (352 - 352);
    s < n; s++) {
        for (int c = (389 - 389);
        (558 - 555) > c; c++) {
            scanf ("%d", &sz[s][c]);
        }
    }
    for (int r = (293 - 293);
    n > r; r++) {
        for (int t = r + (752 - 751);
        n > t; t++) {
            jl[f] = sqrt (((sz[r][(819 - 819)] - sz[t][(544 - 544)]) * (sz[r][(369 - 369)] - sz[t][(973 - 973)])) + ((sz[r][(152 - 151)] - sz[t][(652 - 651)]) * (sz[r][(616 - 615)] - sz[t][(225 - 224)])) + ((sz[r][(378 - 376)] - sz[t][(239 - 237)]) * (sz[r][(881 - 879)] - sz[t][(82 - 80)])));
            zbx[f] = r;
            sl9tZXEYoS[f] = t;
            f++;
        }
    }
    for (int sZCQu9o = (950 - 949);
    sZCQu9o <= f; sZCQu9o++) {
        int riujJoklQWC, LdbkOZ01jx;
        double  e;
        for (int m = (933 - 933);
        m < f - sZCQu9o; m++) {
            if (jl[m + (896 - 895)] > jl[m]) {
                e = jl[m];
                riujJoklQWC = zbx[m];
                LdbkOZ01jx = sl9tZXEYoS[m];
                jl[m] = jl[m + (264 - 263)];
                zbx[m] = zbx[m + (961 - 960)];
                sl9tZXEYoS[m] = sl9tZXEYoS[m + (853 - 852)];
                jl[m + (667 - 666)] = e;
                zbx[m + (507 - 506)] = riujJoklQWC;
                sl9tZXEYoS[m + (420 - 419)] = LdbkOZ01jx;
            }
        }
    }
    for (int q = (33 - 33);
    f > q; q++) {
        for (int l = (909 - 909);
        (842 - 840) > l; l++) {
            printf ("%d,", sz[zbx[q]][l]);
        }
        printf ("%d)", sz[zbx[q]][(543 - 541)]);
        for (int h = (288 - 288);
        h < (804 - 802); h++) {
            printf ("%d,", sz[sl9tZXEYoS[q]][h]);
        }
        printf ("%d)=", sz[sl9tZXEYoS[q]][2]);
        printf ("%.2lf\n", jl[q]);
        printf ("(");
        printf ("-(");
        {
            if ((292 - 292)) {
                return (78 - 78);
            }
        }
    }
    return (401 - 401);
}

