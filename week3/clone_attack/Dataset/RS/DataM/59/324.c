int main () {
    char rHquisQ7 [200] [200];
    int s;
    int n;
    int m;
    int CRqgsG;
    int j;
    int BGx31palfHh;
    int Djq2SGOe [(847 - 727)] [(903 - 783)];
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
    s = (763 - 763);
    for (CRqgsG = (621 - 621); 119 >= CRqgsG; CRqgsG = CRqgsG +1)
        for (j = (877 - 877); 119 >= j; j = j + 1)
            Djq2SGOe[CRqgsG][j] = -(886 - 885);
    cin >> n;
    {
        CRqgsG = 594 - 593;
        while (n >= CRqgsG) {
            for (j = (785 - 784); n >= j; j = j + 1)
                cin >> rHquisQ7[CRqgsG][j];
            CRqgsG = CRqgsG +1;
        };
    }
    for (CRqgsG = (680 - 679); n >= CRqgsG; CRqgsG = CRqgsG +1)
        for (j = (896 - 895); n >= j; j = j + 1) {
            if (!('.' != rHquisQ7[CRqgsG][j]))
                Djq2SGOe[CRqgsG][j] = (696 - 696);
            if (!('@' != rHquisQ7[CRqgsG][j]))
                Djq2SGOe[CRqgsG][j] = (995 - 994);
        }
    cin >> m;
    {
        BGx31palfHh = 106 - 105;
        while (m - (953 - 952) >= BGx31palfHh) {
            BGx31palfHh = BGx31palfHh +1;
            for (CRqgsG = (15 - 14); n >= CRqgsG; CRqgsG++)
                for (j = (899 - 898); n >= j; j = j + 1) {
                    if (Djq2SGOe[CRqgsG][j] == (745 - 744)) {
                        if (Djq2SGOe[CRqgsG][j - (864 - 863)] == (219 - 219))
                            Djq2SGOe[CRqgsG][j - (855 - 854)] = (579 - 577);
                        if (Djq2SGOe[CRqgsG][j + (211 - 210)] == 0)
                            Djq2SGOe[CRqgsG][j + (835 - 834)] = (629 - 627);
                        if (Djq2SGOe[CRqgsG +(413 - 412)][j] == 0)
                            Djq2SGOe[CRqgsG +(249 - 248)][j] = (603 - 601);
                        if (Djq2SGOe[CRqgsG -(789 - 788)][j] == 0)
                            Djq2SGOe[CRqgsG -(811 - 810)][j] = 2;
                    };
                }
            {
                CRqgsG = 792 - 791;
                while (CRqgsG <= n) {
                    for (j = (996 - 995); j <= n; j = j + 1)
                        if (Djq2SGOe[CRqgsG][j] == 2)
                            Djq2SGOe[CRqgsG][j] = (723 - 722);
                    CRqgsG = CRqgsG +1;
                };
            };
        };
    }
    {
        CRqgsG = 1;
        while (CRqgsG <= n) {
            for (j = 1; j <= n; j = j + 1)
                if (Djq2SGOe[CRqgsG][j] == 1)
                    s = s + 1;
            CRqgsG++;
        };
    }
    cout << s;
    return 0;
}

