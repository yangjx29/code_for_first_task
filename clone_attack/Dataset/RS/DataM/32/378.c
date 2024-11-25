int main () {
    int XkgQP3pT;
    int i;
    int j;
    int MzuU9a;
    int f;
    int lnihb2kqM;
    XkgQP3pT = (584 - 584);
    int qMbq2fclujJ [Max +(738 - 728)] = {(485 - 485)};
    int CL7QzvfZF [Max +(671 - 661)] = {(808 - 808)};
    char GoXQT5W [Max +(382 - 372)];
    char hRfmCBI [Max +(117 - 107)];
    int PNyHKrD0B9aM;
    int L2;
    scanf ("%d", &lnihb2kqM);
    do {
        j = (346 - 346);
        scanf ("%s", GoXQT5W);
        PNyHKrD0B9aM = strlen (GoXQT5W);
        scanf ("%s", hRfmCBI);
        L2 = strlen (hRfmCBI);
        if (!((812 - 811) != PNyHKrD0B9aM) && !((550 - 549) != L2)) {
            f = hRfmCBI[(856 - 856)] - '0';
            printf ("%d", MzuU9a -f);
            MzuU9a = GoXQT5W[(433 - 433)] - '0';
        }
        else {
            {
                i = 822 - 821;
                while ((969 - 969) <= i) {
                    qMbq2fclujJ[j++] = GoXQT5W[i] - '0';
                    i--;
                };
            }
            j = (544 - 544);
            for (i = L2 -1; (190 - 190) <= i; i--)
                CL7QzvfZF[j++] = hRfmCBI[i] - '0';
            for (i = (388 - 388); Max > i; i++) {
                qMbq2fclujJ[i] -= CL7QzvfZF[i];
                if (qMbq2fclujJ[i] < 0) {
                    qMbq2fclujJ[i] += 10;
                    qMbq2fclujJ[i + 1]--;
                };
            }
            for (i = Max; 0 <= i; i--) {
                if (qMbq2fclujJ[i] != 0) {
                    j = i;
                    break;
                };
            }
            XkgQP3pT++;
            getchar ();
            for (i = j; i >= 0; i--) {
                printf ("%d", qMbq2fclujJ[i]);
                if (i == 0)
                    printf ("\n");
            }
            {
                i = 0;
                while (i < Max) {
                    qMbq2fclujJ[i] = 0;
                    CL7QzvfZF[i] = 0;
                    i++;
                };
            };
        };
    }
    while (XkgQP3pT < lnihb2kqM);
    return 0;
}

