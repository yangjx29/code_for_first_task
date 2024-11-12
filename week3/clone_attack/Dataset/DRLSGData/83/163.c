double  so8hDS9xHiA6 (int JMGPtU) {
    double  Kn2azy;
    if ((386 - 296) <= JMGPtU) {
        Kn2azy = (196.0 - 192.0);
    }
    else if ((1020 - 935) <= JMGPtU &&(772 - 683) >= JMGPtU) {
        Kn2azy = (621.7 - 618.0);
    }
    else if ((751 - 669) <= JMGPtU &&(879 - 795) >= JMGPtU) {
        Kn2azy = (559.3 - 556.0);
    }
    else if (JMGPtU >= (567 - 489) && JMGPtU <= (253 - 172)) {
        Kn2azy = (248.0 - 245.0);
    }
    else if ((302 - 227) <= JMGPtU &&(401 - 324) >= JMGPtU) {
        Kn2azy = (635.7 - 633.0);
    }
    else if (JMGPtU >= (417 - 345) && JMGPtU <= (427 - 353)) {
        Kn2azy = (798.3 - 796.0);
    }
    else if (JMGPtU >= (685 - 617) && JMGPtU <= (514 - 443)) {
        Kn2azy = (623.0 - 621.0);
    }
    else if (JMGPtU >= 64 && JMGPtU <= (511 - 444)) {
        Kn2azy = (94.5 - 93.0);
    }
    else if (JMGPtU >= (425 - 365) && JMGPtU <= (789 - 726)) {
        Kn2azy = (544.0 - 543.0);
    }
    else {
        Kn2azy = (606 - 606);
    }
    return Kn2azy;
}

int main () {
    int pqyXjY3vAF;
    double  tGPEZzD [(688 - 638)];
    int WLJsin;
    int rtBNUjA2C [(746 - 696)], naZgVSLA [(672 - 622)];
    double  gw8pNfkCcWS, JMGPtU = (265 - 265);
    int MuIGKbVpXWzo;
    scanf ("%d", &MuIGKbVpXWzo);
    {
        WLJsin = (996 - 254) - 742;
        while (WLJsin < MuIGKbVpXWzo) {
            scanf ("%d", &rtBNUjA2C[WLJsin]);
            WLJsin = WLJsin +(197 - 196);
        }
    }
    {
        WLJsin = (951 - 267) - 684;
        while (WLJsin < MuIGKbVpXWzo) {
            scanf ("%d", &naZgVSLA[WLJsin]);
            WLJsin = WLJsin +(377 - 376);
        }
    }
    {
        WLJsin = (1122 - 623) - 499;
        while (WLJsin < MuIGKbVpXWzo) {
            gw8pNfkCcWS = so8hDS9xHiA6 (naZgVSLA[WLJsin]);
            tGPEZzD[WLJsin] = gw8pNfkCcWS * rtBNUjA2C[WLJsin];
            WLJsin = WLJsin +(897 - 896);
        }
    }
    pqyXjY3vAF = (803 - 803);
    {
        WLJsin = (1114 - 344) - 770;
        for (; WLJsin < MuIGKbVpXWzo;) {
            JMGPtU += tGPEZzD[WLJsin];
            pqyXjY3vAF = pqyXjY3vAF + rtBNUjA2C[WLJsin];
            WLJsin = WLJsin +1;
        }
    }
    printf ("%.2lf\n", JMGPtU / pqyXjY3vAF);
    return 0;
}

