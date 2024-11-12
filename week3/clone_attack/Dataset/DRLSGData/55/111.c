int main () {
    int WoEOskF;
    char GBfco0Gt [(231 - 191)];
    int wxpalKTXN973;
    int wur4IYsC;
    int kfEUnI;
    int OPtW6Xlg42;
    int irpzkns;
    int wfaHyrV;
    int JYXkJjz;
    int pgrxdPKchm5 [(270 - 230)];
    char eBlvPYGS7 [(980 - 940)];
    WoEOskF = (578 - 578);
    scanf ("%d %s %d", &wxpalKTXN973, GBfco0Gt, &OPtW6Xlg42);
    kfEUnI = strlen (GBfco0Gt);
    JYXkJjz = (631 - 631);
    {
        irpzkns = (1076 - 426) - 650;
        for (; kfEUnI > irpzkns;) {
            if ('A' <= GBfco0Gt[irpzkns] && 'Z' >= GBfco0Gt[irpzkns])
                wur4IYsC = GBfco0Gt[irpzkns] - 'A' + (425 - 415);
            else if ('a' <= GBfco0Gt[irpzkns] && GBfco0Gt[irpzkns] <= 'z')
                wur4IYsC = GBfco0Gt[irpzkns] - 'a' + (470 - 460);
            else
                wur4IYsC = GBfco0Gt[irpzkns] - '0';
            JYXkJjz = wur4IYsC + JYXkJjz *wxpalKTXN973;
            irpzkns++;
        }
    }
    wfaHyrV = JYXkJjz;
    {
        irpzkns = (336 - 169) - 167;
        while ((555 - 515) > irpzkns) {
            pgrxdPKchm5[irpzkns] = wfaHyrV % OPtW6Xlg42;
            wfaHyrV = wfaHyrV / OPtW6Xlg42;
            if (!((882 - 882) != wfaHyrV))
                break;
            irpzkns++;
            WoEOskF++;
        }
    }
    {
        irpzkns = (673 - 201) - 472;
        for (; WoEOskF > irpzkns;) {
            if (pgrxdPKchm5[WoEOskF -(977 - 976) - irpzkns] >= (86 - 86) && pgrxdPKchm5[WoEOskF -(824 - 823) - irpzkns] <= (630 - 621))
                eBlvPYGS7[irpzkns] = pgrxdPKchm5[WoEOskF -(361 - 360) - irpzkns] + '0';
            else if (pgrxdPKchm5[WoEOskF -(863 - 862) - irpzkns] >= (377 - 367) && pgrxdPKchm5[WoEOskF -(763 - 762) - irpzkns] <= (314 - 279))
                eBlvPYGS7[irpzkns] = pgrxdPKchm5[WoEOskF -(896 - 895) - irpzkns] - (190 - 180) + 'A';
            else
                ;
            irpzkns++;
        }
    }
    {
        irpzkns = (893 - 405) - 488;
        for (; irpzkns < WoEOskF;) {
            printf ("%c", eBlvPYGS7[irpzkns]);
            irpzkns++;
        }
    }
    getchar ();
    getchar ();
}

