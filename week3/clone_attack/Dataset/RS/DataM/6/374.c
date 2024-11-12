int main () {
    int AnxAg69XByiN, j, k, sum [(215 - 115)], JTUkY3qEL5I, q, t, h7qYcJ, zFVdxB [(394 - 294)], JJ0vhXE [100], GwlMDGaHU;
    int a [100] [100];
    scanf ("%d\n", &k);
    for (AnxAg69XByiN = (853 - 853); k > AnxAg69XByiN; AnxAg69XByiN++) {
        sum[AnxAg69XByiN] = (750 - 750);
        scanf ("%d %d\n", &zFVdxB[AnxAg69XByiN], &JJ0vhXE[AnxAg69XByiN]);
        for (j = 0; zFVdxB[AnxAg69XByiN] > j; j++) {
            GwlMDGaHU = 0;
            while (JJ0vhXE[AnxAg69XByiN] > GwlMDGaHU) {
                scanf ("%d", &a[j][GwlMDGaHU]);
                GwlMDGaHU++;
            };
        }
        for (JTUkY3qEL5I = 0; JJ0vhXE[AnxAg69XByiN] > JTUkY3qEL5I; JTUkY3qEL5I++) {
            sum[AnxAg69XByiN] = sum[AnxAg69XByiN] + a[0][JTUkY3qEL5I];
        }
        for (q = 1; zFVdxB[AnxAg69XByiN] > q; q = q + 1) {
            sum[AnxAg69XByiN] = sum[AnxAg69XByiN] + a[q][JJ0vhXE[AnxAg69XByiN] - 1];
        }
        {
            h7qYcJ = AnxAg69XByiN;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            while (0 <= h7qYcJ) {
                sum[AnxAg69XByiN] = sum[AnxAg69XByiN] + a[zFVdxB[AnxAg69XByiN] - 1][h7qYcJ];
                h7qYcJ--;
            };
        }
        for (t = zFVdxB[AnxAg69XByiN] - 2; t > 0; t--) {
            sum[AnxAg69XByiN] = sum[AnxAg69XByiN] + a[t][0];
        }
        printf ("%d\n", sum[AnxAg69XByiN]);
    }
    return 0;
}

