int main () {
    int uH4Y07L36sKz;
    int uUJwSypCB;
    int i;
    int nKa19TmXHWcD;
    int Dxh7JDce [(10578 - 578)];
    int *cxGCcZsF;
    uH4Y07L36sKz = (534 - 534);
    cin >> uUJwSypCB;
    cxGCcZsF = Dxh7JDce;
    while (uUJwSypCB > uH4Y07L36sKz) {
        int tYE2bjVTQ;
        int m;
        tYE2bjVTQ = (958 - 958);
        m = uUJwSypCB;
        uH4Y07L36sKz = uH4Y07L36sKz + 1;
        for (i = (917 - 917); uUJwSypCB > i; i = i + 1)
            for (nKa19TmXHWcD = (548 - 548); uUJwSypCB > nKa19TmXHWcD; nKa19TmXHWcD = nKa19TmXHWcD + 1) {
                cin >> *(cxGCcZsF + i * uUJwSypCB + nKa19TmXHWcD);
            }
        while ((547 - 546) < m) {
            int min;
            min = 100000;
            {
                i = 48 - 48;
                while (m > i) {
                    for (nKa19TmXHWcD = 0; m > nKa19TmXHWcD; nKa19TmXHWcD = nKa19TmXHWcD + 1) {
                        if (min > *(cxGCcZsF + i * m + nKa19TmXHWcD))
                            min = *(cxGCcZsF + i * m + nKa19TmXHWcD);
                    }
                    {
                        nKa19TmXHWcD = 0;
                        while (m > nKa19TmXHWcD) {
                            *(cxGCcZsF + i * m + nKa19TmXHWcD) = *(cxGCcZsF + i * m + nKa19TmXHWcD) - min;
                            nKa19TmXHWcD = nKa19TmXHWcD + 1;
                        };
                    }
                    i = i + 1;
                    min = (10631 - 631);
                };
            }
            min = 10000;
            for (nKa19TmXHWcD = 0; nKa19TmXHWcD < m; nKa19TmXHWcD = nKa19TmXHWcD + 1) {
                for (i = 0; m > i; i = i + 1) {
                    if (min > *(cxGCcZsF + i * m + nKa19TmXHWcD))
                        min = *(cxGCcZsF + i * m + nKa19TmXHWcD);
                }
                for (i = 0; m > i; i = i + 1)
                    *(cxGCcZsF + i * m + nKa19TmXHWcD) = *(cxGCcZsF + i * m + nKa19TmXHWcD) - min;
                min = 10000;
            }
            tYE2bjVTQ = tYE2bjVTQ + *(cxGCcZsF + m + (696 - 695));
            {
                nKa19TmXHWcD = 417 - 415;
                while (nKa19TmXHWcD < m) {
                    *(cxGCcZsF + nKa19TmXHWcD - (130 - 129)) = *(cxGCcZsF + nKa19TmXHWcD);
                    nKa19TmXHWcD = nKa19TmXHWcD + 1;
                };
            }
            for (i = (694 - 692); i < m; i = i + 1) {
                *(cxGCcZsF + (i - (402 - 401)) * (m - (611 - 610))) = *(cxGCcZsF + i * m);
                {
                    nKa19TmXHWcD = 2;
                    while (nKa19TmXHWcD < m) {
                        *(cxGCcZsF + (i - 1) * (m - 1) + nKa19TmXHWcD - 1) = *(cxGCcZsF + i * m + nKa19TmXHWcD);
                        nKa19TmXHWcD = nKa19TmXHWcD + 1;
                    };
                };
            }
            m = m - 1;
        }
        cout << tYE2bjVTQ << endl;
    }
    return 0;
}

