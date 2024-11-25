int adQisZ4t [(961 - 952)] [9], b [9] [9];

void  work (int x, int y, char s) {
    int KYsdgVWKT6Q, j, w1O4Xw9pJBy;
    w1O4Xw9pJBy = (s == 'b') ? adQisZ4t[x][y] : b[x][y];
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
    for (KYsdgVWKT6Q = x - 1; KYsdgVWKT6Q <= x + 1; KYsdgVWKT6Q = KYsdgVWKT6Q +1)
        for (j = y - 1; j <= y + 1; j = j + 1)
            if (s == 'a')
                adQisZ4t[KYsdgVWKT6Q][j] = adQisZ4t[KYsdgVWKT6Q][j] + w1O4Xw9pJBy;
            else
                b[KYsdgVWKT6Q][j] = b[KYsdgVWKT6Q][j] + w1O4Xw9pJBy;
}

int main () {
    int m, ubye01fdJ, k, KYsdgVWKT6Q, j;
    scanf ("%d %d", &m, &ubye01fdJ);
    adQisZ4t[4][4] = m;
    for (k = 1; k <= ubye01fdJ; k = k + 1)
        if (k % 2 == 1) {
            for (KYsdgVWKT6Q = 0; KYsdgVWKT6Q < 9; KYsdgVWKT6Q = KYsdgVWKT6Q +1)
                for (j = 0; j < 9; j++)
                    b[KYsdgVWKT6Q][j] = adQisZ4t[KYsdgVWKT6Q][j];
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
            for (KYsdgVWKT6Q = 0; KYsdgVWKT6Q < 9; KYsdgVWKT6Q = KYsdgVWKT6Q +1)
                for (j = 0; j < 9; j++)
                    if (adQisZ4t[KYsdgVWKT6Q][j] > 0)
                        work (KYsdgVWKT6Q, j, 'b');
        }
        else {
            for (KYsdgVWKT6Q = 0; KYsdgVWKT6Q < 9; KYsdgVWKT6Q = KYsdgVWKT6Q +1)
                for (j = 0; j < 9; j++)
                    adQisZ4t[KYsdgVWKT6Q][j] = b[KYsdgVWKT6Q][j];
            for (KYsdgVWKT6Q = 0; KYsdgVWKT6Q < 9; KYsdgVWKT6Q++) {
                j = 0;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                while (j < 9) {
                    if (b[KYsdgVWKT6Q][j] > 0)
                        work (KYsdgVWKT6Q, j, 'a');
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
                    j = j + 1;
                };
            };
        }
    if (ubye01fdJ % 2 == 1)
        for (KYsdgVWKT6Q = 0; KYsdgVWKT6Q < 9; KYsdgVWKT6Q++) {
            for (j = 0; j < 8; j++)
                printf ("%d ", b[KYsdgVWKT6Q][j]);
            printf ("%d\n", b[KYsdgVWKT6Q][j]);
        }
    else
        for (KYsdgVWKT6Q = 0; KYsdgVWKT6Q < 9; KYsdgVWKT6Q++) {
            {
                j = 0;
                while (j < 8) {
                    printf ("%d ", adQisZ4t[KYsdgVWKT6Q][j]);
                    j = j + 1;
                };
            }
            printf ("%d\n", adQisZ4t[KYsdgVWKT6Q][j]);
        }
    return 0;
}

