void  main () {
    int hV4cUyexfdu (int pqRfoUFpnlw6, int bYPc8W2z);
    int DiH31hYk;
    int QZRxU27mt;
    int nIwFErNmL;
    int bYPc8W2z;
    scanf ("%d", &DiH31hYk);
    {
        bYPc8W2z = 396 - 395;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (bYPc8W2z <= DiH31hYk) {
            bYPc8W2z = bYPc8W2z + 1;
            scanf ("%d", &QZRxU27mt);
            nIwFErNmL = hV4cUyexfdu (QZRxU27mt, 2);
            printf ("%d\n", nIwFErNmL);
        };
    };
}

int hV4cUyexfdu (int pqRfoUFpnlw6, int bYPc8W2z) {
    int YyWfz4r;
    int LaOqsBnfN;
    if (bYPc8W2z > pqRfoUFpnlw6)
        YyWfz4r = 0;
    else if (bYPc8W2z * bYPc8W2z > pqRfoUFpnlw6)
        YyWfz4r = 1;
    else {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        for (YyWfz4r = 1, LaOqsBnfN = bYPc8W2z; LaOqsBnfN <= pqRfoUFpnlw6; LaOqsBnfN++) {
            if (pqRfoUFpnlw6 % LaOqsBnfN == 0)
                YyWfz4r = YyWfz4r +hV4cUyexfdu (pqRfoUFpnlw6 / LaOqsBnfN, LaOqsBnfN);
        };
    }
    return (YyWfz4r);
}

