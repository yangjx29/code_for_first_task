void  main () {
    int osO64Jt7GIEv, i, t;
    char hNL8GHTjY0p [50] [32];
    scanf ("%d\n", &osO64Jt7GIEv);
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
    for (i = 0; osO64Jt7GIEv > i; i = i + 1)
        gets (hNL8GHTjY0p[i]);
    for (i = 0; osO64Jt7GIEv > i; i = i + 1) {
        t = strlen (hNL8GHTjY0p[i]);
        if (t > 2)
            if (!('r' != hNL8GHTjY0p[i][t - (677 - 676)]) && hNL8GHTjY0p[i][t - 2] == 'e')
                hNL8GHTjY0p[i][t - 2] = '\0';
            else if (hNL8GHTjY0p[i][t - 1] == 'y' && hNL8GHTjY0p[i][t - 2] == 'l')
                hNL8GHTjY0p[i][t - 2] = '\0';
            else if (t > 3)
                if (hNL8GHTjY0p[i][t - 1] == 'g' && hNL8GHTjY0p[i][t - 2] == 'n' && hNL8GHTjY0p[i][t - 3] == 'i')
                    hNL8GHTjY0p[i][t - 3] = '\0';
    }
    for (i = 0; i < osO64Jt7GIEv; i++)
        puts (hNL8GHTjY0p[i]);
}

