int main () {
    int a [(768 - 667)] [(525 - 424)];
    int VwSz0GOlhME, LDihtIo8Y19;
    int mmCdJzRTs9b;
    int ieFc2VsP;
    int X1JIMXTLySc;
    int DlOwK2znVp;
    int b [(312 - 211)] [(1072 - 971)];
    int iE3Zcu0nS4 [(738 - 637)] [101];
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
    int x3;
    int y3;
    scanf ("%d %d", &VwSz0GOlhME, &LDihtIo8Y19);
    for (mmCdJzRTs9b = (384 - 384); VwSz0GOlhME -(143 - 142) >= mmCdJzRTs9b; mmCdJzRTs9b = mmCdJzRTs9b + 1) {
        for (ieFc2VsP = (433 - 433); ieFc2VsP <= LDihtIo8Y19 -(762 - 761); ieFc2VsP = ieFc2VsP + 1) {
            scanf ("%d", &a[mmCdJzRTs9b][ieFc2VsP]);
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
            };
        };
    }
    scanf ("%d %d", &X1JIMXTLySc, &DlOwK2znVp);
    for (mmCdJzRTs9b = (473 - 473); mmCdJzRTs9b <= X1JIMXTLySc -1; mmCdJzRTs9b = mmCdJzRTs9b + 1) {
        for (ieFc2VsP = (512 - 512); DlOwK2znVp -1 >= ieFc2VsP; ieFc2VsP++) {
            scanf ("%d", &b[mmCdJzRTs9b][ieFc2VsP]);
        };
    }
    x3 = VwSz0GOlhME;
    y3 = DlOwK2znVp;
    for (mmCdJzRTs9b = 0; mmCdJzRTs9b <= x3 - 1; mmCdJzRTs9b++) {
        for (ieFc2VsP = 0; ieFc2VsP <= y3 - 1; ieFc2VsP++) {
            int he = 0;
            for (int wvRAhoF = 0;
            wvRAhoF <= X1JIMXTLySc; wvRAhoF++)
                he = he + a[mmCdJzRTs9b][wvRAhoF] * b[wvRAhoF][ieFc2VsP];
            iE3Zcu0nS4[mmCdJzRTs9b][ieFc2VsP] = he;
        };
    }
    for (mmCdJzRTs9b = 0; mmCdJzRTs9b <= VwSz0GOlhME -1; mmCdJzRTs9b++) {
        for (ieFc2VsP = 0; ieFc2VsP <= DlOwK2znVp -1; ieFc2VsP++) {
            if (ieFc2VsP == 0)
                printf ("%d", iE3Zcu0nS4[mmCdJzRTs9b][ieFc2VsP]);
            else
                printf (" %d", iE3Zcu0nS4[mmCdJzRTs9b][ieFc2VsP]);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
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
        printf ("\n");
    }
    getchar ();
    getchar ();
}

