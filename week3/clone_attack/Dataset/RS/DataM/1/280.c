int HCEF5JcSW7nm (int KHFGL41, int TKTLj2JmRO) {
    int IljzLY = 1;
    int y3nKib9Yo;
    if (KHFGL41 < TKTLj2JmRO) {
        return 0;
    }
    {
        y3nKib9Yo = TKTLj2JmRO;
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
        while (y3nKib9Yo < KHFGL41) {
            if (KHFGL41 % y3nKib9Yo == 0) {
                IljzLY = IljzLY +HCEF5JcSW7nm(KHFGL41 / y3nKib9Yo, y3nKib9Yo);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            y3nKib9Yo++;
        };
    }
    return IljzLY;
}

int main () {
    int KHFGL41 = 0;
    int Pj5clMh;
    int q0fO2zhXoZP [100];
    scanf ("%d", &Pj5clMh);
    do {
        scanf ("%d", &q0fO2zhXoZP[KHFGL41]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        KHFGL41 = KHFGL41 +1;
    }
    while (KHFGL41 < Pj5clMh);
    KHFGL41 = 0;
    do {
        printf ("%d\n", HCEF5JcSW7nm (q0fO2zhXoZP[KHFGL41], 2));
        KHFGL41 = KHFGL41 +1;
    }
    while (KHFGL41 < Pj5clMh);
    return 0;
}

