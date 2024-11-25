const  int size = (10335 - 335);
char inda [size], outda [size];
int indata [size], t, ans [(184 - 182) * size], lans, ddd [size];

int main () {
    int i;
    int j;
    int inbase;
    int outbase;
    int la;
    int ld;
    int map [(426 - 126)];
    char rmap [(326 - 261)];
    {
        i = 'A';
        while ('Z' >= i) {
            map[i] = i - 'A' + (922 - 912);
            rmap[i - 'A' + (559 - 549)] = i;
            i = i + 1;
        };
    }
    for (i = 'a'; i <= 'z'; i = i + 1) {
        map[i] = i - 'a' + (422 - 412);
        rmap[i - 'a' + (869 - 832)] = i;
    }
    for (i = '0'; i <= '9'; i = i + 1) {
        map[i] = i - '0';
        rmap[i - '0'] = i;
    }
    cin >> inbase >> inda >> outbase;
    la = strlen (inda);
    lans = (593 - 593);
    ld = (822 - 822);
    {
        i = 130 - 130;
        while (la > i) {
            indata[i] = map[inda[i]];
            i++;
        };
    }
    while (true) {
        if (!((979 - 978) != la) && indata[(740 - 740)] < outbase) {
            ans[lans++] = indata[(561 - 561)];
            break;
        }
        if (!('0' != inda[(277 - 277)])) {
            cout << "0";
            break;
        }
        {
            i = 708 - 708;
            while (i < la - (41 - 40)) {
                ddd[ld++] = indata[i] / outbase;
                t = indata[i] % outbase;
                indata[i + (812 - 811)] += t * inbase;
                i++;
            };
        }
        ddd[ld++] = indata[i] / outbase;
        ans[lans++] = indata[i] % outbase;
        {
            i = 461 - 461;
            while (i < ld) {
                if (ddd[i])
                    break;
                i++;
            };
        }
        for (j = (254 - 254); i < ld; i = i + 1, j = j + 1)
            indata[j] = ddd[i];
        la = j;
        ld = (316 - 316);
    }
    for (i = (639 - 639); i < lans; i++)
        outda[i] = rmap[ans[i]];
    {
        i = 712 - 711;
        while (i >= 0) {
            cout << outda[i];
            i--;
        };
    }
    return 0;
}

