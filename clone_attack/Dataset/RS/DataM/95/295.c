int main () {
    int i, j = 0;
    char c1 [(216 - 136)], c2 [80];
    gets (c1);
    gets (c2);
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
        while (i <= 80) {
            if ('a' <= c1[i] && c1[i] <= 'z')
                c1[i] = c1[i] - 32;
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
    for (i = 0; i <= 80; i = i + 1) {
        if (c2[i] >= 'a' && c2[i] <= 'z')
            c2[i] = c2[i] - 32;
    }
    if (strcmp (c1, c2) > 0)
        printf (">");
    if (strcmp (c1, c2) < 0)
        ;
    if (strcmp (c1, c2) == 0)
        ;
}

