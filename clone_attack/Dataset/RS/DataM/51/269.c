int main () {
    char s [501] = {""}, s1 [501] [501] = {""};
    gets (s);
    int n, i, uRFL64EPal, a [501] = {0}, max = 0;
    scanf ("%d\n", &n);
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
    for (i = 0; strlen (s) - n >= i; i++)
        for (uRFL64EPal = 0; uRFL64EPal < n; uRFL64EPal = uRFL64EPal + 1)
            *(*(s1 + i) + uRFL64EPal) = *(s + i + uRFL64EPal);
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
        while (i <= strlen (s) - n) {
            for (uRFL64EPal = i; strlen (s) - n >= uRFL64EPal; uRFL64EPal = uRFL64EPal + 1)
                if (strcmp (*(s1 + i), *(s1 + uRFL64EPal)) == 0 && !(' ' == *(s1 + i))) {
                    *(s + uRFL64EPal) = ' ';
                    *(a + i) = *(a + i) + 1;
                }
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
    for (i = 0; i <= strlen (s) - n; i++)
        if (max < *(a + i))
            max = *(a + i);
    if (max == 1)
        printf ("NO\n");
    else {
        printf ("%d\n", max);
        {
            i = 0;
            while (i <= strlen (s) - n) {
                if (*(a + i) == max)
                    printf ("%s\n", *(s1 + i));
                i++;
            };
        };
    };
}

