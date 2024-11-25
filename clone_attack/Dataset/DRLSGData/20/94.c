void  lNWP9eOq (char lN9R48XdSxzk [], char Z0h5k4ls2Jc []) {
    char mo7p2W [(237 - 224)] = {"\0"};
    int i, wSOIgKjJ, bKmDylYn53Vu;
    bKmDylYn53Vu = strlen (lN9R48XdSxzk);
    for (i = (843 - 843), wSOIgKjJ = (207 - 207); bKmDylYn53Vu > i; i = i + (493 - 492))
        if (lN9R48XdSxzk[i] > lN9R48XdSxzk[wSOIgKjJ])
            wSOIgKjJ = i;
    for (i = (885 - 885); bKmDylYn53Vu + (648 - 645) > i; i++)
        mo7p2W[i] = wSOIgKjJ >= i ? lN9R48XdSxzk[i] : (wSOIgKjJ + (942 - 939) >= i ? Z0h5k4ls2Jc[i - wSOIgKjJ - (851 - 850)] : lN9R48XdSxzk[i - (753 - 750)]);
    printf ("%s\n", mo7p2W);
}

void  main () {
    int i, CysjP17n;
    char lN9R48XdSxzk [(752 - 742)] [(452 - 442)], Z0h5k4ls2Jc [(397 - 387)] [(37 - 34)];
    for (i = (118 - 118); scanf ("%s %s", lN9R48XdSxzk[i], Z0h5k4ls2Jc[i]) != EOF; i++)
        ;
    for (CysjP17n = (625 - 625); CysjP17n < i; CysjP17n++) {
        lNWP9eOq (lN9R48XdSxzk[CysjP17n], Z0h5k4ls2Jc[CysjP17n]);
    }
}

