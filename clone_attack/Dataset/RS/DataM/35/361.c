int main () {
    int BHXjv94ZAhCV [10] [10] = {(443 - 443)}, i, j, vWyUAF1fK, n, aSLmDQUOTzfx = (198 - 198), temp, oyoZMaVb, n_, w;
    scanf ("%d,%d", &vWyUAF1fK, &n);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < vWyUAF1fK) {
            for (j = 0; j < n; j = j + 1)
                scanf ("%d", &BHXjv94ZAhCV[i][j]);
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
            i = i + 1;
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
    {
        i = 0;
        while (i < vWyUAF1fK) {
            temp = BHXjv94ZAhCV[i][0];
            oyoZMaVb = i;
            n_ = 0;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            {
                j = 0;
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
                while (j < n) {
                    if (BHXjv94ZAhCV[i][j] > temp) {
                        temp = BHXjv94ZAhCV[i][j];
                        n_ = j;
                        oyoZMaVb = i;
                    }
                    j = j + 1;
                };
            }
            for (w = 0; w < vWyUAF1fK; w = w + 1) {
                if (w == oyoZMaVb)
                    continue;
                if (BHXjv94ZAhCV[w][n_] > temp) {
                    if (w == vWyUAF1fK - 1) {
                        printf ("%d+%d", oyoZMaVb, n_);
                        aSLmDQUOTzfx = aSLmDQUOTzfx + 1;
                    }
                    else
                        continue;
                }
                else
                    break;
            }
            i++;
        };
    }
    if (aSLmDQUOTzfx == 0)
        printf ("No\n");
    else
        printf ("\n");
    return 0;
}

