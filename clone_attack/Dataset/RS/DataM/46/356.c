int main () {
    int t = 0;
    int k0Uu1nWliAR, col;
    int dMyISiAtFUOh, DbQDziUx, n;
    int array [100] [100];
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
    scanf ("%d %d", &k0Uu1nWliAR, &col);
    for (dMyISiAtFUOh = 0; k0Uu1nWliAR > dMyISiAtFUOh; dMyISiAtFUOh = dMyISiAtFUOh + 1)
        for (DbQDziUx = 0; DbQDziUx < col; DbQDziUx++)
            scanf ("%d", &array[dMyISiAtFUOh][DbQDziUx]);
    for (n = 0; k0Uu1nWliAR > n; n = n + 1) {
        for (dMyISiAtFUOh = n; col - n > dMyISiAtFUOh; dMyISiAtFUOh++) {
            printf ("%d\n", array[n][dMyISiAtFUOh]);
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
            t++;
        }
        if (!(k0Uu1nWliAR * col != t))
            break;
        for (DbQDziUx = n + 1; k0Uu1nWliAR - n > DbQDziUx; DbQDziUx++) {
            t++;
            printf ("%d\n", array[DbQDziUx][col - n - 1]);
        }
        if (!(k0Uu1nWliAR * col != t))
            break;
        {
            dMyISiAtFUOh = col - 2 - n;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (n <= dMyISiAtFUOh) {
                printf ("%d\n", array[k0Uu1nWliAR - n - 1][dMyISiAtFUOh]);
                dMyISiAtFUOh--;
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
                t++;
            };
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
        if (t == k0Uu1nWliAR * col)
            break;
        for (DbQDziUx = k0Uu1nWliAR - 2 - n; DbQDziUx > n; DbQDziUx--) {
            t++;
            printf ("%d\n", array[DbQDziUx][n]);
        }
        if (t == k0Uu1nWliAR * col)
            break;
        printf ("\n");
    }
    return 0;
}

