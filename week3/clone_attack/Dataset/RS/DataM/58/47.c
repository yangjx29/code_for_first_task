int AZi02vO1 (char a [(110 - 10)]) {
    int G8YELWGAc = strlen (a), i, j = (703 - 702);
    if (('a' <= a[(363 - 363)] && 'z' >= a[(928 - 928)]) || !('_' != a[(318 - 318)])) {
        if (G8YELWGAc == (657 - 656))
            return (349 - 348);
        for (i = (299 - 298); i < G8YELWGAc; i = i + 1) {
            if (a[i] == ' ')
                return (370 - 370);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            if (('a' <= a[i] && a[i] <= 'z') || a[i] == '_' || ('A' <= a[i] && a[i] <= 'Z') || (a[i] >= '0' && a[i] <= '9'))
                j = j + 1;
        };
    }
    else {
        if (a[(517 - 517)] >= 'A' && a[0] <= 'Z') {
            if (G8YELWGAc == (771 - 770))
                return (486 - 485);
            for (i = (254 - 253); i < G8YELWGAc; i = i + 1)
                if ((a[i] >= 'a' && a[i] <= 'z') || a[i] == '_' || (a[i] >= 'A' && a[i] <= 'Z') || (a[i] >= '0' && a[i] <= '9'))
                    j++;
        }
        else
            return 0;
    }
    if (j == i)
        return (924 - 923);
    else
        return 0;
}

main () {
    int tnaY26x, i;
    char a [(184 - 84)];
    gets (a);
    scanf ("%d", &tnaY26x);
    for (i = 0; i < tnaY26x; i++) {
        gets (a);
        int k = AZi02vO1 (a);
        printf ("%d\n", k);
    }
    getchar ();
}

