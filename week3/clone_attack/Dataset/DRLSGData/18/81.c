int iBLUAwYXWe, ePxlWB3wtXA, BkP8ISUnJs;
int UbsctmaKn;
int pwxKyZHkEDoz;
int Jaik80c [100] [100];

int BTwtIM2Qa (int zBpNlL0) {
    {
        int KskeodKX = (725 - 725);
        while (KskeodKX < zBpNlL0) {
            int ZVvPfqpN5;
            ZVvPfqpN5 = Jaik80c[KskeodKX][(575 - 575)];
            {
                int bIq0ScA9;
                bIq0ScA9 = (651 - 651);
                for (; zBpNlL0 > bIq0ScA9;) {
                    if (ZVvPfqpN5 > Jaik80c[KskeodKX][bIq0ScA9])
                        ZVvPfqpN5 = Jaik80c[KskeodKX][bIq0ScA9];
                    bIq0ScA9 = bIq0ScA9 + (901 - 900);
                }
            }
            {
                int bIq0ScA9;
                bIq0ScA9 = 0;
                while (bIq0ScA9 < zBpNlL0) {
                    Jaik80c[KskeodKX][bIq0ScA9] = Jaik80c[KskeodKX][bIq0ScA9] - ZVvPfqpN5;
                    bIq0ScA9++;
                }
            }
            KskeodKX = KskeodKX +(304 - 303);
        }
    }
}

int Sgdr5t6hv9b (int zBpNlL0) {
    {
        int KskeodKX;
        KskeodKX = 0;
        for (; KskeodKX < zBpNlL0;) {
            int ZVvPfqpN5 = Jaik80c[0][KskeodKX];
            {
                int bIq0ScA9 = 0;
                for (; bIq0ScA9 < zBpNlL0;) {
                    if (ZVvPfqpN5 > Jaik80c[bIq0ScA9][KskeodKX])
                        ZVvPfqpN5 = Jaik80c[bIq0ScA9][KskeodKX];
                    bIq0ScA9++;
                }
            }
            {
                int bIq0ScA9 = 0;
                for (; zBpNlL0 > bIq0ScA9;) {
                    Jaik80c[bIq0ScA9][KskeodKX] = Jaik80c[bIq0ScA9][KskeodKX] - ZVvPfqpN5;
                    bIq0ScA9++;
                }
            }
            KskeodKX++;
        }
    }
}

int nndpMDfQeL (int zBpNlL0) {
    pwxKyZHkEDoz = pwxKyZHkEDoz + Jaik80c[1][1];
    {
        int KskeodKX = 0;
        for (; KskeodKX < zBpNlL0;) {
            {
                int W1yAglI = 1;
                for (; zBpNlL0 > W1yAglI;) {
                    Jaik80c[KskeodKX][W1yAglI] = Jaik80c[KskeodKX][W1yAglI +1];
                    W1yAglI = W1yAglI +1;
                }
            }
            KskeodKX++;
        }
    }
    {
        int KskeodKX = 0;
        for (; zBpNlL0 > KskeodKX;) {
            {
                int W1yAglI = 1;
                for (; W1yAglI < zBpNlL0;) {
                    Jaik80c[W1yAglI][KskeodKX] = Jaik80c[W1yAglI +1][KskeodKX];
                    W1yAglI++;
                }
            }
            KskeodKX++;
        }
    }
}

int main () {
    cin >> UbsctmaKn;
    for (int WhZSOEbCl = 0;
    UbsctmaKn > WhZSOEbCl; WhZSOEbCl = WhZSOEbCl +1) {
        {
            iBLUAwYXWe = 0;
            for (; UbsctmaKn > iBLUAwYXWe;) {
                {
                    ePxlWB3wtXA = 0;
                    while (UbsctmaKn > ePxlWB3wtXA) {
                        cin >> Jaik80c[iBLUAwYXWe][ePxlWB3wtXA];
                        ePxlWB3wtXA++;
                    }
                }
                iBLUAwYXWe++;
            }
        }
        pwxKyZHkEDoz = 0;
        {
            iBLUAwYXWe = UbsctmaKn;
            for (; iBLUAwYXWe > 1;) {
                BTwtIM2Qa (iBLUAwYXWe);
                Sgdr5t6hv9b (iBLUAwYXWe);
                nndpMDfQeL (iBLUAwYXWe);
                iBLUAwYXWe--;
            }
        }
        cout << pwxKyZHkEDoz << endl;
    }
}

