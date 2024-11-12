int su (int p) {
    int i;
    int j;
    int w;
    w = 1;
    for (i = 2; i < p; i++)
        if (p % i == 0)
            w = 0;
    if (w == 1)
        return (1);
    else
        return (0);
}

main () {
    int WyShe5XPRk2;
    int i;
    int j;
    int k;
    scanf ("%d", &WyShe5XPRk2);
    for (i = 3; WyShe5XPRk2 / 2 + 1 > i; i++)
        if ((su (i) == 1) && (su (WyShe5XPRk2 -i) == 1))
            printf ("%d %d\n", i, WyShe5XPRk2 -i);
}

