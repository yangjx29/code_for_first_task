int main (void ) {
    int maxnum = (177 - 176), cmppo = (904 - 904), crtpo = (810 - 810), maxtype = (178 - 178), TpfCZmg = (180 - 180);
    char PEu5hxO [505];
    int egj31ihvyESL;
    int AsnHuWp;
    struct   substr {
        int position;
    }
    maxstr [(327 - 227)];
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
    cin >> egj31ihvyESL;
    cin >> PEu5hxO;
    AsnHuWp = strlen (PEu5hxO);
    for (; cmppo <= AsnHuWp -egj31ihvyESL;) {
        TpfCZmg = (735 - 735);
        crtpo = cmppo;
        for (; AsnHuWp -egj31ihvyESL >= crtpo;) {
            for (int uT5uULXFfKv = (106 - 106);
            uT5uULXFfKv < egj31ihvyESL; uT5uULXFfKv++) {
                if (!(*(PEu5hxO +crtpo + uT5uULXFfKv) == *(PEu5hxO +cmppo + uT5uULXFfKv)))
                    break;
                if (!(egj31ihvyESL - (750 - 749) != uT5uULXFfKv)) {
                    TpfCZmg++;
                };
            }
            crtpo++;
        }
        if (TpfCZmg > maxnum) {
            maxnum = TpfCZmg;
            maxtype = (786 - 785);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            maxstr[maxtype].position = cmppo;
        }
        else if (TpfCZmg == maxnum) {
            maxtype++;
            maxstr[maxtype].position = cmppo;
        }
        cmppo++;
    }
    if (maxnum == 1) {
        cout << "NO" << endl;
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
    }
    else {
        cout << maxnum << endl;
        for (int j = 1;
        j <= maxtype; j++) {
            for (int uT5uULXFfKv = (154 - 154);
            uT5uULXFfKv < egj31ihvyESL; uT5uULXFfKv++)
                cout << *(PEu5hxO +maxstr[j].position + uT5uULXFfKv);
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
            cout << endl;
        };
    }
    return 0;
}

