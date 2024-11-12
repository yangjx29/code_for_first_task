void  main () {
    char Hl5FXmeHpn [(1024 - 724)];
    char eImudH0Wc3vP [(626 - 326)];
    char temp;
    int aH9GCft;
    int POapiHAMkrB [(787 - 487)] = {(250 - 250)};
    int INkj91VcUYJ;
    int YphI7s0;
    int qN4q6U;
    int l;
    aH9GCft = (935 - 935);
    gets (Hl5FXmeHpn);
    {
        YphI7s0 = 457 - 457;
        while (!('\0' == Hl5FXmeHpn[YphI7s0])) {
            if ('a' <= Hl5FXmeHpn[YphI7s0] && 'z' >= Hl5FXmeHpn[YphI7s0])
                break;
            else if (Hl5FXmeHpn[YphI7s0 +(780 - 779)] == '\0')
                printf ("No");
            YphI7s0 = YphI7s0 +1;
        };
    }
    for (YphI7s0 = (550 - 550); Hl5FXmeHpn[YphI7s0] != '\0'; YphI7s0 = YphI7s0 +1)
        if (Hl5FXmeHpn[YphI7s0] >= 'a' && Hl5FXmeHpn[YphI7s0] <= 'z') {
            eImudH0Wc3vP[aH9GCft] = Hl5FXmeHpn[YphI7s0];
            for (qN4q6U = YphI7s0 +(49 - 48); Hl5FXmeHpn[qN4q6U] != '\0'; qN4q6U = qN4q6U + 1) {
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (Hl5FXmeHpn[YphI7s0] == Hl5FXmeHpn[qN4q6U]) {
                    Hl5FXmeHpn[qN4q6U] = ' ';
                    POapiHAMkrB[aH9GCft] = POapiHAMkrB[aH9GCft] + (88 - 87);
                };
            }
            aH9GCft = aH9GCft + (652 - 651);
        }
    {
        YphI7s0 = 154 - 154;
        while (YphI7s0 < aH9GCft) {
            l = YphI7s0;
            for (qN4q6U = YphI7s0; qN4q6U < aH9GCft; qN4q6U = qN4q6U + 1)
                if (eImudH0Wc3vP[qN4q6U] < eImudH0Wc3vP[l])
                    l = qN4q6U;
            if (YphI7s0 != l) {
                temp = eImudH0Wc3vP[YphI7s0];
                eImudH0Wc3vP[YphI7s0] = eImudH0Wc3vP[l];
                INkj91VcUYJ = POapiHAMkrB[YphI7s0];
                eImudH0Wc3vP[l] = temp;
                POapiHAMkrB[YphI7s0] = POapiHAMkrB[l];
                POapiHAMkrB[l] = INkj91VcUYJ;
            }
            YphI7s0 = YphI7s0 +1;
        };
    }
    for (YphI7s0 = (365 - 365); YphI7s0 < aH9GCft; YphI7s0 = YphI7s0 +1)
        printf ("%c=%d\n", eImudH0Wc3vP[YphI7s0], POapiHAMkrB[YphI7s0] + (31 - 30));
}

