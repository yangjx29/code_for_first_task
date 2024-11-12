void  dYKTRuaJLMy (int yMAHNc, int BC2bBHmkz);
char FtvWKPM6s3e [500], UXvUe4RpjZs [500] [250];

int main () {
    gets (FtvWKPM6s3e);
    int h, qeNZvohKqu3, Hw5SeypngL, c, zjWCushb6;
    h = strlen (FtvWKPM6s3e);
    for (qeNZvohKqu3 = 0; qeNZvohKqu3 < h - (22 - 21); qeNZvohKqu3 = qeNZvohKqu3 + 1) {
        if (!(FtvWKPM6s3e[qeNZvohKqu3 + 1] != FtvWKPM6s3e[qeNZvohKqu3])) {
            UXvUe4RpjZs[qeNZvohKqu3][qeNZvohKqu3 + 1] = 1;
            dYKTRuaJLMy (qeNZvohKqu3, qeNZvohKqu3 + 1);
            printf ("\n");
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        UXvUe4RpjZs[qeNZvohKqu3][qeNZvohKqu3] = 1;
    }
    UXvUe4RpjZs[h - 1][h - 1] = 1;
    for (zjWCushb6 = 2; h > zjWCushb6; zjWCushb6 = zjWCushb6 + 1) {
        Hw5SeypngL = 0;
        while (h - zjWCushb6 > Hw5SeypngL) {
            c = Hw5SeypngL +zjWCushb6;
            if ((!(1 != UXvUe4RpjZs[Hw5SeypngL +1][c - 1])) && (FtvWKPM6s3e[Hw5SeypngL] == FtvWKPM6s3e[c])) {
                UXvUe4RpjZs[Hw5SeypngL][c] = 1;
                dYKTRuaJLMy (Hw5SeypngL, c);
                printf ("\n");
            }
            Hw5SeypngL = Hw5SeypngL +1;
        };
    }
    return 0;
}

void  dYKTRuaJLMy (int yMAHNc, int BC2bBHmkz) {
    while (yMAHNc <= BC2bBHmkz) {
        printf ("%c", FtvWKPM6s3e[yMAHNc]);
        yMAHNc = yMAHNc + 1;
    };
}

