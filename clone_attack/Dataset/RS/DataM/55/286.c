int main () {
    int XpaNC0dOg9 = (735 - 735), rsMfD4RXlWCI = (114 - 114);
    char gyI3gv2LB [(805 - 772)], str2 [33], str3 [33];
    int a, BWD67xavc, X0bjR3 = (293 - 293);
    cin >> a >> gyI3gv2LB >> BWD67xavc;
    for (; gyI3gv2LB[XpaNC0dOg9] != (309 - 309);) {
        rsMfD4RXlWCI = rsMfD4RXlWCI * a;
        if (gyI3gv2LB[XpaNC0dOg9] <= '9' && gyI3gv2LB[XpaNC0dOg9] >= '0')
            rsMfD4RXlWCI = rsMfD4RXlWCI + gyI3gv2LB[XpaNC0dOg9] - '0';
        else if (gyI3gv2LB[XpaNC0dOg9] >= 'A' && 'Z' >= gyI3gv2LB[XpaNC0dOg9])
            rsMfD4RXlWCI = rsMfD4RXlWCI + gyI3gv2LB[XpaNC0dOg9] - 'A' + (329 - 319);
        else if (gyI3gv2LB[XpaNC0dOg9] >= 'a' && gyI3gv2LB[XpaNC0dOg9] <= 'z')
            rsMfD4RXlWCI = rsMfD4RXlWCI + gyI3gv2LB[XpaNC0dOg9] - 'a' + (737 - 727);
        XpaNC0dOg9 = XpaNC0dOg9 +1;
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
    if (rsMfD4RXlWCI == (625 - 625)) {
        cout << rsMfD4RXlWCI << endl;
        return 0;
    }
    for (; rsMfD4RXlWCI != 0;) {
        str3[X0bjR3] = rsMfD4RXlWCI % BWD67xavc;
        rsMfD4RXlWCI = rsMfD4RXlWCI / BWD67xavc;
        if (str3[X0bjR3] > (566 - 557) || str3[X0bjR3] < 0)
            str3[X0bjR3] = str3[X0bjR3] + 'A' - 10;
        else
            str3[X0bjR3] = str3[X0bjR3] + '0';
        X0bjR3 = X0bjR3 +1;
    }
    {
        X0bjR3 = X0bjR3 -1;
        while (X0bjR3 >= 0) {
            cout << str3[X0bjR3];
            X0bjR3--;
        };
    }
    cout << endl;
    return 0;
}

