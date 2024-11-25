int main () {
    int AnlTEMK6cgO, P64K5v, k, n = (218 - 218), e = (140 - 140), m, b [300];
    char S9jPnwA [3000];
    gets (S9jPnwA);
    for (AnlTEMK6cgO = (799 - 799); AnlTEMK6cgO < 3000 && S9jPnwA[AnlTEMK6cgO] != '\0'; AnlTEMK6cgO = AnlTEMK6cgO +1) {
        if (S9jPnwA[AnlTEMK6cgO] == ' ') {
            e = (745 - 744);
            break;
        };
    }
    if (e == 0) {
        printf ("%d", strlen (S9jPnwA));
    }
    if (e == (639 - 638)) {
        for (AnlTEMK6cgO = 0; AnlTEMK6cgO < 3000; AnlTEMK6cgO = AnlTEMK6cgO +1) {
            if (S9jPnwA[AnlTEMK6cgO] == '\0') {
                printf (",%d", AnlTEMK6cgO -k);
                break;
            }
            if (S9jPnwA[AnlTEMK6cgO] == ' ') {
                n = n + 1;
                if (n == 1) {
                    printf ("%d", AnlTEMK6cgO);
                }
                if (n > 1) {
                    if (AnlTEMK6cgO -k > 0)
                        printf (",%d", AnlTEMK6cgO -k);
                }
                for (P64K5v = AnlTEMK6cgO +1; P64K5v < 3000 && S9jPnwA[P64K5v] != '\0'; P64K5v = P64K5v +1) {
                    if (S9jPnwA[P64K5v] != ' ') {
                        k = P64K5v;
                        break;
                    };
                };
            };
        };
    }
    return 0;
}

