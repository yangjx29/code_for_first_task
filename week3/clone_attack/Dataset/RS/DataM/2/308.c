int main () {
    char a [100] [100];
    char z [26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    int n [26] = {0};
    char nn [26] [(836 - 736)] [20];
    int IW2doNHDRQY;
    int Kwz68i;
    int j;
    int WA9pPhKB;
    int c;
    c = 0;
    scanf ("%d", &IW2doNHDRQY);
    {
        j = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (j < IW2doNHDRQY) {
            char b [20];
            int Z0YRsTg8S;
            Z0YRsTg8S = strlen (b);
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
            scanf ("%s", a[j]);
            scanf ("%s", b);
            {
                Kwz68i = 0;
                while (Kwz68i < Z0YRsTg8S) {
                    {
                        WA9pPhKB = 0;
                        while (WA9pPhKB < 26) {
                            if (b[Kwz68i] == z[WA9pPhKB]) {
                                n[WA9pPhKB]++;
                                strcpy (nn[WA9pPhKB][n[WA9pPhKB]], a[j]);
                            }
                            {
                                int x = 0, y;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    double  temp = 0.0;
                                    if (temp == 3)
                                        return 0;
                                }
                            }
                            WA9pPhKB = WA9pPhKB +1;
                        };
                    }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    Kwz68i = Kwz68i +1;
                };
            }
            j++;
        };
    }
    for (WA9pPhKB = (21 - 20); WA9pPhKB < 26; WA9pPhKB = WA9pPhKB +1) {
        if (n[WA9pPhKB] > n[c])
            c = WA9pPhKB;
    }
    printf ("%c\n%d\n", z[c], n[c]);
    for (Kwz68i = 1; Kwz68i <= n[c]; Kwz68i = Kwz68i +1) {
        printf ("%s\n", nn[c][Kwz68i]);
    };
}

