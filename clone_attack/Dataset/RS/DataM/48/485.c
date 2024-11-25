void  ekV76KXxoqJ (int a [(668 - 657)] [11], int s8g15JkHPFT [11] [11]) {
    int i;
    int j;
    {
        i = 407 - 406;
        while (i <= (834 - 825)) {
            {
                j = 578 - 577;
                while (j <= 9) {
                    s8g15JkHPFT[i][j] = 0;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j++;
                };
            }
            i++;
        };
    }
    {
        i = 761 - 760;
        while (9 >= i) {
            {
                j = 253 - 252;
                while (j <= 9) {
                    s8g15JkHPFT[i][j] = s8g15JkHPFT[i][j] + a[i][j] * 2;
                    s8g15JkHPFT[i + (34 - 33)][j] += a[i][j];
                    s8g15JkHPFT[i - 1][j] += a[i][j];
                    s8g15JkHPFT[i + 1][j + 1] = s8g15JkHPFT[i + 1][j + 1] + a[i][j];
                    s8g15JkHPFT[i + 1][j - 1] = s8g15JkHPFT[i + 1][j - 1] + a[i][j];
                    s8g15JkHPFT[i - 1][j + 1] = s8g15JkHPFT[i - 1][j + 1] + a[i][j];
                    s8g15JkHPFT[i - 1][j - 1] = s8g15JkHPFT[i - 1][j - 1] + a[i][j];
                    s8g15JkHPFT[i][j + 1] = s8g15JkHPFT[i][j + 1] + a[i][j];
                    s8g15JkHPFT[i][j - 1] = s8g15JkHPFT[i][j - 1] + a[i][j];
                    j++;
                };
            }
            i++;
        };
    };
}

void  printarray (int a [11] [11]) {
    int i;
    int j;
    {
        i = 1;
        while (i <= 9) {
            {
                j = 1;
                while (j <= 9) {
                    printf ("%d", a[i][j]);
                    if (j != 9)
                        ;
                    else
                        printf ("\n");
                    j++;
                };
            }
            i++;
        };
    };
}

int main () {
    int a [11] [11] = {0}, s8g15JkHPFT [11] [11] = {0};
    int osLM24fxFgS8, n, i;
    scanf ("%d %d", &osLM24fxFgS8, &n);
    a[5][5] = osLM24fxFgS8;
    {
        i = 0;
        while (i <= n) {
            if (i % 2 == 0)
                ekV76KXxoqJ (a, s8g15JkHPFT);
            else
                ekV76KXxoqJ (s8g15JkHPFT, a);
            i++;
        };
    }
    if (i % 2 == 0)
        printarray (s8g15JkHPFT);
    else
        printarray (a);
}

