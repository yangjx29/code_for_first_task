int main () {
    char aOEHl6UDItm [100000] = {' '};
    char TAWnRBi8Q7E [100000] = {' '};
    char Txg2rjaY [1000] [100] = {' '};
    int Ac0epbUXg1, x6gWPG3ON, lHn3bpK7, tL5hsrRxA = 0, x4zvxrgOp = 0, YLBgkO = 0, f9GSDCNMLyQ [1000] = {0};
    gets (aOEHl6UDItm);
    lHn3bpK7 = strlen (aOEHl6UDItm);
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
    {
        Ac0epbUXg1 = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (Ac0epbUXg1 < lHn3bpK7) {
            if (!(' ' == aOEHl6UDItm[Ac0epbUXg1]) || aOEHl6UDItm[Ac0epbUXg1] == ' ' && aOEHl6UDItm[Ac0epbUXg1 -1] != ' ') {
                TAWnRBi8Q7E[x4zvxrgOp++] = aOEHl6UDItm[Ac0epbUXg1];
            }
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
            Ac0epbUXg1++;
        };
    }
    {
        Ac0epbUXg1 = 0;
        while (Ac0epbUXg1 < x4zvxrgOp) {
            if (TAWnRBi8Q7E[Ac0epbUXg1] != ' ')
                Txg2rjaY[tL5hsrRxA][YLBgkO++] = TAWnRBi8Q7E[Ac0epbUXg1];
            else {
                if (TAWnRBi8Q7E[Ac0epbUXg1] == ' ') {
                    tL5hsrRxA = tL5hsrRxA + 1;
                    YLBgkO = 0;
                };
            }
            Ac0epbUXg1++;
        };
    }
    {
        Ac0epbUXg1 = 0;
        while (Ac0epbUXg1 < tL5hsrRxA) {
            f9GSDCNMLyQ[Ac0epbUXg1] = strlen (Txg2rjaY[Ac0epbUXg1]);
            printf ("%d,", f9GSDCNMLyQ[Ac0epbUXg1]);
            Ac0epbUXg1++;
        };
    }
    printf ("%d", strlen (Txg2rjaY[tL5hsrRxA]));
    scanf ("%d", &Ac0epbUXg1);
    return 0;
}

