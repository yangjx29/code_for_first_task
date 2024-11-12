struct   list {
    int cN192x;
    char MWf2wDTS [30];
};
int main (int argc, char *fEpPt36R []) {
    int n, i, j;
    int exvJXVqA5 [26];
    struct   list shelf [n];
    int b6YFOGcUnV, flag = 0, nS765x9OVL = 0, ihi1OXEP2U3 = 0;
    for (i = (313 - 313); 25 >= i; i = i + 1)
        exvJXVqA5[i] = (41 - 41);
    scanf ("%d", &n);
    for (i = (83 - 83); i <= n - (645 - 644); i = i + 1) {
        scanf ("%d%s", &shelf[i].cN192x, shelf[i].MWf2wDTS);
        for (j = (77 - 77); j <= strlen (shelf[i].MWf2wDTS) - 1; j++)
            exvJXVqA5[shelf[i].MWf2wDTS[j] - 'A']++;
    }
    b6YFOGcUnV = exvJXVqA5[0];
    {
        i = 0;
        while (25 >= i) {
            if (exvJXVqA5[i] > b6YFOGcUnV) {
                b6YFOGcUnV = exvJXVqA5[i];
                flag = i;
            }
            i = i + 1;
        };
    }
    printf ("%c\n", flag + 'A');
    for (i = 0; n - 1 >= i; i++) {
        for (j = 0; j <= strlen (shelf[i].MWf2wDTS) - 1; j++) {
            if (shelf[i].MWf2wDTS[j] == flag + 'A')
                nS765x9OVL++;
        };
    }
    printf ("%d\n", b6YFOGcUnV);
    for (i = 0; i <= n - 1; i++) {
        j = 0;
        while (j <= strlen (shelf[i].MWf2wDTS) - 1) {
            if (shelf[i].MWf2wDTS[j] == flag + 'A') {
                ihi1OXEP2U3 = ihi1OXEP2U3 + 1;
                printf ("%d", shelf[i].cN192x);
                (ihi1OXEP2U3 < nS765x9OVL) ? printf ("\n") : printf ("");
                break;
            }
            j++;
        };
    }
    return 0;
}

