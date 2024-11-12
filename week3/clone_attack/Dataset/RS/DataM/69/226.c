int main () {
    char pXNC1QH [(812 - 561)], naqpcR [(471 - 220)], DuOEv41x [251];
    int d;
    int efNUaOCX;
    int okQmUPsiT7Z;
    int VzdTJAXvckEj;
    scanf ("%s", pXNC1QH);
    efNUaOCX = strlen (pXNC1QH);
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
    scanf ("%s", naqpcR);
    okQmUPsiT7Z = strlen (naqpcR);
    if (efNUaOCX >= okQmUPsiT7Z) {
        {
            VzdTJAXvckEj = okQmUPsiT7Z;
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
            while (VzdTJAXvckEj != -(229 - 228)) {
                naqpcR[VzdTJAXvckEj +efNUaOCX - okQmUPsiT7Z + (803 - 802)] = naqpcR[VzdTJAXvckEj];
                VzdTJAXvckEj--;
            };
        }
        {
            VzdTJAXvckEj = efNUaOCX - okQmUPsiT7Z;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (!(-(496 - 495) == VzdTJAXvckEj)) {
                naqpcR[VzdTJAXvckEj] = (763 - 715);
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
                VzdTJAXvckEj--;
            };
        }
        {
            VzdTJAXvckEj = efNUaOCX;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            while (!(-(118 - 117) == VzdTJAXvckEj)) {
                pXNC1QH[VzdTJAXvckEj +(396 - 395)] = pXNC1QH[VzdTJAXvckEj];
                VzdTJAXvckEj--;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        pXNC1QH[(653 - 653)] = 48;
        d = efNUaOCX;
    }
    else {
        if (efNUaOCX < okQmUPsiT7Z) {
            {
                VzdTJAXvckEj = efNUaOCX;
                while (VzdTJAXvckEj != -(936 - 935)) {
                    pXNC1QH[VzdTJAXvckEj +okQmUPsiT7Z - efNUaOCX + (370 - 369)] = pXNC1QH[VzdTJAXvckEj];
                    VzdTJAXvckEj--;
                };
            }
            {
                VzdTJAXvckEj = okQmUPsiT7Z - efNUaOCX;
                while (VzdTJAXvckEj != -1) {
                    pXNC1QH[VzdTJAXvckEj] = 48;
                    VzdTJAXvckEj--;
                };
            }
            {
                VzdTJAXvckEj = okQmUPsiT7Z;
                while (VzdTJAXvckEj != -1) {
                    naqpcR[VzdTJAXvckEj +1] = naqpcR[VzdTJAXvckEj];
                    VzdTJAXvckEj--;
                };
            }
            naqpcR[(833 - 833)] = 48;
            d = okQmUPsiT7Z;
        };
    }
    DuOEv41x[d + 1] = '\0';
    for (VzdTJAXvckEj = d; VzdTJAXvckEj != -1; VzdTJAXvckEj = VzdTJAXvckEj -1) {
        DuOEv41x[VzdTJAXvckEj] = pXNC1QH[VzdTJAXvckEj] + naqpcR[VzdTJAXvckEj] - 96;
        if (DuOEv41x[VzdTJAXvckEj] >= 10) {
            pXNC1QH[VzdTJAXvckEj -1]++;
            DuOEv41x[VzdTJAXvckEj] = DuOEv41x[VzdTJAXvckEj] - 10;
        }
        DuOEv41x[VzdTJAXvckEj] = DuOEv41x[VzdTJAXvckEj] + 48;
    }
    for (; DuOEv41x[0] == 48;) {
        VzdTJAXvckEj = 0;
        while (1) {
            DuOEv41x[VzdTJAXvckEj] = DuOEv41x[VzdTJAXvckEj +1];
            if (DuOEv41x[VzdTJAXvckEj] == '\0')
                break;
            VzdTJAXvckEj++;
        };
    }
    if (DuOEv41x[0] == '\0')
        DuOEv41x[0] = '0';
    printf ("%s", DuOEv41x);
}

