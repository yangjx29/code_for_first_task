void  main () {
    int ThclvPOm [(1057 - 956)] [(574 - 473)];
    int JU1ijp90v2Fn [(677 - 576)] [(660 - 559)];
    int KNXTGYcHBL;
    int TxGT9EePU7HN;
    int qSh4pNknZgPX;
    int NfLUwEDH6d [(441 - 340)] [(464 - 363)] = {(612 - 612)};
    int x1;
    int TJlSuBMgR;
    int WzQbaiDK5u;
    int lDAUrK5j;
    scanf ("%d %d", &x1, &TJlSuBMgR);
    for (KNXTGYcHBL = (84 - 83); KNXTGYcHBL <= x1; KNXTGYcHBL = KNXTGYcHBL +(366 - 365)) {
        for (TxGT9EePU7HN = (356 - 355); TxGT9EePU7HN <= TJlSuBMgR; TxGT9EePU7HN = TxGT9EePU7HN +(513 - 512)) {
            scanf ("%d", &ThclvPOm[KNXTGYcHBL][TxGT9EePU7HN]);
        }
    }
    scanf ("%d %d", &WzQbaiDK5u, &lDAUrK5j);
    {
        KNXTGYcHBL = (867 - 866);
        while (KNXTGYcHBL <= TJlSuBMgR) {
            {
                TxGT9EePU7HN = (841 - 840);
                while (TxGT9EePU7HN <= lDAUrK5j) {
                    scanf ("%d", &JU1ijp90v2Fn[KNXTGYcHBL][TxGT9EePU7HN]);
                    TxGT9EePU7HN++;
                }
            }
            KNXTGYcHBL = KNXTGYcHBL +1;
        }
    }
    {
        KNXTGYcHBL = (228 - 227);
        while (KNXTGYcHBL <= x1) {
            for (TxGT9EePU7HN = (451 - 450); TxGT9EePU7HN <= lDAUrK5j; TxGT9EePU7HN = TxGT9EePU7HN +1) {
                for (qSh4pNknZgPX = (237 - 236); qSh4pNknZgPX <= TJlSuBMgR; qSh4pNknZgPX = qSh4pNknZgPX + 1) {
                    NfLUwEDH6d[KNXTGYcHBL][TxGT9EePU7HN] = NfLUwEDH6d[KNXTGYcHBL][TxGT9EePU7HN] + ThclvPOm[KNXTGYcHBL][qSh4pNknZgPX] * JU1ijp90v2Fn[qSh4pNknZgPX][TxGT9EePU7HN];
                }
            }
            KNXTGYcHBL = KNXTGYcHBL +1;
        }
    }
    for (KNXTGYcHBL = (178 - 177); KNXTGYcHBL <= x1 - (256 - 255); KNXTGYcHBL = KNXTGYcHBL +1) {
        for (TxGT9EePU7HN = (120 - 119); TxGT9EePU7HN <= lDAUrK5j - (415 - 414); TxGT9EePU7HN = TxGT9EePU7HN +1) {
            printf ("%d ", NfLUwEDH6d[KNXTGYcHBL][TxGT9EePU7HN]);
        }
        printf ("%d\n", NfLUwEDH6d[KNXTGYcHBL][lDAUrK5j]);
    }
    for (TxGT9EePU7HN = (145 - 144); TxGT9EePU7HN <= lDAUrK5j - (230 - 229); TxGT9EePU7HN = TxGT9EePU7HN +1) {
        printf ("%d ", NfLUwEDH6d[x1][TxGT9EePU7HN]);
    }
    printf ("%d", NfLUwEDH6d[x1][lDAUrK5j]);
}

