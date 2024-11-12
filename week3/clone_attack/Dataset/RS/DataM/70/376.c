int main () {
    double  sz2x7yVIm [(304 - 204)] = {0};
    double  AyYUuq8nv [(201 - 101)] = {0};
    int i;
    int apl9xdP;
    int SzwWePO;
    double  laQxCXHV67zh [100] [100] = {0};
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
    double  maxdis;
    maxdis = 0;
    cin >> SzwWePO;
    for (i = 1; SzwWePO >= i; i++) {
        cin >> sz2x7yVIm[i] >> AyYUuq8nv[i];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    for (i = 1; i <= SzwWePO; i++)
        for (apl9xdP = 1; apl9xdP <= SzwWePO; apl9xdP = apl9xdP + 1) {
            laQxCXHV67zh[i][apl9xdP] = sqrt ((sz2x7yVIm[i] - sz2x7yVIm[apl9xdP]) * (sz2x7yVIm[i] - sz2x7yVIm[apl9xdP]) + (AyYUuq8nv[i] - AyYUuq8nv[apl9xdP]) * (AyYUuq8nv[i] - AyYUuq8nv[apl9xdP]));
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
            if (laQxCXHV67zh[i][apl9xdP] > maxdis)
                maxdis = laQxCXHV67zh[i][apl9xdP];
        }
    printf ("%.4f\n", maxdis);
    return 0;
}

