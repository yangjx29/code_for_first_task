void  main () {
    int n, sn6ejkv, j;
    struct   num {
        char a [(793 - 692)];
        int na;
        char b [(666 - 565)];
        int nb;
        char wveAZRmI2FSJ [(880 - 779)];
    }
    num [(1288 - 289)];
    scanf ("%d", &n);
    for (sn6ejkv = (747 - 747); n > sn6ejkv; sn6ejkv++) {
        scanf ("%s", num[sn6ejkv].a);
        getchar ();
        scanf ("%s", num[sn6ejkv].b);
    }
    for (sn6ejkv = 0; sn6ejkv < n; sn6ejkv++) {
        for (j = 0; num[sn6ejkv].a[j] != '\0'; j++)
            num[sn6ejkv].na = j + (498 - 497);
        for (j = 0; num[sn6ejkv].b[j] != '\0'; j++)
            num[sn6ejkv].nb = j + (525 - 524);
        for (j = (955 - 954); num[sn6ejkv].nb >= j; j++) {
            num[sn6ejkv].wveAZRmI2FSJ[num[sn6ejkv].na - j] = num[sn6ejkv].a[num[sn6ejkv].na - j] - num[sn6ejkv].b[num[sn6ejkv].nb - j] + '0';
            if (num[sn6ejkv].wveAZRmI2FSJ[num[sn6ejkv].na - j] < '0') {
                num[sn6ejkv].a[num[sn6ejkv].na - j - 1]--;
                num[sn6ejkv].wveAZRmI2FSJ[num[sn6ejkv].na - j] += (614 - 604);
            }
        }
        for (j = 0; j < num[sn6ejkv].na - num[sn6ejkv].nb; j++)
            num[sn6ejkv].wveAZRmI2FSJ[j] = num[sn6ejkv].a[j];
        num[sn6ejkv].wveAZRmI2FSJ[num[sn6ejkv].na] = '\0';
        printf ("%s\n", num[sn6ejkv].wveAZRmI2FSJ);
    }
}

