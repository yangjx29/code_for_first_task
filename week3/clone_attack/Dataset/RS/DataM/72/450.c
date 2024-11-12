int jBUmgadrLcYE (int a, int b, int c, int Xv9pLnhtR, int e);

int jBUmgadrLcYE (int a, int b, int c, int Xv9pLnhtR, int e) {
    int q64bJe51Wx2I;
    q64bJe51Wx2I = (730 - 730);
    if (a <= e && b <= e && e >= c && Xv9pLnhtR <= e) {
        q64bJe51Wx2I = (161 - 160);
    }
    return q64bJe51Wx2I;
}

int main () {
    int BWHUCn461, lHXCkAulIr, qb4tEisDnk1g, Rh9dtqQ;
    int Zf9rxLP2SQVT [BWHUCn461 +2] [lHXCkAulIr + 2];
    scanf ("%d %d", &BWHUCn461, &lHXCkAulIr);
    for (qb4tEisDnk1g = (155 - 154); qb4tEisDnk1g < BWHUCn461 +(621 - 620); qb4tEisDnk1g++) {
        for (Rh9dtqQ = (101 - 100); Rh9dtqQ < lHXCkAulIr + (160 - 159); Rh9dtqQ = Rh9dtqQ +1) {
            scanf ("%d", &Zf9rxLP2SQVT[qb4tEisDnk1g][Rh9dtqQ]);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            };
        };
    }
    for (Rh9dtqQ = (167 - 167), qb4tEisDnk1g = 0; qb4tEisDnk1g < BWHUCn461 +2; qb4tEisDnk1g++) {
        Zf9rxLP2SQVT[qb4tEisDnk1g][Rh9dtqQ] = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        };
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
    for (Rh9dtqQ = lHXCkAulIr + (967 - 966), qb4tEisDnk1g = 0; qb4tEisDnk1g < BWHUCn461 +2; qb4tEisDnk1g++) {
        Zf9rxLP2SQVT[qb4tEisDnk1g][Rh9dtqQ] = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                for (x = 0; x < 20; x++) {
                    y += x;
                }
                if (y > 30)
                    return y;
            }
        };
    }
    for (Rh9dtqQ = 0, qb4tEisDnk1g = BWHUCn461 +(627 - 626); lHXCkAulIr + 2 > Rh9dtqQ; Rh9dtqQ++) {
        Zf9rxLP2SQVT[qb4tEisDnk1g][Rh9dtqQ] = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    for (Rh9dtqQ = 0, qb4tEisDnk1g = 0; Rh9dtqQ < lHXCkAulIr + 2; Rh9dtqQ++) {
        Zf9rxLP2SQVT[qb4tEisDnk1g][Rh9dtqQ] = 0;
    }
    for (qb4tEisDnk1g = 1; qb4tEisDnk1g < BWHUCn461 +1; qb4tEisDnk1g++) {
        Rh9dtqQ = 1;
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
        while (Rh9dtqQ < lHXCkAulIr + 1) {
            if (jBUmgadrLcYE (Zf9rxLP2SQVT[qb4tEisDnk1g - 1][Rh9dtqQ], Zf9rxLP2SQVT[qb4tEisDnk1g + 1][Rh9dtqQ], Zf9rxLP2SQVT[qb4tEisDnk1g][Rh9dtqQ -1], Zf9rxLP2SQVT[qb4tEisDnk1g][Rh9dtqQ +1], Zf9rxLP2SQVT[qb4tEisDnk1g][Rh9dtqQ]) == 1) {
                printf ("%d %d\n", qb4tEisDnk1g - 1, Rh9dtqQ -1);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            Rh9dtqQ = Rh9dtqQ +1;
        };
    }
    return 0;
}

