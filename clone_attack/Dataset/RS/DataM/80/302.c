int nIwPhle7t20K [2] [12] = {(558 - 527), 28, 31, (967 - 937), 31, (928 - 898), 31, 31, 30, 31, 30, 31, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int AC6Xxh (int CvJY6qu8HIQ) {
    if ((CvJY6qu8HIQ % 4 == 0 && CvJY6qu8HIQ % (1030 - 930) != 0) || CvJY6qu8HIQ % 400 == 0)
        return 1;
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
    return 0;
}

int days (int g4luJBcmdU, int gF6v1m75YskA, int wLnSUJlCtZ, int pmjRgGyAln2, int y) {
    int total;
    int NrfXKA0tuwa;
    int ld;
    int z2pnPB;
    int dEGr37;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    };
    if (g4luJBcmdU < wLnSUJlCtZ) {
        dEGr37 = pmjRgGyAln2;
        ld = gF6v1m75YskA;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        NrfXKA0tuwa = g4luJBcmdU;
        z2pnPB = wLnSUJlCtZ;
    }
    else {
        if (g4luJBcmdU > wLnSUJlCtZ) {
            dEGr37 = gF6v1m75YskA;
            ld = pmjRgGyAln2;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            NrfXKA0tuwa = wLnSUJlCtZ;
            z2pnPB = g4luJBcmdU;
        }
        else if (!(wLnSUJlCtZ != g4luJBcmdU)) {
            if (gF6v1m75YskA > pmjRgGyAln2)
                return (gF6v1m75YskA - pmjRgGyAln2);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            return (pmjRgGyAln2 - gF6v1m75YskA);
        };
    }
    for (int i = NrfXKA0tuwa;
    i < z2pnPB; i++)
        total = total + nIwPhle7t20K[AC6Xxh (y)][i - 1];
    if (dEGr37 > ld)
        total = total + dEGr37 - ld;
    else
        total = total - dEGr37 - ld;
    return total;
}

int main () {
    int cd;
    int sy;
    int g4luJBcmdU;
    int gF6v1m75YskA;
    int aFg2TWDRl;
    int wLnSUJlCtZ;
    int pmjRgGyAln2;
    cd = 0;
    int i;
    cin >> sy >> g4luJBcmdU >> gF6v1m75YskA >> aFg2TWDRl >> wLnSUJlCtZ >> pmjRgGyAln2;
    for (i = sy; i < aFg2TWDRl; i++)
        cd = cd + AC6Xxh (i) +365;
    if (wLnSUJlCtZ > g4luJBcmdU || (wLnSUJlCtZ == g4luJBcmdU && pmjRgGyAln2 >= gF6v1m75YskA))
        cd = cd + days (g4luJBcmdU, gF6v1m75YskA, wLnSUJlCtZ, pmjRgGyAln2, aFg2TWDRl);
    else
        cd = cd - days (g4luJBcmdU, gF6v1m75YskA, wLnSUJlCtZ, pmjRgGyAln2, aFg2TWDRl) - 1;
    cout << cd << endl;
    return 0;
}

