int main () {
    double  R8wstDW2J9, b;
    int n1, dcPme4EDvn, m = (52 - 52), zeEiQMmyfqZN = (633 - 633);
    char RRp8ui5YTjSE [500], s2 [500];
    scanf ("%lf", &R8wstDW2J9);
    scanf ("%s %s", RRp8ui5YTjSE, s2);
    n1 = strlen (RRp8ui5YTjSE);
    dcPme4EDvn = strlen (s2);
    for (int ZzTdGjV = 0;
    !('\0' == RRp8ui5YTjSE[ZzTdGjV]); ZzTdGjV++) {
        if ((!('A' != RRp8ui5YTjSE[ZzTdGjV]) || RRp8ui5YTjSE[ZzTdGjV] == 'G' || RRp8ui5YTjSE[ZzTdGjV] == 'C' || !('T' != RRp8ui5YTjSE[ZzTdGjV])) && (s2[ZzTdGjV] == 'A' || s2[ZzTdGjV] == 'G' || s2[ZzTdGjV] == 'C' || s2[ZzTdGjV] == 'T')) {
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
            if (RRp8ui5YTjSE[ZzTdGjV] == s2[ZzTdGjV]) {
                m++;
            };
        }
        else
            zeEiQMmyfqZN = 1;
    }
    if (zeEiQMmyfqZN == 1 || n1 != dcPme4EDvn) {
        printf ("error\n");
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    else {
        b = m * 1.0 / n1;
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
        if (R8wstDW2J9 < b) {
            printf ("yes\n");
        }
        else
            printf ("no\n");
    }
    return 0;
}

