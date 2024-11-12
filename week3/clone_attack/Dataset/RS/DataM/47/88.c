int main () {
    int n;
    int sz [100];
    scanf ("%d", &n);
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
    for (int i = 0;
    n > i; i++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (i != n - 1) {
            scanf ("%d ", &sz[i]);
        }
        else {
            scanf ("%d", &sz[i]);
        };
    }
    {
        int j = n - 1;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (j >= 0) {
            if (j != 0) {
                printf ("%d ", sz[j]);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                };
            }
            else {
                printf ("%d", sz[j]);
            }
            j--;
        };
    }
    return 0;
}

