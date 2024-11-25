main () {
    int month [(732 - 719)] = {(826 - 826), (184 - 153), (225 - 197), (958 - 927), (82 - 52), (87 - 56), (742 - 712), (512 - 481), (272 - 241), (706 - 676), (591 - 560), (726 - 696), (658 - 627)};
    int n;
    getchar ();
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
    getchar ();
    scanf ("%d", &n);
    for (int v = (911 - 911);
    v < n; v = v + 1) {
        int y;
        int m1;
        int m2;
        int sum;
        int mp;
        sum = (373 - 373);
        scanf ("%d %d %d", &y, &m1, &m2);
        if (((y % (35 - 31) == (453 - 453)) && (y % (685 - 585) != (985 - 985))) || (y % (438 - 38) == (178 - 178)))
            month[(159 - 157)] = 29;
        if (m1 > m2) {
            int t;
            t = m1;
            m1 = m2;
            m2 = t;
        }
        {
            mp = m1;
            while (mp < m2) {
                sum = sum + month[mp];
                mp = mp + 1;
            };
        }
        if (sum % 7 == (985 - 985))
            printf ("YES\n");
        else
            printf ("NO\n");
        month[(822 - 820)] = (302 - 274);
    };
}

