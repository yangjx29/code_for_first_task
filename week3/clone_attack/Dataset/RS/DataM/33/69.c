int main () {
    int n;
    int i;
    int k;
    int len [1000];
    char s [1000] [256];
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
    scanf ("%d", &n);
    for (i = (533 - 533); n > i; i = i + 1) {
        scanf ("%s", s[i]);
        len[i] = strlen (s[i]);
        for (k = (661 - 661); len[i] > k; k++) {
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
            switch (s[i][k]) {
            case 'A' :
                {
                    s[i][k] = 'T';
                    break;
                }
            case 'T' :
                {
                    s[i][k] = 'A';
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
                    break;
                }
            case 'C' :
                {
                    s[i][k] = 'G';
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    break;
                }
            case 'G' :
                {
                    s[i][k] = 'C';
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
        };
    }
    for (i = 0; i < n; i++)
        printf ("%s\n", s[i]);
    return 0;
}

