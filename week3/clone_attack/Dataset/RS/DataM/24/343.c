int main () {
    int QRJWfh [500] = {-1};
    int sv0te8 [500];
    int Hf1XvGR;
    int rm4jAGNy;
    int YtQl2V;
    int hbHVvC;
    int CHEhOowC;
    int EPR1z3HVN0Iy;
    Hf1XvGR = (66 - 66);
    rm4jAGNy = 0;
    YtQl2V = 100;
    char XUeg54Cz [(516 - 16)];
    gets (XUeg54Cz);
    {
        hbHVvC = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (500 > hbHVvC) {
            if (!(' ' != XUeg54Cz[hbHVvC])) {
                Hf1XvGR = Hf1XvGR +1;
                QRJWfh[Hf1XvGR] = hbHVvC;
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
            hbHVvC = hbHVvC + 1;
        };
    }
    for (hbHVvC = 0; hbHVvC < 500; hbHVvC = hbHVvC + 1) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (XUeg54Cz[hbHVvC] == '\0') {
            Hf1XvGR++;
            QRJWfh[Hf1XvGR] = hbHVvC;
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
            break;
        };
    }
    sv0te8[0] = QRJWfh[1];
    for (hbHVvC = 1; Hf1XvGR >= hbHVvC; hbHVvC++)
        sv0te8[hbHVvC] = QRJWfh[hbHVvC + 1] - QRJWfh[hbHVvC] - 1;
    {
        hbHVvC = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (hbHVvC < Hf1XvGR) {
            if (sv0te8[hbHVvC] > rm4jAGNy) {
                rm4jAGNy = sv0te8[hbHVvC];
                CHEhOowC = hbHVvC;
            }
            if (sv0te8[hbHVvC] < YtQl2V) {
                YtQl2V = sv0te8[hbHVvC];
                EPR1z3HVN0Iy = hbHVvC;
            }
            hbHVvC++;
        };
    }
    {
        hbHVvC = CHEhOowC;
        while (hbHVvC < QRJWfh[CHEhOowC +1]) {
            printf ("%c", XUeg54Cz[hbHVvC]);
            hbHVvC++;
        };
    }
    for (hbHVvC = QRJWfh[EPR1z3HVN0Iy] + 1; hbHVvC < QRJWfh[EPR1z3HVN0Iy +1]; hbHVvC++)
        printf ("%c", XUeg54Cz[hbHVvC]);
    printf ("\n");
    return 0;
}

