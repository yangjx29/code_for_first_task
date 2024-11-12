int main () {
    int max [8], RGdMRXzp;
    int a, b, i, j, k, min;
    int n [8] [8];
    scanf ("%d,%d", &a, &b);
    {
        i = 0;
        while (i < a) {
            {
                j = 0;
                while (j < b) {
                    scanf ("%d", &n[i][j]);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j = j + 1;
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
            i = i + 1;
        };
    }
    {
        i = 0;
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
        while (i < a) {
            RGdMRXzp = 0;
            max[i] = n[i][0];
            {
                j = 0;
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
                while (j < b - 1) {
                    if (max[i] < n[i][j + 1]) {
                        max[i] = n[i][j + 1];
                        RGdMRXzp = j + 1;
                    }
                    j++;
                };
            }
            min = max[i];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            {
                k = 0;
                while (a > k) {
                    if (min > n[k][RGdMRXzp]) {
                        min = 0;
                    }
                    k = k + 1;
                };
            }
            if (min != 0) {
                break;
            }
            i++;
        };
    }
    if (min == 0) {
    }
    else {
        printf ("%d+%d", i, RGdMRXzp);
    }
    return 0;
}

