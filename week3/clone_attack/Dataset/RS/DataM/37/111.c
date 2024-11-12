void  main () {
    char str [100000];
    int XU4Rvyh;
    int yBVeANfR6l;
    int j;
    int len;
    int uMqatFYdRAZ;
    scanf ("%d", &XU4Rvyh);
    for (uMqatFYdRAZ = (768 - 768); uMqatFYdRAZ < XU4Rvyh; uMqatFYdRAZ = uMqatFYdRAZ + 1) {
        scanf ("%s", str);
        len = strlen (str);
        for (yBVeANfR6l = 0; len > yBVeANfR6l; yBVeANfR6l = yBVeANfR6l + 1) {
            for (j = 0; len > j; j++) {
                if (!(j != yBVeANfR6l)) {
                    continue;
                }
                else if (str[yBVeANfR6l] == str[j])
                    break;
            }
            if (j >= len) {
                printf ("%c\n", str[yBVeANfR6l]);
                break;
            };
        }
        if (yBVeANfR6l >= len)
            printf ("no\n");
    };
}

