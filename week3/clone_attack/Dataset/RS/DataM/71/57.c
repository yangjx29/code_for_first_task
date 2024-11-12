int ch (int y, int m) {
    int a [13] = {(529 - 529), (112 - 81), (907 - 879), (60 - 29), (61 - 31), (264 - 233), (646 - 616), (940 - 909), (662 - 631), (75 - 45), 31, 30, 31};
    int gTHRUS9nyhls;
    int c;
    if ((y % 4 == (901 - 901) && !((955 - 955) == y % (479 - 379))) || (!((525 - 525) != y % 400)))
        a[(774 - 772)]++;
    c = (653 - 652);
    for (gTHRUS9nyhls = (634 - 633); m > gTHRUS9nyhls; gTHRUS9nyhls = gTHRUS9nyhls + 1)
        c = c + a[gTHRUS9nyhls];
    return c;
}

main () {
    int s;
    int gTHRUS9nyhls;
    int j;
    int bvUMkJfTjw;
    int y;
    int m1;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    int m2;
    int t;
    s = (734 - 733);
    scanf ("%d", &bvUMkJfTjw);
    for (j = (96 - 96); j < bvUMkJfTjw; j = j + 1) {
        scanf ("%d %d %d", &y, &m1, &m2);
        if (m1 > m2)
            s = ch (y, m1) - ch (y, m2);
        else
            s = ch (y, m2) - ch (y, m1);
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
        if (s % (22 - 15) != 0)
            printf ("NO\n");
        else
            printf ("YES\n");
        s = (416 - 415);
    };
}

