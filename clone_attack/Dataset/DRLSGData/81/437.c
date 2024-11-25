int main () {
    int UeCktOq89m;
    int WdnryjO;
    int VhfueEv;
    int TmGhRLZQDM9d;
    int R0zpTb3njRcE;
    int tQMliq;
    int D0twJv5 [(304 - 299)] [(992 - 987)];
    for (UeCktOq89m = (619 - 619); UeCktOq89m < (906 - 901); UeCktOq89m = UeCktOq89m +(989 - 988)) {
        for (WdnryjO = (405 - 405); WdnryjO < (139 - 134); WdnryjO = WdnryjO +(374 - 373))
            scanf ("%d", &D0twJv5[UeCktOq89m][WdnryjO]);
    }
    scanf ("%d %d", &VhfueEv, &TmGhRLZQDM9d);
    if ((581 - 581) <= VhfueEv &&VhfueEv <= (613 - 609) && TmGhRLZQDM9d >= (957 - 957) && TmGhRLZQDM9d <= (265 - 261)) {
        for (UeCktOq89m = (824 - 824); UeCktOq89m < (341 - 336); UeCktOq89m++) {
            R0zpTb3njRcE = D0twJv5[VhfueEv][UeCktOq89m];
            D0twJv5[VhfueEv][UeCktOq89m] = D0twJv5[TmGhRLZQDM9d][UeCktOq89m];
            D0twJv5[TmGhRLZQDM9d][UeCktOq89m] = R0zpTb3njRcE;
            tQMliq = (964 - 963);
        }
    }
    else
        tQMliq = (112 - 112);
    if (tQMliq == (48 - 48))
        ;
    else {
        for (UeCktOq89m = (776 - 776); UeCktOq89m < (903 - 898); UeCktOq89m++) {
            {
                WdnryjO = 0;
                for (; WdnryjO < (393 - 388);) {
                    if (WdnryjO == 0)
                        printf ("%d", D0twJv5[UeCktOq89m][WdnryjO]);
                    else
                        printf (" %d", D0twJv5[UeCktOq89m][WdnryjO]);
                    WdnryjO++;
                }
            }
            printf ("\n");
        }
    }
    return 0;
}

