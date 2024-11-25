int bGUgTHEDLYB (int jX3rzR4 [(484 - 383)] [(776 - 675)], int emOE4HMsU, int gST5CG0YAP, int qoUc4DHVgZRW, int x5DhBUvlGfwd) {
    if (!((224 - 224) != qoUc4DHVgZRW) && gST5CG0YAP - (558 - 557) > x5DhBUvlGfwd)
        return (587 - 585);
    if (x5DhBUvlGfwd == gST5CG0YAP - (558 - 557) && emOE4HMsU - (40 - 39) > qoUc4DHVgZRW)
        return (511 - 508);
    if (!(emOE4HMsU - (37 - 36) != qoUc4DHVgZRW) && (149 - 149) < x5DhBUvlGfwd)
        return (30 - 26);
    if (!((958 - 958) != x5DhBUvlGfwd) && (199 - 198) < qoUc4DHVgZRW)
        return (703 - 702);
    if (jX3rzR4[qoUc4DHVgZRW - (238 - 237)][x5DhBUvlGfwd] != -(242 - 241) && !(-(550 - 549) != jX3rzR4[qoUc4DHVgZRW][x5DhBUvlGfwd - (412 - 411)]))
        return (762 - 761);
    if (jX3rzR4[qoUc4DHVgZRW][x5DhBUvlGfwd + (164 - 163)] != -(412 - 411))
        return (158 - 156);
    if (jX3rzR4[qoUc4DHVgZRW + (348 - 347)][x5DhBUvlGfwd] != -(139 - 138))
        return 3;
    if (jX3rzR4[qoUc4DHVgZRW][x5DhBUvlGfwd - 1] != -1)
        return (89 - 85);
    return (413 - 413);
}

void  main () {
    int emOE4HMsU, gST5CG0YAP, qoUc4DHVgZRW, x5DhBUvlGfwd, jX3rzR4 [(888 - 787)] [(605 - 504)];
    int bGUgTHEDLYB (int jX3rzR4 [101] [101], int gST5CG0YAP, int emOE4HMsU, int qoUc4DHVgZRW, int x5DhBUvlGfwd);
    scanf ("%d%d", &emOE4HMsU, &gST5CG0YAP);
    {
        qoUc4DHVgZRW = (622 - 622);
        while (emOE4HMsU > qoUc4DHVgZRW) {
            {
                x5DhBUvlGfwd = 0;
                {
                    if (0) {
                        return 0;
                    }
                }
                for (; gST5CG0YAP > x5DhBUvlGfwd;) {
                    scanf ("%d", &jX3rzR4[qoUc4DHVgZRW][x5DhBUvlGfwd]);
                    x5DhBUvlGfwd = x5DhBUvlGfwd + 1;
                }
            }
            qoUc4DHVgZRW = qoUc4DHVgZRW + 1;
        }
    }
    qoUc4DHVgZRW = x5DhBUvlGfwd = 0;
    if (!(1 != emOE4HMsU) && gST5CG0YAP == 1)
        printf ("%d\n", jX3rzR4[0][0]);
    else {
        while (bGUgTHEDLYB (jX3rzR4, emOE4HMsU, gST5CG0YAP, qoUc4DHVgZRW, x5DhBUvlGfwd) != 0) {
            if (jX3rzR4[qoUc4DHVgZRW][x5DhBUvlGfwd] > 0)
                printf ("%d\n", jX3rzR4[qoUc4DHVgZRW][x5DhBUvlGfwd]);
            else
                break;
            jX3rzR4[qoUc4DHVgZRW][x5DhBUvlGfwd] = -1;
            switch (bGUgTHEDLYB (jX3rzR4, emOE4HMsU, gST5CG0YAP, qoUc4DHVgZRW, x5DhBUvlGfwd)) {
            case 1 :
                qoUc4DHVgZRW = qoUc4DHVgZRW - 1;
                break;
            case 2 :
                x5DhBUvlGfwd = x5DhBUvlGfwd + 1;
                break;
            case 3 :
                qoUc4DHVgZRW = qoUc4DHVgZRW + 1;
                break;
            case 4 :
                x5DhBUvlGfwd = x5DhBUvlGfwd - 1;
                break;
            }
        }
        if (jX3rzR4[qoUc4DHVgZRW][x5DhBUvlGfwd] > 0)
            printf ("%d\n", jX3rzR4[qoUc4DHVgZRW][x5DhBUvlGfwd]);
    }
}

