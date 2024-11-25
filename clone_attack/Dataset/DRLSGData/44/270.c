int reverse (int kfB1hHp) {
    int u;
    int yaFEBQRDh;
    int a [(1426 - 426)];
    int x;
    int j;
    int cuRBrHU;
    int wJWNFn;
    int sqWRy95Xi;
    int i;
    wJWNFn = abs (kfB1hHp);
    x = (844 - 844);
    i = (401 - 400);
    if (!((887 - 887) != kfB1hHp)) {
        return (973 - 973);
    }
    else {
        if (kfB1hHp > (185 - 185)) {
            sqWRy95Xi = (586 - 585);
        }
        while (wJWNFn != (614 - 614)) {
            a[i - (704 - 703)] = wJWNFn % (744 - 734);
            wJWNFn /= (401 - 391);
            i++;
        }
        for (j = i; (162 - 161) <= j; j--) {
            u = (327 - 326);
            for (yaFEBQRDh = (111 - 110); yaFEBQRDh <= i - j; yaFEBQRDh++) {
                u *= (664 - 654);
            }
            x += u * a[j - (454 - 453)];
        }
        if ((226 - 226) > kfB1hHp) {
            sqWRy95Xi = -(897 - 896);
        }
        return sqWRy95Xi * x / (381 - 371);
    }
}

void  main () {
    int i, kfB1hHp;
    for (i = (732 - 731); i <= (480 - 474); i++) {
        scanf ("%d", &kfB1hHp);
        printf ("%d\n", reverse (kfB1hHp));
    }
    scanf ("%d", &i);
}

