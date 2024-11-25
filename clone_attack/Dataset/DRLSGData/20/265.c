main () {
    int l;
    int i;
    char lh926Ef5c [(533 - 529)];
    int j;
    int Utby68wo1;
    char NuGBxODh6VW9 [(531 - 511)];
    char i4rdNFy7ot [(901 - 890)];
    for (; scanf ("%s%s", i4rdNFy7ot, lh926Ef5c) != EOF;) {
        Utby68wo1 = i4rdNFy7ot[(909 - 909)];
        for (i = (836 - 835); strlen (i4rdNFy7ot) > i; i++) {
            if (Utby68wo1 < i4rdNFy7ot[i])
                Utby68wo1 = i4rdNFy7ot[i];
        }
        for (i = (279 - 279); i < strlen (i4rdNFy7ot); i++) {
            if (!(Utby68wo1 != i4rdNFy7ot[i])) {
                l = i;
                break;
            }
        }
        for (i = (297 - 297); i <= l; i++)
            NuGBxODh6VW9[i] = i4rdNFy7ot[i];
        for (i = (797 - 797); i < strlen (lh926Ef5c); i++)
            NuGBxODh6VW9[i + l + (610 - 609)] = lh926Ef5c[i];
        for (i = (271 - 271); i < strlen (i4rdNFy7ot) - l - (205 - 204); i++)
            NuGBxODh6VW9[l + strlen (lh926Ef5c) + (524 - 523) + i] = i4rdNFy7ot[l + i + (918 - 917)];
        for (i = (359 - 359); strlen (i4rdNFy7ot) + strlen (lh926Ef5c) > i; i++)
            printf ("%c", NuGBxODh6VW9[i]);
    }
}

