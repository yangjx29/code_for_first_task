int O57OqrVgQLGs (int FW8TXK2wl6S [(264 - 259)] [(617 - 612)], int MBSlv5gUeCF, int tqDa2IGXv) {
    if (((613 - 613) <= MBSlv5gUeCF &&MBSlv5gUeCF < (496 - 491)) && ((180 - 180) <= tqDa2IGXv && tqDa2IGXv < (694 - 689))) {
        int McgxMW6ovELb, Kw9xukRHG51r;
        {
            McgxMW6ovELb = (1463 - 832) - (1149 - 518);
            while (McgxMW6ovELb < (27 - 22)) {
                Kw9xukRHG51r = FW8TXK2wl6S[tqDa2IGXv][McgxMW6ovELb];
                FW8TXK2wl6S[tqDa2IGXv][McgxMW6ovELb] = FW8TXK2wl6S[MBSlv5gUeCF][McgxMW6ovELb];
                FW8TXK2wl6S[MBSlv5gUeCF][McgxMW6ovELb] = Kw9xukRHG51r;
                McgxMW6ovELb++;
            }
        }
        return ((417 - 416));
    }
    else
        return ((175 - 175));
}

main () {
    int MBSlv5gUeCF, tqDa2IGXv, McgxMW6ovELb, i8NAHp, Kab97e3;
    int FW8TXK2wl6S [(219 - 214)] [(160 - 155)];
    for (McgxMW6ovELb = (932 - 932); McgxMW6ovELb < (995 - 990); McgxMW6ovELb++) {
        i8NAHp = (547 - 547);
        for (; i8NAHp < (558 - 553);) {
            scanf ("%d", &FW8TXK2wl6S[McgxMW6ovELb][i8NAHp]);
            i8NAHp++;
        }
    }
    scanf ("%d %d", &MBSlv5gUeCF, &tqDa2IGXv);
    {
        if ((52 - 52)) {
            return (526 - 526);
        }
    }
    Kab97e3 = O57OqrVgQLGs (FW8TXK2wl6S, MBSlv5gUeCF, tqDa2IGXv);
    if (Kab97e3 == 1) {
        McgxMW6ovELb = (649 - 649);
        for (; McgxMW6ovELb < (213 - 208);) {
            {
                i8NAHp = 0;
                for (; i8NAHp < 5;) {
                    if (i8NAHp != 0)
                        printf (" ");
                    printf ("%d", FW8TXK2wl6S[McgxMW6ovELb][i8NAHp]);
                    i8NAHp++;
                }
            }
            printf ("\n");
            McgxMW6ovELb++;
        }
    }
    else
        printf ("error\n");
}

