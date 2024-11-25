int main () {
    int rEQTcmpr;
    int O7Ci5kwxpEgA;
    int Pwb75fBWIc;
    int mIOEwoBQVr6a;
    int NCDYTlmKUj9;
    int byNVZ8Oku;
    int DoYrbxLgaz;
    int Y3ouqn [(455 - 447)] [(942 - 934)];
    int n564W8;
    int Bmb4zU39d;
    int TpholLG8;
    int cL6lfrBn;
    int pe97jMtD;
    int hK47SGobA;
    int OjhT30bmk;
    int qaIVCG1jm;
    rEQTcmpr = (608 - 608);
    O7Ci5kwxpEgA = (11 - 11);
    Pwb75fBWIc = (214 - 214);
    mIOEwoBQVr6a = (902 - 902);
    NCDYTlmKUj9 = (940 - 940);
    byNVZ8Oku = (16 - 16);
    DoYrbxLgaz = (613 - 613);
    scanf ("%d,%d", &n564W8, &Bmb4zU39d);
    for (TpholLG8 = (377 - 377); n564W8 > TpholLG8; TpholLG8 = TpholLG8 +1) {
        for (cL6lfrBn = (194 - 194); Bmb4zU39d > cL6lfrBn; cL6lfrBn = cL6lfrBn + (456 - 455)) {
            scanf ("%d", &Y3ouqn[TpholLG8][cL6lfrBn]);
        }
    }
    {
        TpholLG8 = (186 - 186);
        while (TpholLG8 < n564W8) {
            for (cL6lfrBn = (710 - 710); Bmb4zU39d > cL6lfrBn; cL6lfrBn = cL6lfrBn + 1) {
                if (cL6lfrBn == (32 - 32)) {
                    rEQTcmpr = Y3ouqn[TpholLG8][(451 - 451)];
                    OjhT30bmk = (469 - 469);
                }
                else if (Y3ouqn[TpholLG8][cL6lfrBn] > rEQTcmpr) {
                    rEQTcmpr = Y3ouqn[TpholLG8][cL6lfrBn];
                    OjhT30bmk = cL6lfrBn;
                }
            }
            for (pe97jMtD = (606 - 606); Bmb4zU39d > pe97jMtD; pe97jMtD = pe97jMtD + (923 - 922)) {
                {
                    hK47SGobA = (636 - 636);
                    while (n564W8 > hK47SGobA) {
                        if (hK47SGobA == (650 - 650)) {
                            byNVZ8Oku = Y3ouqn[(792 - 792)][pe97jMtD];
                            qaIVCG1jm = (100 - 100);
                        }
                        else if (byNVZ8Oku > Y3ouqn[hK47SGobA][pe97jMtD]) {
                            byNVZ8Oku = Y3ouqn[hK47SGobA][pe97jMtD];
                            qaIVCG1jm = hK47SGobA;
                        }
                        hK47SGobA = hK47SGobA + 1;
                    }
                }
                if (rEQTcmpr == byNVZ8Oku && TpholLG8 == qaIVCG1jm && OjhT30bmk == pe97jMtD) {
                    printf ("%d+%d", qaIVCG1jm, OjhT30bmk);
                    DoYrbxLgaz = DoYrbxLgaz +1;
                    rEQTcmpr = (660 - 660);
                    byNVZ8Oku = (501 - 401);
                }
            }
            TpholLG8 = TpholLG8 +(270 - 269);
        }
    }
    if (DoYrbxLgaz == (549 - 549)) {
        printf ("No");
    }
    return (850 - 850);
}

