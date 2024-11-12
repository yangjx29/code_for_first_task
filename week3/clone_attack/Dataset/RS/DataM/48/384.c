int AmgVuejlB1U [9] [9] = {0};
int b [9] [9] = {0};

void  R1xqF0L2 () {
    int TqyVGDM1A7, vwq9yroPLShJ, c;
    for (TqyVGDM1A7 = 0; 9 > TqyVGDM1A7; TqyVGDM1A7 = TqyVGDM1A7 +1)
        for (vwq9yroPLShJ = 0; vwq9yroPLShJ < 9; vwq9yroPLShJ++)
            b[TqyVGDM1A7][vwq9yroPLShJ] = 0;
    for (TqyVGDM1A7 = 0; TqyVGDM1A7 < 9; TqyVGDM1A7++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (vwq9yroPLShJ = 0; vwq9yroPLShJ < 9; vwq9yroPLShJ++) {
            if (AmgVuejlB1U[TqyVGDM1A7][vwq9yroPLShJ] != 0) {
                c = AmgVuejlB1U[TqyVGDM1A7][vwq9yroPLShJ];
                b[TqyVGDM1A7][vwq9yroPLShJ] = b[TqyVGDM1A7][vwq9yroPLShJ] + c;
                b[TqyVGDM1A7][vwq9yroPLShJ - 1] = b[TqyVGDM1A7][vwq9yroPLShJ - 1] + c;
                b[TqyVGDM1A7][vwq9yroPLShJ + 1] = b[TqyVGDM1A7][vwq9yroPLShJ + 1] + c;
                b[TqyVGDM1A7 +1][vwq9yroPLShJ] = b[TqyVGDM1A7 +1][vwq9yroPLShJ] + c;
                b[TqyVGDM1A7 +1][vwq9yroPLShJ - 1] += c;
                b[TqyVGDM1A7 +1][vwq9yroPLShJ + 1] = b[TqyVGDM1A7 +1][vwq9yroPLShJ + 1] + c;
                b[TqyVGDM1A7 -1][vwq9yroPLShJ] = b[TqyVGDM1A7 -1][vwq9yroPLShJ] + c;
                b[TqyVGDM1A7 -1][vwq9yroPLShJ - 1] = b[TqyVGDM1A7 -1][vwq9yroPLShJ - 1] + c;
                b[TqyVGDM1A7 -1][vwq9yroPLShJ + 1] = b[TqyVGDM1A7 -1][vwq9yroPLShJ + 1] + c;
            };
        };
    }
    for (TqyVGDM1A7 = 0; TqyVGDM1A7 < 9; TqyVGDM1A7++)
        for (vwq9yroPLShJ = 0; vwq9yroPLShJ < 9; vwq9yroPLShJ++)
            AmgVuejlB1U[TqyVGDM1A7][vwq9yroPLShJ] = AmgVuejlB1U[TqyVGDM1A7][vwq9yroPLShJ] + b[TqyVGDM1A7][vwq9yroPLShJ];
}

int main (void ) {
    int m;
    int ofAWzgPYnCj;
    int TqyVGDM1A7;
    int vwq9yroPLShJ;
    scanf ("%d%d", &m, &ofAWzgPYnCj);
    AmgVuejlB1U[4][4] = m;
    {
        TqyVGDM1A7 = 0;
        while (TqyVGDM1A7 < ofAWzgPYnCj) {
            TqyVGDM1A7++;
            R1xqF0L2 ();
        };
    }
    {
        TqyVGDM1A7 = 0;
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
        while (TqyVGDM1A7 < 9) {
            {
                vwq9yroPLShJ = 0;
                while (vwq9yroPLShJ < 8) {
                    printf ("%d ", AmgVuejlB1U[TqyVGDM1A7][vwq9yroPLShJ]);
                    vwq9yroPLShJ++;
                };
            }
            printf ("%d\n", AmgVuejlB1U[TqyVGDM1A7][vwq9yroPLShJ]);
            TqyVGDM1A7++;
        };
    };
}

