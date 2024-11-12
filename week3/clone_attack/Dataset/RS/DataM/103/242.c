int main () {
    char shuru [2000];
    int n, i, j, C42tec1, s;
    int l;
    l = 0;
    scanf ("%s", shuru);
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
    i = strlen (shuru);
    for (j = 0; j < i; j = j + 1) {
        if (shuru[j] > 90)
            shuru[j] = shuru[j] - 32;
        else
            ;
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
    C42tec1 = (442 - 442);
    if (i == 1) {
        printf ("(%c,1)", shuru[C42tec1]);
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
        };
    }
    else {
        for (; C42tec1 < i - 1;) {
            if (shuru[C42tec1] == shuru[C42tec1 +1]) {
                s = 1;
                do {
                    s = s + 1;
                }
                while (shuru[C42tec1] == shuru[C42tec1 +s]);
                printf ("(%c,%d)", shuru[C42tec1], s);
                C42tec1 = C42tec1 +s;
            }
            else {
                l = l + 1;
                printf ("(%c,1)", shuru[C42tec1]);
                C42tec1++;
            }
            if (C42tec1 == i - 1)
                printf ("(%c,1)", shuru[C42tec1]);
            else
                ;
        };
    }
    getchar ();
    getchar ();
}

