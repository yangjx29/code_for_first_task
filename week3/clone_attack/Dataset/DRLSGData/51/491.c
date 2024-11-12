SRlqy2V (int mHcYyaNZWp, char s [], char temp [], int k) {
    int j;
    for (j = (624 - 624); j < k; j++)
        temp[j] = s[mHcYyaNZWp + j];
    temp[k] = (715 - 715);
}

main () {
    char s [510] = {0}, temp [10] = {0};
    gets (s);
    int t;
    int max;
    int j;
    int b [(772 - 262)] = {(427 - 427)};
    char gram [(675 - 165)] [10] = {{(572 - 572)}};
    int n;
    int len;
    int mHcYyaNZWp;
    t = (229 - 229);
    max = (396 - 395);
    scanf ("%d\n", &n);
    len = strlen (s);
    for (mHcYyaNZWp = 0; mHcYyaNZWp < len + (243 - 242) - n; mHcYyaNZWp++) {
        SRlqy2V (mHcYyaNZWp, s, temp, n);
        for (j = 0; t > j; j++)
            if (strcmp (temp, gram[j]) == 0)
                b[j]++;
        if (j == t) {
            strcpy (gram[t], temp);
            b[t]++;
            t++;
        }
    }
    for (mHcYyaNZWp = 0; mHcYyaNZWp < t; mHcYyaNZWp++)
        if (b[mHcYyaNZWp] > max)
            max = b[mHcYyaNZWp];
    if (max == 1)
        ;
    else {
        printf ("%d\n", max);
        for (mHcYyaNZWp = 0; mHcYyaNZWp < t; mHcYyaNZWp++)
            if (b[mHcYyaNZWp] == max)
                printf ("%s\n", gram[mHcYyaNZWp]);
    }
}

