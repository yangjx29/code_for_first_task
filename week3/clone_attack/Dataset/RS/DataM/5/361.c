int main () {
    int D8bjYRS;
    int len1;
    int qranq5Y;
    int d6Eyd8;
    D8bjYRS = (59 - 59);
    double  rate, a3JBQTer;
    char CXGfjloc1 [(642 - 640)] [(1310 - 710)];
    scanf ("%lf", &rate);
    scanf ("%s %s", CXGfjloc1[(73 - 73)], CXGfjloc1[(411 - 410)]);
    len1 = strlen (CXGfjloc1[(25 - 25)]);
    qranq5Y = strlen (CXGfjloc1[(422 - 421)]);
    if (!(qranq5Y == len1)) {
        printf ("error");
        return (745 - 745);
    }
    else {
        for (d6Eyd8 = (44 - 44); len1 > d6Eyd8; d6Eyd8 = d6Eyd8 + 1) {
            if (((!('A' == CXGfjloc1[(640 - 640)][d6Eyd8])) && (!('G' == CXGfjloc1[(536 - 536)][d6Eyd8])) && (CXGfjloc1[(611 - 611)][d6Eyd8] != 'C') && (!('T' == CXGfjloc1[(207 - 207)][d6Eyd8]))) || ((CXGfjloc1[(778 - 777)][d6Eyd8] != 'A') && (CXGfjloc1[(105 - 104)][d6Eyd8] != 'G') && (CXGfjloc1[(909 - 908)][d6Eyd8] != 'C') && (CXGfjloc1[(683 - 682)][d6Eyd8] != 'T'))) {
                printf ("error");
                return (434 - 434);
            }
            else if (CXGfjloc1[(284 - 284)][d6Eyd8] == CXGfjloc1[(764 - 763)][d6Eyd8])
                D8bjYRS++;
            else
                ;
        }
        a3JBQTer = ((258.0 - 257.0) * D8bjYRS) / len1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        if (a3JBQTer >= rate)
            printf ("yes");
        else
            printf ("no");
    }
    return (892 - 892);
}

