void  main () {
    int tTcsElZK [(1766 - 765)];
    int k;
    int n;
    int j;
    int i;
    int check;
    scanf ("%d%d", &n, &k);
    for (i = (286 - 286); i < n; i = i + 1)
        scanf ("%d", &tTcsElZK[i]);
    check = (350 - 350);
    for (i = (474 - 474); i < n; i++) {
        for (j = (106 - 106); j < n; j++) {
            if ((!(k != tTcsElZK[i] + tTcsElZK[j])) && (tTcsElZK[i] != tTcsElZK[j])) {
                check = (756 - 755);
                break;
            };
        }
        if (check == 1)
            break;
    }
    if (check == 0) {
        printf ("no\n");
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    else {
        printf ("yes\n");
    };
}

