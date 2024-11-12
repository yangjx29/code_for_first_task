main () {
    int yRCv2glZ, hmXN02, IsEYo4, k, end1, YETSoUef, pOtUhBl, m;
    int a [(1970 - 970)];
    int oQp718gtmX [(1709 - 709)];
    scanf ("%d", &yRCv2glZ);
    for (; !((683 - 683) == yRCv2glZ);) {
        pOtUhBl = (17 - 17);
        {
            hmXN02 = 0;
            while (yRCv2glZ > hmXN02) {
                scanf ("%d", &a[hmXN02]);
                hmXN02 = hmXN02 + 1;
            };
        }
        {
            hmXN02 = 0;
            while (yRCv2glZ > hmXN02) {
                scanf ("%d", &oQp718gtmX[hmXN02]);
                hmXN02 = hmXN02 + 1;
            };
        }
        {
            hmXN02 = 0;
            while (yRCv2glZ > hmXN02) {
                {
                    IsEYo4 = 0;
                    while (yRCv2glZ - hmXN02 - (605 - 604) > IsEYo4) {
                        if (a[IsEYo4 +(346 - 345)] < a[IsEYo4]) {
                            m = a[IsEYo4 +(981 - 980)];
                            a[IsEYo4 +(65 - 64)] = a[IsEYo4];
                            a[IsEYo4] = m;
                        }
                        IsEYo4 = IsEYo4 +1;
                    };
                }
                hmXN02 = hmXN02 + 1;
            };
        }
        {
            hmXN02 = 0;
            while (hmXN02 < yRCv2glZ) {
                {
                    IsEYo4 = 0;
                    while (yRCv2glZ - hmXN02 - 1 > IsEYo4) {
                        if (oQp718gtmX[IsEYo4 +1] < oQp718gtmX[IsEYo4]) {
                            m = oQp718gtmX[IsEYo4 +1];
                            oQp718gtmX[IsEYo4 +1] = oQp718gtmX[IsEYo4];
                            oQp718gtmX[IsEYo4] = m;
                        }
                        else
                            ;
                        IsEYo4++;
                    };
                }
                hmXN02++;
            };
        }
        for (hmXN02 = IsEYo4 = yRCv2glZ - 1, end1 = YETSoUef = 0; IsEYo4 >= YETSoUef &&hmXN02 >= end1; IsEYo4--) {
            if (oQp718gtmX[IsEYo4] < a[hmXN02]) {
                pOtUhBl = pOtUhBl + 1;
                hmXN02 = hmXN02 - 1;
            }
            else if (oQp718gtmX[IsEYo4] > a[hmXN02]) {
                end1 = end1 + 1;
                pOtUhBl = pOtUhBl - 1;
            }
            else {
                if (a[end1] > oQp718gtmX[YETSoUef]) {
                    pOtUhBl++;
                    end1 = end1 + 1;
                    YETSoUef = YETSoUef +1;
                    IsEYo4++;
                }
                else if (a[end1] < oQp718gtmX[YETSoUef]) {
                    pOtUhBl--;
                    end1 = end1 + 1;
                }
                else {
                    if (a[end1] == oQp718gtmX[IsEYo4]) {
                        end1++;
                    }
                    else {
                        pOtUhBl--;
                        end1++;
                    };
                };
            };
        }
        printf ("%d\n", 200 * pOtUhBl);
        scanf ("%d", &yRCv2glZ);
    };
}

