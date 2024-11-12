int main () {
    char zero [7] = {'0'};
    int max = 1;
    int hhCbXIq [500];
    int i, j;
    int DKCFZkyJL;
    char moto [510];
    int n;
    char (*a) [(434 - 427)];
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
    a = (char (*) [7]) malloc (sizeof (char (*) [7]) * (DKCFZkyJL -n + 1));
    scanf ("%s", moto);
    DKCFZkyJL = strlen (moto);
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
        while (500 > i) {
            hhCbXIq[i] = 1;
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
    for (i = 0; DKCFZkyJL >= i + n; i = i + 1) {
        for (j = 0; n > j; j = j + 1) {
            *(*(a + i) + j) = *(moto + i + j);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        }
        *(*(a + i) + n) = '\0';
    }
    DKCFZkyJL = DKCFZkyJL -n + 1;
    for (i = 1; DKCFZkyJL > i; i++) {
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
        for (j = 0; i > j; j = j + 1) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            if (!(0 != strcmp (*(a + j), *(a + i)))) {
                strcpy (*(a + i), zero);
                *(hhCbXIq + j) += 1;
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
                break;
            };
        };
    }
    for (j = 0; j < DKCFZkyJL; j++) {
        if (max < *(hhCbXIq + j))
            max = *(hhCbXIq + j);
    }
    if (max > 1) {
        printf ("%d\n", max);
        {
            i = 0;
            while (i < DKCFZkyJL) {
                if (*(hhCbXIq + i) == max)
                    printf ("%s\n", *(a + i));
                i++;
            };
        };
    }
    else
        ;
}

