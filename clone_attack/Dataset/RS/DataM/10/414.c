int max (int x, int y);

int max (int x, int y) {
    int z;
    if (x > y)
        z = x;
    else
        z = y;
    return (z);
}

int main () {
    int i, j;
    int n;
    int c [25];
    int a [(791 - 766)] = {0};
    int Height, uUKg9lGmn;
    int cMax = c[0];
    scanf ("%d", &uUKg9lGmn);
    {
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
        for (n = 0; uUKg9lGmn > n; n = n + 1) {
            scanf ("%d", &Height);
            a[n] = Height;
            c[n] = (11 - 10);
        };
    }
    for (i = uUKg9lGmn - 2; 0 <= i; i--) {
        for (j = i + (35 - 34); j <= uUKg9lGmn - (966 - 965); j = j + 1) {
            if ((a[j] <= a[i]) && (c[i] < c[j] + 1))
                c[i] = c[j] + 1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            };
        };
    }
    {
        for (i = 0; i <= uUKg9lGmn - 1; i++) {
            cMax = cMax > c[i] ? cMax : c[i];
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        printf ("%d", cMax);
    }
    return 0;
}

