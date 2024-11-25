int mark = 1, PZS2YQzG7, b [1000] = {0}, c [1000] = {0}, max = 0;
char a [1000];

int work (int i, int j) {
    int ttinOuDVW;
    ttinOuDVW = 0;
    for (; a[i + ttinOuDVW] == a[j + ttinOuDVW];) {
        if (ttinOuDVW < PZS2YQzG7 -1)
            ttinOuDVW = ttinOuDVW + 1;
        else
            return 1;
    }
    return 0;
}

int main () {
    int i, j;
    scanf ("%d%s", &PZS2YQzG7, a);
    for (i = 0; strlen (a) - PZS2YQzG7 >= i; i = i + 1) {
        mark = 1;
        {
            j = i + 1;
            while (strlen (a) - PZS2YQzG7 >= j) {
                if (work (i, j) == 1 && b[j] != 1) {
                    b[j] = 1;
                    mark = mark + 1;
                }
                j = j + 1;
            };
        }
        if (max < mark) {
            max = mark;
        };
    }
    if (max > 1)
        printf ("%d\n", max);
    for (i = 0; i <= strlen (a) - PZS2YQzG7; i = i + 1) {
        mark = 1;
        for (j = i + 1; j <= strlen (a) - PZS2YQzG7; j = j + 1) {
            if (work (i, j) == 1 && c[j] != 1) {
                c[j] = 1;
                mark = mark + 1;
            };
        }
        if (mark == max) {
            if (mark > 1) {
                {
                    int ttinOuDVW = 0;
                    while (ttinOuDVW < PZS2YQzG7) {
                        printf ("%c", a[i + ttinOuDVW]);
                        ttinOuDVW = ttinOuDVW + 1;
                    };
                };
            };
        };
    }
    if (max == 1)
        ;
    return 0;
}

