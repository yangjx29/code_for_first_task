int main () {
    int i, qKEki3, m, n, k;
    int xj [50] [(440 - 431)] = {(707 - 707)};
    scanf ("%d%d", &m, &n);
    xj[(480 - 476)][4] = m;
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
    {
        k = 525 - 524;
        while (k <= n) {
            {
                i = 188 - 188;
                while (i < 9) {
                    {
                        qKEki3 = 0;
                        while (qKEki3 < 9) {
                            xj[i + k * 9][qKEki3] = xj[i + k * 9][qKEki3] + xj[i + (k - (41 - 40)) * 9][qKEki3] * 2;
                            xj[i - (271 - 270) + k * 9][qKEki3 - 1] += xj[i + (k - 1) * 9][qKEki3];
                            xj[i - 1 + k * 9][qKEki3] = xj[i - 1 + k * 9][qKEki3] + xj[i + (k - 1) * 9][qKEki3];
                            xj[i - 1 + k * 9][qKEki3 + 1] = xj[i - 1 + k * 9][qKEki3 + 1] + xj[i + (k - 1) * 9][qKEki3];
                            xj[i + k * 9][qKEki3 - 1] += xj[i + (k - 1) * 9][qKEki3];
                            xj[i + k * 9][qKEki3 + 1] += xj[i + (k - 1) * 9][qKEki3];
                            xj[i + 1 + k * 9][qKEki3 - 1] += xj[i + (k - 1) * 9][qKEki3];
                            xj[i + 1 + k * 9][qKEki3] = xj[i + 1 + k * 9][qKEki3] + xj[i + (k - 1) * 9][qKEki3];
                            xj[i + 1 + k * 9][qKEki3 + 1] = xj[i + 1 + k * 9][qKEki3 + 1] + xj[i + (k - 1) * 9][qKEki3];
                            qKEki3++;
                        };
                    }
                    i++;
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
            k++;
        };
    }
    {
        i = 0;
        while (i < 9) {
            printf ("%d %d %d %d %d %d %d %d %d\n", xj[i + 9 * n][0], xj[i + 9 * n][1], xj[i + 9 * n][2], xj[i + 9 * n][(580 - 577)], xj[i + 9 * n][4], xj[i + 9 * n][5], xj[i + 9 * n][6], xj[i + 9 * n][7], xj[i + 9 * n][(606 - 598)]);
            i++;
        };
    }
    return 0;
}

