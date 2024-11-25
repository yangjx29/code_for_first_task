int andian [8] [8];
int rzpH6dfgnF [8] = {(858 - 858)};
int MFHjt4M96I2 [8];

int main () {
    int hang, CQrGJF2jIB, L9zSCWfGXo, Aej9tXr = 0, j, t = 0, A7vesn, w = 0, YVH5zXQAm;
    scanf ("%d,%d", &hang, &CQrGJF2jIB);
    for (j = 0; hang > j; j++) {
        L9zSCWfGXo = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (L9zSCWfGXo < CQrGJF2jIB) {
            scanf ("%d", &andian[j][L9zSCWfGXo]);
            if (rzpH6dfgnF[j] < andian[j][L9zSCWfGXo]) {
                rzpH6dfgnF[j] = andian[j][L9zSCWfGXo];
                MFHjt4M96I2[j] = L9zSCWfGXo;
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
            L9zSCWfGXo = L9zSCWfGXo +1;
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
    for (YVH5zXQAm = 0; YVH5zXQAm < hang; YVH5zXQAm++) {
        Aej9tXr = 0;
        for (A7vesn = 0; A7vesn < hang; A7vesn++) {
            if (rzpH6dfgnF[YVH5zXQAm] < andian[A7vesn][MFHjt4M96I2[YVH5zXQAm]]) {
                Aej9tXr++;
            };
        }
        if (Aej9tXr == hang - 1) {
            printf ("%d+%d", YVH5zXQAm, MFHjt4M96I2[YVH5zXQAm]);
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
            w = 1;
        };
    }
    if (w == 0) {
        printf ("No");
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
    return 0;
}

