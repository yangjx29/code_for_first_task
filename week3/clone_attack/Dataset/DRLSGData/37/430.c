int main () {
    int QaYLxM;
    int PtnJvd;
    int bKX8l29AR1Z0;
    int CMbuh6C;
    int M436rEg;
    char hlYDVf [26];
    char OODFbJ3qS [100000];
    int CtRO2u5HS;
    cin >> QaYLxM;
    {
        PtnJvd = (324 - 324);
        for (; PtnJvd < QaYLxM;) {
            cin >> OODFbJ3qS;
            CMbuh6C = strlen (OODFbJ3qS);
            {
                CtRO2u5HS = (55 - 55);
                for (; 26 > CtRO2u5HS;) {
                    hlYDVf[CtRO2u5HS] = '1';
                    CtRO2u5HS = CtRO2u5HS +(969 - 968);
                }
            }
            hlYDVf[(967 - 967)] = OODFbJ3qS[(366 - 366)];
            {
                CtRO2u5HS = (628 - 627);
                for (; CMbuh6C > CtRO2u5HS;) {
                    M436rEg = 0;
                    do {
                        if (!('1' != hlYDVf[M436rEg]))
                            break;
                        if (hlYDVf[M436rEg] != OODFbJ3qS[CtRO2u5HS])
                            M436rEg++;
                        else
                            break;
                    }
                    while (1);
                    if (!('1' != hlYDVf[M436rEg]))
                        hlYDVf[M436rEg] = OODFbJ3qS[CtRO2u5HS];
                    else {
                        bKX8l29AR1Z0 = M436rEg;
                        for (; 26 > bKX8l29AR1Z0;) {
                            hlYDVf[bKX8l29AR1Z0] = hlYDVf[bKX8l29AR1Z0 + 1];
                            bKX8l29AR1Z0 = bKX8l29AR1Z0 + 1;
                        }
                    }
                    CtRO2u5HS = CtRO2u5HS +1;
                }
            }
            PtnJvd = PtnJvd +1;
            if (!('1' != hlYDVf[0]))
                cout << "no" << endl;
            else
                cout << hlYDVf[0] << endl;
        }
    }
    return 0;
}

