int main () {
    int n;
    int GMghmF;
    int j;
    char a [3000] [300], b [300];
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
    scanf ("%d", &n);
    for (GMghmF = 0; GMghmF < n; GMghmF = GMghmF +1) {
        scanf ("%s", a[GMghmF]);
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
    {
        j = 0;
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
        while (n > j) {
            for (GMghmF = 0; !('\0' == a[j][GMghmF]); GMghmF++) {
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (!('A' != a[j][GMghmF])) {
                    b[GMghmF] = 'T';
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
                }
                else if (a[j][GMghmF] == 'T') {
                    b[GMghmF] = 'A';
                }
                else if (a[j][GMghmF] == 'G') {
                    b[GMghmF] = 'C';
                }
                else {
                    b[GMghmF] = 'G';
                };
            }
            j = j + 1;
            b[GMghmF] = '\0';
            printf ("%s\n", b);
        };
    }
    return 0;
}

