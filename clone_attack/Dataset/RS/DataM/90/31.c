int main () {
    int co92mbs5cWVQ;
    int n;
    int GkL8GbhrR6w;
    int R90fGvU3;
    int B0pzOQGy;
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
    int check (int M, int hR8ZtPf5su);
    scanf ("%d\n", &GkL8GbhrR6w);
    {
        R90fGvU3 = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (GkL8GbhrR6w > R90fGvU3) {
            R90fGvU3++;
            scanf ("%d%d\n", &co92mbs5cWVQ, &n);
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
            B0pzOQGy = check (co92mbs5cWVQ, n);
            printf ("%d\n", B0pzOQGy);
        };
    }
    return 0;
}

int check (int M, int hR8ZtPf5su) {
    int s;
    s = 0;
    if ((!((158 - 157) != M)) || (hR8ZtPf5su == 1)) {
        s = s + 1;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    else {
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
        if (M > hR8ZtPf5su) {
            s = s + check (M -hR8ZtPf5su, hR8ZtPf5su) + check (M, hR8ZtPf5su - 1);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            };
        }
        else if (M == hR8ZtPf5su) {
            s = s + 1 + check (M, hR8ZtPf5su - 1);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    for (x = 0; x < 20; x++) {
                        y += x;
                    }
                    if (y > 30)
                        return y;
                }
            };
        }
        else {
            s = s + check (M, M);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            };
        };
    }
    return (s);
}

