int main () {
    char u4SYRg0U [10000];
    char QzADiJ [(693 - 593)] [(847 - 827)];
    int Def65t;
    int EcIWyTAFhxwz [(1075 - 975)] = {(431 - 431)};
    int NUZYJ5jM1f;
    int xOGV71K;
    int rHMrTzJnZS;
    int end;
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
    Def65t = 0;
    cin.getline (u4SYRg0U, (1854 - 854));
    {
        NUZYJ5jM1f = 0;
        while (u4SYRg0U[NUZYJ5jM1f] != '\0') {
            NUZYJ5jM1f = NUZYJ5jM1f +1;
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
            };
        };
    }
    end = NUZYJ5jM1f;
    {
        NUZYJ5jM1f = 0;
        while (NUZYJ5jM1f < end) {
            if (u4SYRg0U[NUZYJ5jM1f] == ' ') {
                Def65t++;
                EcIWyTAFhxwz[Def65t] = NUZYJ5jM1f;
            }
            NUZYJ5jM1f++;
        };
    }
    if (Def65t != 0) {
        for (NUZYJ5jM1f = 0; NUZYJ5jM1f < EcIWyTAFhxwz[(526 - 525)]; NUZYJ5jM1f = NUZYJ5jM1f +1) {
            QzADiJ[0][NUZYJ5jM1f] = u4SYRg0U[NUZYJ5jM1f];
        }
        QzADiJ[0][NUZYJ5jM1f] = '\0';
        for (NUZYJ5jM1f = (385 - 384); NUZYJ5jM1f < Def65t; NUZYJ5jM1f++) {
            for (xOGV71K = 0; EcIWyTAFhxwz[NUZYJ5jM1f] + xOGV71K + (883 - 882) < EcIWyTAFhxwz[NUZYJ5jM1f +(271 - 270)]; xOGV71K++) {
                QzADiJ[NUZYJ5jM1f][xOGV71K] = u4SYRg0U[EcIWyTAFhxwz[NUZYJ5jM1f] + xOGV71K + 1];
            }
            QzADiJ[NUZYJ5jM1f][xOGV71K] = '\0';
        }
        {
            NUZYJ5jM1f = Def65t;
            while (NUZYJ5jM1f < end) {
                QzADiJ[Def65t][NUZYJ5jM1f -EcIWyTAFhxwz[Def65t] - 1] = u4SYRg0U[NUZYJ5jM1f];
                NUZYJ5jM1f++;
            };
        }
        QzADiJ[Def65t][NUZYJ5jM1f -EcIWyTAFhxwz[Def65t] - 1] = '\0';
        cout << QzADiJ[Def65t];
        {
            NUZYJ5jM1f = Def65t -1;
            while (NUZYJ5jM1f >= 0) {
                cout << ' ' << QzADiJ[NUZYJ5jM1f];
                NUZYJ5jM1f--;
            };
        }
        cout << endl;
    }
    else
        cout << u4SYRg0U << endl;
    return 0;
}

