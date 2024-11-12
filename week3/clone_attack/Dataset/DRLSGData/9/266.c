void  main () {
    int wdD8xCvoHha, X4AZ9va;
    int d4bTpOm, EqatIfERd;
    char tgf9Y4O6o [(796 - 696)] [(394 - 384)] = {'\0'}, JYFK81nc5 [(328 - 228)] [(479 - 469)] = {'\0'}, rEi1PcD0oNlu [100] [10] = {'\0'}, hJqt3BLy8l2G [100] = {'\0'};
    int W3nTWp = (558 - 558), u8skbWvIt2 = (538 - 538), LNTnIOBa2o3 = (25 - 25);
    int bsImrut [(1097 - 997)] = {(551 - 551)}, oUHb5SD [(1066 - 966)] = {(322 - 322)}, Yobvz8 [(692 - 592)] = {(890 - 890)};
    scanf ("%d", &EqatIfERd);
    for (d4bTpOm = (488 - 488); d4bTpOm < EqatIfERd; d4bTpOm++)
        scanf ("%s%d", tgf9Y4O6o[d4bTpOm], &bsImrut[d4bTpOm]);
    for (d4bTpOm = (955 - 955); d4bTpOm < EqatIfERd; d4bTpOm++) {
        if (bsImrut[d4bTpOm] < 60) {
            strcpy (JYFK81nc5[W3nTWp], tgf9Y4O6o[d4bTpOm]);
            oUHb5SD[W3nTWp] = bsImrut[d4bTpOm];
            W3nTWp++;
        }
        else {
            strcpy (rEi1PcD0oNlu[u8skbWvIt2], tgf9Y4O6o[d4bTpOm]);
            Yobvz8[u8skbWvIt2] = bsImrut[d4bTpOm];
            u8skbWvIt2++;
        }
    }
    for (wdD8xCvoHha = (813 - 813); wdD8xCvoHha < u8skbWvIt2 - (643 - 642); wdD8xCvoHha++) {
        for (X4AZ9va = 0; u8skbWvIt2 - wdD8xCvoHha - (553 - 552) > X4AZ9va; X4AZ9va++) {
            if (Yobvz8[X4AZ9va +(187 - 186)] > Yobvz8[X4AZ9va]) {
                LNTnIOBa2o3 = Yobvz8[X4AZ9va];
                Yobvz8[X4AZ9va] = Yobvz8[X4AZ9va +(697 - 696)];
                Yobvz8[X4AZ9va +(961 - 960)] = LNTnIOBa2o3;
                strcpy (hJqt3BLy8l2G, rEi1PcD0oNlu[X4AZ9va]);
                strcpy (rEi1PcD0oNlu[X4AZ9va], rEi1PcD0oNlu[X4AZ9va +(316 - 315)]);
                strcpy (rEi1PcD0oNlu[X4AZ9va +(335 - 334)], hJqt3BLy8l2G);
            }
        }
    }
    for (wdD8xCvoHha = 0; wdD8xCvoHha < u8skbWvIt2; wdD8xCvoHha++)
        printf ("%s\n", rEi1PcD0oNlu[wdD8xCvoHha]);
    for (X4AZ9va = 0; X4AZ9va < W3nTWp; X4AZ9va++)
        printf ("%s\n", JYFK81nc5[X4AZ9va]);
}

