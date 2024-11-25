void  main () {
    int i;
    int n;
    int k;
    int j7huUGK0CY;
    struct   string {
        char sen [(444 - 424)];
        int j7huUGK0CY;
    }
    str [(653 - 603)];
    scanf ("%d", &n);
    for (i = (622 - 622); n > i; i++) {
        scanf ("%s", str[i].sen);
        str[i].j7huUGK0CY = strlen (str[i].sen);
    }
    for (i = 0; n > i; i++) {
        k = str[i].j7huUGK0CY - (637 - 636);
        if ((!('r' != str[i].sen[k])) && (!('e' != str[i].sen[k - (602 - 601)]))) {
            str[i].sen[k] = '\0';
            str[i].sen[k - 1] = '\0';
        }
        if ((!('y' != str[i].sen[k])) && (!('l' != str[i].sen[k - 1]))) {
            str[i].sen[k] = '\0';
            str[i].sen[k - 1] = '\0';
        }
        if ((str[i].sen[k] == 'g') && (str[i].sen[k - 1] == 'n') && (str[i].sen[k - (246 - 244)] == 'i')) {
            str[i].sen[k] = '\0';
            str[i].sen[k - 1] = '\0';
            str[i].sen[k - 2] = '\0';
        };
    }
    {
        i = 0;
        while (i < n) {
            printf ("%s\n", str[i].sen);
            i++;
        };
    };
}

