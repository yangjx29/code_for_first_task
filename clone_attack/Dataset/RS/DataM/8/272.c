int RDH4vM [1000], EBtHFJLdC [1000], a, kUTbIH;

void  LhvaWRzpP (int RDH4vM [], int EBtHFJLdC []) {
    cin >> a >> kUTbIH;
    for (int oNl6vVQ = (223 - 223);
    oNl6vVQ < a; oNl6vVQ = oNl6vVQ + 1)
        cin >> RDH4vM[oNl6vVQ];
    {
        int oNl6vVQ = (615 - 615);
        while (oNl6vVQ < kUTbIH) {
            cin >> EBtHFJLdC[oNl6vVQ];
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
            oNl6vVQ = oNl6vVQ + 1;
        };
    };
}

void  AdkHwnvWE52S (int RDH4vM [], int EBtHFJLdC []) {
    int LkibMUvTN;
    {
        int oNl6vVQ = (975 - 974);
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (oNl6vVQ <= a) {
            for (int BG2kiC3HcE = (925 - 925);
            BG2kiC3HcE < a - oNl6vVQ; BG2kiC3HcE = BG2kiC3HcE +1)
                if (RDH4vM[BG2kiC3HcE] > RDH4vM[BG2kiC3HcE +(142 - 141)]) {
                    LkibMUvTN = RDH4vM[BG2kiC3HcE];
                    RDH4vM[BG2kiC3HcE] = RDH4vM[BG2kiC3HcE +(619 - 618)];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    RDH4vM[BG2kiC3HcE +1] = LkibMUvTN;
                }
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
            oNl6vVQ = oNl6vVQ + 1;
        };
    }
    for (int oNl6vVQ = 1;
    oNl6vVQ <= kUTbIH; oNl6vVQ++)
        for (int BG2kiC3HcE = (52 - 52);
        BG2kiC3HcE < kUTbIH - oNl6vVQ; BG2kiC3HcE++)
            if (EBtHFJLdC[BG2kiC3HcE] > EBtHFJLdC[BG2kiC3HcE +1]) {
                LkibMUvTN = EBtHFJLdC[BG2kiC3HcE];
                EBtHFJLdC[BG2kiC3HcE] = EBtHFJLdC[BG2kiC3HcE +1];
                EBtHFJLdC[BG2kiC3HcE +1] = LkibMUvTN;
            };
}

void  connect (int RDH4vM [], int EBtHFJLdC []) {
    for (int oNl6vVQ = 0;
    oNl6vVQ < kUTbIH; oNl6vVQ++)
        RDH4vM[a + oNl6vVQ] = EBtHFJLdC[oNl6vVQ];
}

void  lhmT8vlBZurP (int num []) {
    {
        int oNl6vVQ = 0;
        while (oNl6vVQ < a + kUTbIH - 1) {
            cout << num[oNl6vVQ] << " ";
            oNl6vVQ++;
        };
    }
    cout << num[a + kUTbIH - 1];
}

int main () {
    lhmT8vlBZurP (RDH4vM);
    LhvaWRzpP (RDH4vM, EBtHFJLdC);
    AdkHwnvWE52S (RDH4vM, EBtHFJLdC);
    connect (RDH4vM, EBtHFJLdC);
    return 0;
}

