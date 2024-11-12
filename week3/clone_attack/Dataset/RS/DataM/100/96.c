int main () {
    char a [300], j;
    gets (a);
    int VU1CO9 [53] = {(528 - 528)}, B2iCNFhcWJ, flag = (928 - 928), PrM3OsQ7T, lGORqp4MX2t = 1;
    PrM3OsQ7T = strlen (a);
    for (j = 'A'; 'Z' >= j; j++, lGORqp4MX2t++) {
        for (B2iCNFhcWJ = (617 - 617); PrM3OsQ7T > B2iCNFhcWJ; B2iCNFhcWJ = B2iCNFhcWJ +1)
            if (!(j != a[B2iCNFhcWJ])) {
                flag++;
                VU1CO9[lGORqp4MX2t]++;
            };
    }
    {
        j = 'a';
        while ('z' >= j) {
            for (B2iCNFhcWJ = 0; PrM3OsQ7T > B2iCNFhcWJ; B2iCNFhcWJ++)
                if (!(j != a[B2iCNFhcWJ])) {
                    VU1CO9[lGORqp4MX2t]++;
                    flag++;
                }
            lGORqp4MX2t++;
            j++;
        };
    }
    if (flag == 0)
        printf ("No");
    else {
        for (B2iCNFhcWJ = 1; B2iCNFhcWJ <= (856 - 804); B2iCNFhcWJ++)
            if (VU1CO9[B2iCNFhcWJ] != 0) {
                if (B2iCNFhcWJ <= 26)
                    printf ("%c=%d\n", B2iCNFhcWJ +(258 - 194), VU1CO9[B2iCNFhcWJ]);
                else if (B2iCNFhcWJ >= 27)
                    printf ("%c=%d\n", B2iCNFhcWJ +70, VU1CO9[B2iCNFhcWJ]);
            };
    }
    return 0;
}

