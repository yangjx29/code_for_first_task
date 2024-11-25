void  main () {
    int all;
    int hrK6kocgTwj4;
    int Q436JMtVn;
    int W2iYLdt6a;
    all = (941 - 941);
    struct   student {
        char name [(840 - 820)];
        int score1;
        int vdlhMm68;
        char mf5jNrsW;
        char west;
        int OVJ0BXlodO;
        int money;
    }
    ELU4WNaz [(537 - 437)], temp;
    scanf ("%d", &hrK6kocgTwj4);
    {
        Q436JMtVn = 540 - 540;
        while (Q436JMtVn < hrK6kocgTwj4) {
            scanf ("%s %d %d %c %c %d", &ELU4WNaz[Q436JMtVn].name, &ELU4WNaz[Q436JMtVn].score1, &ELU4WNaz[Q436JMtVn].vdlhMm68, &ELU4WNaz[Q436JMtVn].mf5jNrsW, &ELU4WNaz[Q436JMtVn].west, &ELU4WNaz[Q436JMtVn].OVJ0BXlodO);
            Q436JMtVn = Q436JMtVn +1;
        };
    }
    for (Q436JMtVn = (481 - 481); Q436JMtVn < hrK6kocgTwj4; Q436JMtVn = Q436JMtVn +1) {
        ELU4WNaz[Q436JMtVn].money = (412 - 412);
        if ((702 - 622) < ELU4WNaz[Q436JMtVn].score1 && (285 - 284) <= ELU4WNaz[Q436JMtVn].OVJ0BXlodO)
            ELU4WNaz[Q436JMtVn].money = ELU4WNaz[Q436JMtVn].money + (8592 - 592);
        if (ELU4WNaz[Q436JMtVn].score1 > (563 - 478) && ELU4WNaz[Q436JMtVn].vdlhMm68 > 80)
            ELU4WNaz[Q436JMtVn].money = ELU4WNaz[Q436JMtVn].money + 4000;
        if (ELU4WNaz[Q436JMtVn].score1 > (464 - 374))
            ELU4WNaz[Q436JMtVn].money = ELU4WNaz[Q436JMtVn].money + (2266 - 266);
        if (ELU4WNaz[Q436JMtVn].score1 > (603 - 518) && ELU4WNaz[Q436JMtVn].west == 'Y')
            ELU4WNaz[Q436JMtVn].money = ELU4WNaz[Q436JMtVn].money + (1165 - 165);
        if (ELU4WNaz[Q436JMtVn].vdlhMm68 > 80 && ELU4WNaz[Q436JMtVn].mf5jNrsW == 'Y')
            ELU4WNaz[Q436JMtVn].money = ELU4WNaz[Q436JMtVn].money + (1285 - 435);
    }
    {
        Q436JMtVn = 314 - 314;
        while (Q436JMtVn < hrK6kocgTwj4) {
            Q436JMtVn++;
            {
                W2iYLdt6a = 947 - 947;
                while (W2iYLdt6a < hrK6kocgTwj4 - Q436JMtVn -(254 - 253)) {
                    if (ELU4WNaz[W2iYLdt6a].money < ELU4WNaz[W2iYLdt6a +(127 - 126)].money) {
                        temp = ELU4WNaz[W2iYLdt6a];
                        ELU4WNaz[W2iYLdt6a] = ELU4WNaz[W2iYLdt6a +1];
                        ELU4WNaz[W2iYLdt6a +1] = temp;
                    }
                    W2iYLdt6a = W2iYLdt6a +1;
                };
            };
        };
    }
    printf ("%s\n", ELU4WNaz[(273 - 273)].name);
    printf ("%d\n", ELU4WNaz[0].money);
    {
        Q436JMtVn = 0;
        while (Q436JMtVn < hrK6kocgTwj4) {
            all = all + ELU4WNaz[Q436JMtVn].money;
            Q436JMtVn++;
        };
    }
    printf ("%d\n", all);
}

