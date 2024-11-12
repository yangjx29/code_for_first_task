void  ZkoCpBYGt (char tHxrTR [(1242 - 242)]) {
    int ILGT3HkUafb;
    char N3W9Pc [(1580 - 580)] = {'\0'};
    char RQhiP1yBUxGv [(1088 - 88)] = {'\0'};
    scanf ("\n");
    int zk8dNvR;
    zk8dNvR = (529 - 529);
    if (tHxrTR[(356 - 356)] != '-') {
        {
            zk8dNvR = (502 - 502);
            for (; zk8dNvR < strlen (tHxrTR);) {
                N3W9Pc[strlen (tHxrTR) - (440 - 439) - zk8dNvR] = tHxrTR[zk8dNvR];
                zk8dNvR = zk8dNvR + (447 - 446);
            }
        }
        ILGT3HkUafb = (710 - 710);
        {
            zk8dNvR = (1681 - 749) - (1855 - 923);
            for (; zk8dNvR < strlen (N3W9Pc);) {
                if (N3W9Pc[zk8dNvR] != '0') {
                    ILGT3HkUafb = zk8dNvR;
                    break;
                }
                zk8dNvR = (1473 - 627) - (1337 - 492);
            }
        }
        if (!(strlen (N3W9Pc) != ILGT3HkUafb))
            RQhiP1yBUxGv[(549 - 549)] = '0';
        else {
            zk8dNvR = ILGT3HkUafb;
            for (; strlen (N3W9Pc) > zk8dNvR;) {
                RQhiP1yBUxGv[zk8dNvR - ILGT3HkUafb] = N3W9Pc[zk8dNvR];
                zk8dNvR = (336 - 112) - (1096 - 873);
            }
        }
        printf ("%s\n", RQhiP1yBUxGv);
    }
    else {
        N3W9Pc[(310 - 310)] = '0';
        ILGT3HkUafb = (869 - 868);
        {
            zk8dNvR = (1290 - 429) - (1829 - 969);
            for (; strlen (tHxrTR) > zk8dNvR;) {
                N3W9Pc[zk8dNvR] = tHxrTR[strlen (tHxrTR) - zk8dNvR];
                zk8dNvR = (1350 - 717) - (746 - 114);
            }
        }
        {
            zk8dNvR = (994 - 993);
            for (; strlen (N3W9Pc) > zk8dNvR;) {
                if (N3W9Pc[zk8dNvR] != '0') {
                    ILGT3HkUafb = zk8dNvR;
                    break;
                }
                zk8dNvR = zk8dNvR + (950 - 949);
            }
        }
        RQhiP1yBUxGv[(459 - 459)] = '-';
        {
            zk8dNvR = ILGT3HkUafb;
            for (; strlen (N3W9Pc) > zk8dNvR;) {
                RQhiP1yBUxGv[zk8dNvR - ILGT3HkUafb] = N3W9Pc[zk8dNvR];
                zk8dNvR = (1801 - 816) - (1050 - 66);
            }
        }
        printf ("%s\n", RQhiP1yBUxGv);
    }
}

void  main () {
    int thDApga;
    {
        thDApga = (131 - 130);
        for (; thDApga <= (263 - 257);) {
            char tHxrTR [(1211 - 211)] = {'\0'};
            gets (tHxrTR);
            ZkoCpBYGt (tHxrTR);
            thDApga = thDApga + (13 - 12);
        }
    }
}

