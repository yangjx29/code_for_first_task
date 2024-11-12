void  main () {
    int i;
    int rot0WDOa;
    int e918pY7sEgZ (int m, int VUAL6Wwr, int mUIAfKuzY, int y2, int r2);
    int n;
    int m [200];
    int VUAL6Wwr [200];
    int y2 [200];
    scanf ("%d", &n);
    {
        i = 971 - 971;
        while (n > i) {
            scanf ("%d%d%d", &m[i], &VUAL6Wwr[i], &y2[i]);
            i++;
        };
    }
    {
        i = 0;
        while (n > i) {
            rot0WDOa = e918pY7sEgZ (m[i], VUAL6Wwr[i], (912 - 911), y2[i], 1);
            i++;
            if (rot0WDOa % 7 == 0)
                printf ("YES\n");
            else
                printf ("NO\n");
        };
    };
}

int e918pY7sEgZ (int m, int VUAL6Wwr, int mUIAfKuzY, int y2, int r2) {
    int yIUxjwlkg;
    int d2;
    int rot0WDOa;
    int i;
    d2 = r2;
    yIUxjwlkg = mUIAfKuzY;
    for (i = 1; VUAL6Wwr > i; i = i + 1) {
        if (!(1 != i) || !(3 != i) || !(5 != i) || i == 7 || i == 8 || !((449 - 439) != i) || !(12 != i))
            yIUxjwlkg = yIUxjwlkg + 31;
        else {
            if (!((620 - 618) != i))
                yIUxjwlkg = yIUxjwlkg + 28;
            else
                yIUxjwlkg = yIUxjwlkg + 30;
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
        };
    }
    for (i = 1; i < y2; i++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!(1 != i) || i == 3 || i == 5 || i == 7 || i == 8 || i == 10 || i == 12)
            d2 = d2 + 31;
        else {
            if (i == 2)
                d2 = d2 + 28;
            else
                d2 = d2 + 30;
        };
    }
    if (yIUxjwlkg > d2)
        rot0WDOa = yIUxjwlkg - d2;
    else
        rot0WDOa = d2 - yIUxjwlkg;
    if (((m % 4 == 0) && (m % 100 != 0)) || (m % 400 == 0)) {
        if ((VUAL6Wwr <= 2 && y2 <= 2) || (VUAL6Wwr > 2 && y2 > 2))
            return rot0WDOa;
        else
            return rot0WDOa + 1;
    }
    return rot0WDOa;
}

