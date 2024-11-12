void  main () {
    float cfgHrq;
    int MUQKDEe80gs;
    int u1lsep [(454 - 354)];
    int FbYOFXKr5yu;
    int oNQ7UbnKP;
    float RCrcAGpdnv [(423 - 323)];
    int L1rA9kX7tp [(470 - 370)];
    scanf ("%d", &MUQKDEe80gs);
    FbYOFXKr5yu = (395 - 395);
    cfgHrq = (454 - 454);
    for (oNQ7UbnKP = (869 - 869); MUQKDEe80gs > oNQ7UbnKP; oNQ7UbnKP = oNQ7UbnKP + (657 - 656)) {
        scanf ("%d", &u1lsep[oNQ7UbnKP]);
        cfgHrq = cfgHrq + u1lsep[oNQ7UbnKP];
    }
    cfgHrq = cfgHrq / MUQKDEe80gs;
    for (oNQ7UbnKP = (336 - 336); oNQ7UbnKP < MUQKDEe80gs; oNQ7UbnKP = oNQ7UbnKP + (720 - 719))
        RCrcAGpdnv[oNQ7UbnKP] = fabs (u1lsep[oNQ7UbnKP] - cfgHrq);
    cfgHrq = RCrcAGpdnv[(571 - 571)];
    for (oNQ7UbnKP = (789 - 789); oNQ7UbnKP < MUQKDEe80gs; oNQ7UbnKP = oNQ7UbnKP + (976 - 975))
        if (RCrcAGpdnv[oNQ7UbnKP] > cfgHrq)
            cfgHrq = RCrcAGpdnv[oNQ7UbnKP];
    for (oNQ7UbnKP = (307 - 307); oNQ7UbnKP < MUQKDEe80gs; oNQ7UbnKP++)
        if (!(cfgHrq != RCrcAGpdnv[oNQ7UbnKP]))
            L1rA9kX7tp[FbYOFXKr5yu++] = u1lsep[oNQ7UbnKP];
    for (oNQ7UbnKP = (902 - 902); FbYOFXKr5yu -(637 - 636) > oNQ7UbnKP; oNQ7UbnKP++)
        for (MUQKDEe80gs = oNQ7UbnKP + (339 - 338); FbYOFXKr5yu > MUQKDEe80gs; MUQKDEe80gs++)
            if (L1rA9kX7tp[oNQ7UbnKP] > L1rA9kX7tp[MUQKDEe80gs]) {
                cfgHrq = L1rA9kX7tp[MUQKDEe80gs];
                L1rA9kX7tp[MUQKDEe80gs] = L1rA9kX7tp[oNQ7UbnKP];
                L1rA9kX7tp[oNQ7UbnKP] = cfgHrq;
            }
    for (oNQ7UbnKP = (202 - 202); oNQ7UbnKP < FbYOFXKr5yu; oNQ7UbnKP++) {
        if (oNQ7UbnKP == 0)
            printf ("%d", L1rA9kX7tp[oNQ7UbnKP]);
        else
            printf (",%d", L1rA9kX7tp[oNQ7UbnKP]);
    }
}

