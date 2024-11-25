int main () {
    int y478cHI6Y;
    int U6Xr0L5wePs;
    int sbAIhf;
    int njoTCcfQXS;
    int A0sO1q [400];
    int HZhbuBk6F [20] [20];
    int lpEAsZPCUIk [400];
    int ob9Mmt;
    int BAokK3ZtrCBv;
    njoTCcfQXS = 0;
    scanf ("%d %d", &U6Xr0L5wePs, &sbAIhf);
    for (ob9Mmt = 0; U6Xr0L5wePs > ob9Mmt; ob9Mmt = ob9Mmt + 1) {
        BAokK3ZtrCBv = 0;
        for (; sbAIhf > BAokK3ZtrCBv;) {
            scanf ("%d", &HZhbuBk6F[ob9Mmt][BAokK3ZtrCBv]);
            BAokK3ZtrCBv = BAokK3ZtrCBv +1;
        }
    }
    {
        ob9Mmt = 0;
        for (; U6Xr0L5wePs > ob9Mmt;) {
            {
                BAokK3ZtrCBv = 0;
                for (; BAokK3ZtrCBv < sbAIhf;) {
                    if (!(0 != ob9Mmt)) {
                        if (!(0 != BAokK3ZtrCBv)) {
                            if (HZhbuBk6F[ob9Mmt + 1][BAokK3ZtrCBv] <= HZhbuBk6F[ob9Mmt][BAokK3ZtrCBv] && HZhbuBk6F[ob9Mmt][BAokK3ZtrCBv +1] <= HZhbuBk6F[ob9Mmt][BAokK3ZtrCBv]) {
                                lpEAsZPCUIk[njoTCcfQXS] = ob9Mmt;
                                A0sO1q[njoTCcfQXS] = BAokK3ZtrCBv;
                                njoTCcfQXS = njoTCcfQXS + 1;
                            }
                        }
                        else if (!(sbAIhf - 1 != BAokK3ZtrCBv)) {
                            if (HZhbuBk6F[ob9Mmt][BAokK3ZtrCBv -1] <= HZhbuBk6F[ob9Mmt][BAokK3ZtrCBv] && HZhbuBk6F[ob9Mmt + 1][BAokK3ZtrCBv] <= HZhbuBk6F[ob9Mmt][BAokK3ZtrCBv]) {
                                lpEAsZPCUIk[njoTCcfQXS] = ob9Mmt;
                                A0sO1q[njoTCcfQXS] = BAokK3ZtrCBv;
                                njoTCcfQXS = njoTCcfQXS + 1;
                            }
                        }
                        else {
                            if (HZhbuBk6F[ob9Mmt][BAokK3ZtrCBv -1] <= HZhbuBk6F[ob9Mmt][BAokK3ZtrCBv] && HZhbuBk6F[ob9Mmt + 1][BAokK3ZtrCBv] <= HZhbuBk6F[ob9Mmt][BAokK3ZtrCBv] && HZhbuBk6F[ob9Mmt][BAokK3ZtrCBv +1] <= HZhbuBk6F[ob9Mmt][BAokK3ZtrCBv]) {
                                lpEAsZPCUIk[njoTCcfQXS] = ob9Mmt;
                                A0sO1q[njoTCcfQXS] = BAokK3ZtrCBv;
                                njoTCcfQXS = njoTCcfQXS + 1;
                            }
                        }
                    }
                    else if (!(U6Xr0L5wePs -1 != ob9Mmt)) {
                        if (!(0 != BAokK3ZtrCBv)) {
                            if (HZhbuBk6F[ob9Mmt - 1][BAokK3ZtrCBv] <= HZhbuBk6F[ob9Mmt][BAokK3ZtrCBv] && HZhbuBk6F[ob9Mmt][BAokK3ZtrCBv +1] <= HZhbuBk6F[ob9Mmt][BAokK3ZtrCBv]) {
                                lpEAsZPCUIk[njoTCcfQXS] = ob9Mmt;
                                A0sO1q[njoTCcfQXS] = BAokK3ZtrCBv;
                                njoTCcfQXS = njoTCcfQXS + 1;
                            }
                        }
                        else if (!(sbAIhf - 1 != BAokK3ZtrCBv)) {
                            if (HZhbuBk6F[ob9Mmt - 1][BAokK3ZtrCBv] <= HZhbuBk6F[ob9Mmt][BAokK3ZtrCBv] && HZhbuBk6F[ob9Mmt][BAokK3ZtrCBv -1] <= HZhbuBk6F[ob9Mmt][BAokK3ZtrCBv]) {
                                lpEAsZPCUIk[njoTCcfQXS] = ob9Mmt;
                                A0sO1q[njoTCcfQXS] = BAokK3ZtrCBv;
                                njoTCcfQXS = njoTCcfQXS + 1;
                            }
                        }
                        else {
                            if (HZhbuBk6F[ob9Mmt - 1][BAokK3ZtrCBv] <= HZhbuBk6F[ob9Mmt][BAokK3ZtrCBv] && HZhbuBk6F[ob9Mmt][BAokK3ZtrCBv] >= HZhbuBk6F[ob9Mmt][BAokK3ZtrCBv +1] && HZhbuBk6F[ob9Mmt][BAokK3ZtrCBv] >= HZhbuBk6F[ob9Mmt][BAokK3ZtrCBv -1]) {
                                lpEAsZPCUIk[njoTCcfQXS] = ob9Mmt;
                                A0sO1q[njoTCcfQXS] = BAokK3ZtrCBv;
                                njoTCcfQXS = njoTCcfQXS + 1;
                            }
                        }
                    }
                    else if (BAokK3ZtrCBv == 0) {
                        if (HZhbuBk6F[ob9Mmt][BAokK3ZtrCBv] >= HZhbuBk6F[ob9Mmt - 1][BAokK3ZtrCBv] && HZhbuBk6F[ob9Mmt][BAokK3ZtrCBv] >= HZhbuBk6F[ob9Mmt + 1][BAokK3ZtrCBv] && HZhbuBk6F[ob9Mmt][BAokK3ZtrCBv] >= HZhbuBk6F[ob9Mmt][BAokK3ZtrCBv +1]) {
                            lpEAsZPCUIk[njoTCcfQXS] = ob9Mmt;
                            A0sO1q[njoTCcfQXS] = BAokK3ZtrCBv;
                            njoTCcfQXS = njoTCcfQXS + 1;
                        }
                    }
                    else if (BAokK3ZtrCBv == sbAIhf - 1) {
                        if (HZhbuBk6F[ob9Mmt][BAokK3ZtrCBv] >= HZhbuBk6F[ob9Mmt][BAokK3ZtrCBv -1] && HZhbuBk6F[ob9Mmt][BAokK3ZtrCBv] >= HZhbuBk6F[ob9Mmt + 1][BAokK3ZtrCBv] && HZhbuBk6F[ob9Mmt][BAokK3ZtrCBv] >= HZhbuBk6F[ob9Mmt - 1][BAokK3ZtrCBv]) {
                            lpEAsZPCUIk[njoTCcfQXS] = ob9Mmt;
                            A0sO1q[njoTCcfQXS] = BAokK3ZtrCBv;
                            njoTCcfQXS = njoTCcfQXS + 1;
                        }
                    }
                    else {
                        if (HZhbuBk6F[ob9Mmt][BAokK3ZtrCBv] >= HZhbuBk6F[ob9Mmt + 1][BAokK3ZtrCBv] && HZhbuBk6F[ob9Mmt][BAokK3ZtrCBv] >= HZhbuBk6F[ob9Mmt - 1][BAokK3ZtrCBv] && HZhbuBk6F[ob9Mmt][BAokK3ZtrCBv] >= HZhbuBk6F[ob9Mmt][BAokK3ZtrCBv -1] && HZhbuBk6F[ob9Mmt][BAokK3ZtrCBv] >= HZhbuBk6F[ob9Mmt][BAokK3ZtrCBv +1]) {
                            lpEAsZPCUIk[njoTCcfQXS] = ob9Mmt;
                            A0sO1q[njoTCcfQXS] = BAokK3ZtrCBv;
                            njoTCcfQXS = njoTCcfQXS + 1;
                        }
                    }
                    BAokK3ZtrCBv = BAokK3ZtrCBv +1;
                }
            }
            ob9Mmt++;
        }
    }
    {
        y478cHI6Y = 1;
        for (; y478cHI6Y <= njoTCcfQXS;) {
            int KWMrZgxEAlOY;
            int Ccx6ay;
            {
                ob9Mmt = 0;
                while (ob9Mmt < njoTCcfQXS - y478cHI6Y) {
                    if (lpEAsZPCUIk[ob9Mmt] > lpEAsZPCUIk[ob9Mmt + 1]) {
                        KWMrZgxEAlOY = lpEAsZPCUIk[ob9Mmt + 1];
                        Ccx6ay = A0sO1q[ob9Mmt + 1];
                        A0sO1q[ob9Mmt + 1] = A0sO1q[ob9Mmt];
                        lpEAsZPCUIk[ob9Mmt + 1] = lpEAsZPCUIk[ob9Mmt];
                        lpEAsZPCUIk[ob9Mmt] = KWMrZgxEAlOY;
                        A0sO1q[ob9Mmt] = Ccx6ay;
                    }
                    ob9Mmt++;
                }
            }
            y478cHI6Y++;
        }
    }
    {
        ob9Mmt = 0;
        while (ob9Mmt < njoTCcfQXS) {
            printf ("%d %d\n", lpEAsZPCUIk[ob9Mmt], A0sO1q[ob9Mmt]);
            ob9Mmt++;
        }
    }
    return 0;
}

