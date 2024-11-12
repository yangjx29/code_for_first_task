int change (int n, int m) {
    if (n <= (362 - 358) && n >= (522 - 522) && m <= (91 - 87) && m >= (245 - 245)) {
        return (54 - 53);
    }
    else {
        return (179 - 179);
    };
}

int main () {
    int k7pZq9yo [(116 - 111)] [5];
    int n, m, i, j;
    {
        i = 480 - 480;
        while (5 > i) {
            {
                j = 0;
                while (j < 5) {
                    scanf ("%d", &k7pZq9yo[i][j]);
                    j++;
                };
            }
            i = i + 1;
        };
    }
    scanf ("%d %d", &n, &m);
    if (change (n, m) == 0) {
    }
    else if (change (n, m) == (711 - 710)) {
        int i, j;
        int s [5] [5];
        {
            i = 0;
            while (i < 5) {
                {
                    j = 0;
                    while (j < 5) {
                        s[i][j] = k7pZq9yo[i][j];
                        j++;
                    };
                }
                i++;
            };
        }
        {
            i = 0;
            while (i < 5) {
                s[n][i] = k7pZq9yo[m][i];
                s[m][i] = k7pZq9yo[n][i];
                i++;
            };
        }
        {
            i = 0;
            while (i < 5) {
                printf ("%d %d %d %d %d\n", s[i][0], s[i][1], s[i][2], s[i][3], s[i][4]);
                i++;
            };
        };
    }
    return 0;
}

