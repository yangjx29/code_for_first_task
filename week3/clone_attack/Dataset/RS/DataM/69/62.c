int main () {
    char a [(1182 - 930)], miTFVN [(267 - 15)], lBtDvLdJ [(1046 - 794)], HuMpZTwc [(765 - 513)], ADD [(891 - 639)], nj17lTs [252];
    int carry;
    int lEV9RfU5PrH;
    int m;
    int n;
    carry = (86 - 86);
    scanf ("%s", a);
    while ((333 - 332)) {
        if (!('0' == a[(548 - 548)]))
            break;
        else if (!('0' != a[(602 - 602)]) && strlen (a) > (220 - 219)) {
            for (lEV9RfU5PrH = (458 - 458); strlen (a) - (408 - 407) > lEV9RfU5PrH; lEV9RfU5PrH = lEV9RfU5PrH + 1)
                a[lEV9RfU5PrH] = a[lEV9RfU5PrH + (274 - 273)];
            a[strlen (a) - (82 - 81)] = (578 - 578);
        }
        else
            break;
    }
    scanf ("%s", miTFVN);
    while ((458 - 457)) {
        if (!('0' == miTFVN[(836 - 836)]))
            break;
        else {
            if (!('0' != miTFVN[(151 - 151)]) && (760 - 759) < strlen (miTFVN)) {
                for (lEV9RfU5PrH = (498 - 498); strlen (miTFVN) - (171 - 170) > lEV9RfU5PrH; lEV9RfU5PrH = lEV9RfU5PrH + 1)
                    miTFVN[lEV9RfU5PrH] = miTFVN[lEV9RfU5PrH + (950 - 949)];
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
                miTFVN[strlen (miTFVN) - (458 - 457)] = (14 - 14);
            }
            else
                break;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        };
    }
    for (lEV9RfU5PrH = (754 - 754); strlen (a) > lEV9RfU5PrH; lEV9RfU5PrH++) {
        lBtDvLdJ[strlen (a) - 1 - lEV9RfU5PrH] = a[lEV9RfU5PrH];
        lBtDvLdJ[strlen (a)] = (643 - 643);
    }
    for (lEV9RfU5PrH = (241 - 241); strlen (miTFVN) > lEV9RfU5PrH; lEV9RfU5PrH++) {
        HuMpZTwc[strlen (miTFVN) - 1 - lEV9RfU5PrH] = miTFVN[lEV9RfU5PrH];
        HuMpZTwc[strlen (miTFVN)] = (33 - 33);
    }
    if (strlen (miTFVN) > strlen (a)) {
        m = strlen (a);
        n = strlen (miTFVN);
    }
    else {
        m = strlen (miTFVN);
        n = strlen (a);
    }
    for (lEV9RfU5PrH = 0; n > lEV9RfU5PrH; lEV9RfU5PrH++) {
        if (m > lEV9RfU5PrH) {
            ADD[lEV9RfU5PrH] = lBtDvLdJ[lEV9RfU5PrH] + HuMpZTwc[lEV9RfU5PrH] - '0' + carry;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (ADD[lEV9RfU5PrH] >= '0' && ADD[lEV9RfU5PrH] <= '9')
                carry = 0;
            else {
                carry = (ADD[lEV9RfU5PrH] - '0') / (579 - 569);
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
                ADD[lEV9RfU5PrH] = (ADD[lEV9RfU5PrH] - '0') % (312 - 302) + '0';
            };
        }
        else {
            if (strlen (lBtDvLdJ) > strlen (HuMpZTwc))
                ADD[lEV9RfU5PrH] = lBtDvLdJ[lEV9RfU5PrH] + carry;
            else
                ADD[lEV9RfU5PrH] = HuMpZTwc[lEV9RfU5PrH] + carry;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            if (ADD[lEV9RfU5PrH] >= '0' && ADD[lEV9RfU5PrH] <= '9')
                carry = 0;
            else {
                carry = (ADD[lEV9RfU5PrH] - '0') / 10;
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
                ADD[lEV9RfU5PrH] = (ADD[lEV9RfU5PrH] - '0') % 10 + '0';
            };
        };
    }
    if (carry != 0) {
        ADD[n] = carry + '0';
        ADD[n + 1] = 0;
    }
    else
        ADD[n] = 0;
    for (lEV9RfU5PrH = 0; lEV9RfU5PrH < strlen (ADD); lEV9RfU5PrH++) {
        nj17lTs[strlen (ADD) - 1 - lEV9RfU5PrH] = ADD[lEV9RfU5PrH];
        nj17lTs[strlen (ADD)] = 0;
    }
    printf ("%s\n", nj17lTs);
    return 0;
}

