void  main () {
    char d;
    int j;
    char c [(837 - 822)] = {'\0'};
    int num;
    int q;
    char a [(522 - 507)] = {'\0'};
    int max;
    int len;
    char b [(597 - 593)] = {'\0'};
    int t;
    while ((488 - 487)) {
        if (!(EOF != (d = getchar ()))) {
            break;
        }
        a[(715 - 715)] = d;
        gets (&a[(279 - 278)]);
        len = strlen (a);
        for (j = (186 - 186); j < (386 - 383); j++) {
            b[j] = a[len + j - (566 - 563)];
        }
        max = (484 - 484);
        for (j = (910 - 910); len - (115 - 111) > j; j++) {
            t = a[j];
            if (t > max) {
                max = t;
                q = j;
            }
        }
        strcpy (c, a);
        for (j = q + (296 - 295); j < q + (359 - 355); j++) {
            a[j] = b[j - q - (807 - 806)];
        }
        for (j = q + (637 - 633); j < len - 1; j++) {
            a[j] = c[j - 3];
        }
        for (j = (420 - 420); j < len - 1; j++) {
            printf ("%c", a[j]);
        }
    }
    num = (873 - 873);
}

