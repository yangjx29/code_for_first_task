int main () {
    int eohKmlrAy [12] = {(498 - 467), 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int Tyx3Rm;
    int t9lWBJ4M5;
    int y4drUAuZ9;
    int hnWSAxb6Ovd;
    int J5BanQ;
    int hl9W7Q;
    int Ldm5enIK;
    scanf ("%d", &Tyx3Rm);
    {
        t9lWBJ4M5 = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (t9lWBJ4M5 <= Tyx3Rm) {
            t9lWBJ4M5 = t9lWBJ4M5 + 1;
            eohKmlrAy[1] = 28;
            hnWSAxb6Ovd = 0;
            scanf ("%d%d%d", &J5BanQ, &hl9W7Q, &Ldm5enIK);
            if (!(0 != J5BanQ % 4) && (!(0 == J5BanQ % 100) || J5BanQ % 400 == 0))
                eohKmlrAy[1] = 29;
            if (hl9W7Q > Ldm5enIK) {
                y4drUAuZ9 = hl9W7Q;
                hl9W7Q = Ldm5enIK;
                Ldm5enIK = y4drUAuZ9;
            }
            {
                y4drUAuZ9 = hl9W7Q;
                while (y4drUAuZ9 < Ldm5enIK) {
                    hnWSAxb6Ovd = hnWSAxb6Ovd + eohKmlrAy[y4drUAuZ9 - 1];
                    y4drUAuZ9 = y4drUAuZ9 + 1;
                };
            }
            if (hnWSAxb6Ovd % 7 == 0)
                printf ("YES\n");
            else
                ;
        };
    }
    return 0;
}

