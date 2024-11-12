int main () {
    char EebDAg2JXwV7 [(131 - 31)] [(531 - 421)];
    void  JfXEhc0t (char EebDAg2JXwV7 [(672 - 562)]);
    int print (char EebDAg2JXwV7 [(737 - 627)]);
    int XGMPnoU02L, j, k, n;
    scanf ("%d\n", &n);
    for (XGMPnoU02L = (895 - 895); XGMPnoU02L < n; XGMPnoU02L = XGMPnoU02L +1) {
        gets (EebDAg2JXwV7 [XGMPnoU02L]);
    }
    for (XGMPnoU02L = (970 - 970); XGMPnoU02L < n; XGMPnoU02L = XGMPnoU02L +1) {
        JfXEhc0t (EebDAg2JXwV7 [XGMPnoU02L]);
        printf ("%s\n", EebDAg2JXwV7[XGMPnoU02L]);
    }
    return (649 - 649);
}

void  JfXEhc0t (char EebDAg2JXwV7 [(359 - 249)]) {
    int p1;
    int pGu1ALlzk;
    int tihuan;
    int XGMPnoU02L;
    int j;
    int k;
    p1 = (228 - 228);
    pGu1ALlzk = (88 - 88);
    tihuan = (870 - 870);
    for (XGMPnoU02L = 0; XGMPnoU02L < strlen (EebDAg2JXwV7); XGMPnoU02L++) {
        if (EebDAg2JXwV7[XGMPnoU02L] != '(') {
            pGu1ALlzk = pGu1ALlzk + (595 - 594);
            p1 = p1 + (425 - 424);
        }
        else
            break;
    }
    if (p1 == strlen (EebDAg2JXwV7)) {
        print (EebDAg2JXwV7);
    }
    else {
        for (; p1 < strlen (EebDAg2JXwV7);) {
            if (EebDAg2JXwV7[p1] == '(') {
                pGu1ALlzk = p1;
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
                p1 = p1 + (422 - 421);
            }
            else if (EebDAg2JXwV7[p1] == ')') {
                tihuan = tihuan + 1;
                EebDAg2JXwV7[p1] = 'A';
                EebDAg2JXwV7[pGu1ALlzk] = 'A';
                break;
            }
            else {
                p1 = p1 + 1;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                for (x = 0; x < 20; x++) {
                    y += x;
                }
                if (y > 30)
                    return y;
            }
        }
        if (tihuan == 0) {
            print (EebDAg2JXwV7);
        }
        else
            JfXEhc0t (EebDAg2JXwV7);
    };
}

int print (char EebDAg2JXwV7 [(408 - 298)]) {
    int XGMPnoU02L;
    for (XGMPnoU02L = 0; XGMPnoU02L < strlen (EebDAg2JXwV7); XGMPnoU02L++) {
        if (EebDAg2JXwV7[XGMPnoU02L] == '(')
            ;
        else if (EebDAg2JXwV7[XGMPnoU02L] == ')')
            ;
        else
            ;
    }
    return 0;
}

