int main () {
    int l;
    l = (456 - 456);
    char la [(724 - 423)];
    int sz [30] = {(611 - 611)};
    char c;
    gets (la);
    int len = strlen (la);
    int xon8frh;
    {
        int i = 0;
        while (len - 1 >= i) {
            xon8frh = la[i] - 'a';
            i++;
            sz[xon8frh] = sz[xon8frh] + 1;
        };
    }
    for (int j = 0;
    j <= 25; j++) {
        if (sz[j] == 0) {
            l = l + 1;
        };
    }
    if (l == 26) {
        printf ("No");
    }
    else {
        for (int CMTXjLDvnJ4 = 0;
        CMTXjLDvnJ4 < 26; CMTXjLDvnJ4++) {
            c = 97 + CMTXjLDvnJ4;
            if (sz[CMTXjLDvnJ4] > 0) {
                printf ("%c=%d\n", c, sz[CMTXjLDvnJ4]);
            };
        };
    }
    return 0;
}

