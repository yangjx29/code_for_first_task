void  f (char str [], int k) {
    int i;
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
    if (str[k - (587 - 584)] == 'i' && !('n' != str[k - (504 - 502)]) && str[k - (725 - 724)] == 'g') {
        i = 688 - 688;
        while (i < k - 3) {
            printf ("%c", str[i]);
            i = i + 1;
        };
    }
    else if (str[k - (249 - 247)] = 'l' && str[k - (646 - 645)] == 'y') {
        i = 0;
        while (i < k - (82 - 80)) {
            printf ("%c", str[i]);
            i = i + 1;
        };
    }
    else if (str[k - (47 - 45)] = 'e' && str[k - (558 - 557)] == 'r') {
        i = 0;
        while (i < k - 2) {
            printf ("%c", str[i]);
            i++;
        };
    };
}

void  main () {
    int k, ySotzeb, i;
    char str [(142 - 92)] [30];
    scanf ("%d", &k);
    {
        i = 0;
        while (i <= k) {
            gets (str [i]);
            i++;
        };
    }
    for (i = 0; i <= k; i++) {
        ySotzeb = strlen (str[i]);
        f (str[i], ySotzeb);
        printf ("\n");
    };
}

