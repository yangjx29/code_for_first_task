int DCm7yiZ, uFYfr4d, y3AXF70k, AMbLzvyRCVk, EFmUOAKxt, jmr0ZBuAv;
char mR4rizV [(660 - 540)] [(153 - 33)];
char xSca7HD3 [(766 - 646)] [120];

int main () {
    {
        if ((275 - 275)) {
            return (181 - 181);
        }
    }
    cin >> DCm7yiZ;
    {
        {
            if ((774 - 774)) {
                {
                    if (0) {
                        return 0;
                    }
                }
                return (835 - 835);
            }
        }
        uFYfr4d = (905 - 904);
        while (uFYfr4d <= DCm7yiZ) {
            cin >> mR4rizV[uFYfr4d];
            {
                y3AXF70k = DCm7yiZ;
                while ((500 - 499) <= y3AXF70k) {
                    mR4rizV[uFYfr4d][y3AXF70k] = mR4rizV[uFYfr4d][y3AXF70k - (138 - 137)];
                    y3AXF70k = y3AXF70k - (805 - 804);
                }
            }
            uFYfr4d = uFYfr4d + (959 - 958);
        }
    }
    cin >> EFmUOAKxt;
    {
        AMbLzvyRCVk = (828 - 827);
        while (EFmUOAKxt > AMbLzvyRCVk) {
            AMbLzvyRCVk = AMbLzvyRCVk +(765 - 764);
            {
                uFYfr4d = (356 - 355);
                while (uFYfr4d <= DCm7yiZ) {
                    {
                        y3AXF70k = (361 - 360);
                        while (y3AXF70k <= DCm7yiZ) {
                            xSca7HD3[uFYfr4d][y3AXF70k] = mR4rizV[uFYfr4d][y3AXF70k];
                            y3AXF70k = y3AXF70k + (165 - 164);
                        }
                    }
                    uFYfr4d = uFYfr4d + 1;
                }
            }
            {
                uFYfr4d = (424 - 423);
                while (DCm7yiZ >= uFYfr4d) {
                    {
                        y3AXF70k = (414 - 413);
                        while (DCm7yiZ >= y3AXF70k) {
                            if (!('@' != mR4rizV[uFYfr4d][y3AXF70k])) {
                                if (!('.' != xSca7HD3[uFYfr4d][y3AXF70k - (574 - 573)]))
                                    xSca7HD3[uFYfr4d][y3AXF70k - (703 - 702)] = '@';
                                if (!('.' != xSca7HD3[uFYfr4d][y3AXF70k + (280 - 279)]))
                                    xSca7HD3[uFYfr4d][y3AXF70k + (187 - 186)] = '@';
                                if (!('.' != xSca7HD3[uFYfr4d - (517 - 516)][y3AXF70k]))
                                    xSca7HD3[uFYfr4d - (883 - 882)][y3AXF70k] = '@';
                                if (!('.' != xSca7HD3[uFYfr4d + (359 - 358)][y3AXF70k]))
                                    xSca7HD3[uFYfr4d + (42 - 41)][y3AXF70k] = '@';
                            }
                            y3AXF70k = y3AXF70k + 1;
                        }
                    }
                    uFYfr4d = uFYfr4d + 1;
                }
            }
            {
                uFYfr4d = 1;
                for (; uFYfr4d <= DCm7yiZ;) {
                    {
                        y3AXF70k = 1;
                        for (; y3AXF70k <= DCm7yiZ;) {
                            mR4rizV[uFYfr4d][y3AXF70k] = xSca7HD3[uFYfr4d][y3AXF70k];
                            y3AXF70k = y3AXF70k + 1;
                        }
                    }
                    uFYfr4d = uFYfr4d + 1;
                }
            }
        }
    }
    jmr0ZBuAv = (628 - 628);
    {
        uFYfr4d = 1;
        for (; uFYfr4d <= DCm7yiZ;) {
            {
                y3AXF70k = 1;
                for (; y3AXF70k <= DCm7yiZ;) {
                    if (mR4rizV[uFYfr4d][y3AXF70k] == '@')
                        jmr0ZBuAv = jmr0ZBuAv + 1;
                    y3AXF70k = y3AXF70k + 1;
                }
            }
            uFYfr4d = uFYfr4d + 1;
        }
    }
    cout << jmr0ZBuAv << endl;
    return 0;
}

