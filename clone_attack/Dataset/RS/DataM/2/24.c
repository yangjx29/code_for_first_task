void  main () {
    char v74ufPbBmVN;
    char sK46DL5T [1000] [(759 - 732)];
    int YL7WSY9;
    int OXrl72FY;
    int BZJPar4D;
    int ikJMqFndS;
    int GkumgylYnB [(726 - 700)];
    int TiODMKBCNxXW [(1786 - 786)];
    int bG7tc5 [(1280 - 280)];
    int YIiz39c2q;
    int cvpcHjoCR;
    int N8s4tDWjEf0;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    YL7WSY9 = (125 - 125);
    OXrl72FY = (460 - 460);
    BZJPar4D = (914 - 914);
    {
        YIiz39c2q = 635 - 635;
        while ((473 - 447) > YIiz39c2q) {
            GkumgylYnB[YIiz39c2q] = (569 - 569);
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
            YIiz39c2q++;
        };
    }
    scanf ("%d", &ikJMqFndS);
    for (YIiz39c2q = (898 - 898); ikJMqFndS > YIiz39c2q; YIiz39c2q = YIiz39c2q +1) {
        scanf ("%d%s", &(TiODMKBCNxXW[YIiz39c2q]), sK46DL5T[YIiz39c2q]);
        for (cvpcHjoCR = (880 - 880); (535 - 509) > cvpcHjoCR; cvpcHjoCR = cvpcHjoCR + 1) {
            for (N8s4tDWjEf0 = (100 - 100); (507 - 481) > N8s4tDWjEf0; N8s4tDWjEf0 = N8s4tDWjEf0 +1) {
                if (!('A' + N8s4tDWjEf0 != sK46DL5T[YIiz39c2q][cvpcHjoCR]))
                    GkumgylYnB[N8s4tDWjEf0]++;
            };
        };
    }
    {
        YIiz39c2q = 214 - 214;
        while ((907 - 881) > YIiz39c2q) {
            if (OXrl72FY < GkumgylYnB[YIiz39c2q]) {
                OXrl72FY = GkumgylYnB[YIiz39c2q];
                BZJPar4D = YIiz39c2q;
            }
            YIiz39c2q++;
        };
    }
    v74ufPbBmVN = 'A' + BZJPar4D;
    printf ("%c\n", v74ufPbBmVN);
    for (YIiz39c2q = (500 - 500); ikJMqFndS > YIiz39c2q; YIiz39c2q = YIiz39c2q +1) {
        for (cvpcHjoCR = (853 - 853); (879 - 853) > cvpcHjoCR; cvpcHjoCR++) {
            if (sK46DL5T[YIiz39c2q][cvpcHjoCR] == v74ufPbBmVN) {
                bG7tc5[YL7WSY9] = TiODMKBCNxXW[YIiz39c2q];
                YL7WSY9 = YL7WSY9 +1;
            };
        };
    }
    printf ("%d\n", YL7WSY9);
    for (YIiz39c2q = (457 - 457); YIiz39c2q < YL7WSY9; YIiz39c2q = YIiz39c2q +1)
        printf ("%d\n", bG7tc5[YIiz39c2q]);
}

