int main () {
    char rank [4];
    int sOvLR37iPV;
    int ipmkUGLPgza;
    int c;
    int i;
    int POJ7Fg2h [4];
    for (sOvLR37iPV = (163 - 162); sOvLR37iPV <= 3; sOvLR37iPV = sOvLR37iPV + 1) {
        ipmkUGLPgza = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (3 >= ipmkUGLPgza) {
            if (!(ipmkUGLPgza != sOvLR37iPV))
                continue;
            for (c = 1; 3 >= c; c++) {
                if (!(c != ipmkUGLPgza) || sOvLR37iPV == c)
                    continue;
                POJ7Fg2h[sOvLR37iPV] = (sOvLR37iPV < ipmkUGLPgza) + (!(sOvLR37iPV != c));
                POJ7Fg2h[ipmkUGLPgza] = (sOvLR37iPV > ipmkUGLPgza) + (sOvLR37iPV > c);
                POJ7Fg2h[c] = (c > ipmkUGLPgza) + (ipmkUGLPgza > sOvLR37iPV);
                rank[sOvLR37iPV] = 'A';
                rank[ipmkUGLPgza] = 'B';
                rank[c] = 'C';
                if (POJ7Fg2h[1] == 2 && POJ7Fg2h[2] == 1 && POJ7Fg2h[3] == 0) {
                    for (i = 1; i <= 3; i++)
                        cout << rank[i];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    };
                };
            }
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
            ipmkUGLPgza = ipmkUGLPgza + 1;
        };
    }
    return 0;
}

