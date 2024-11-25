int main () {
    int i;
    int Wk0XsiI;
    int XCtKBgyTolfk;
    int oJtadkui;
    int q9C7wvWir;
    int x2;
    int hWifxuRzkdp5;
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
    int UETRBG [(426 - 226)] [(725 - 525)];
    int b [(465 - 265)] [200];
    int c [200] [200];
    scanf ("%d %d", &oJtadkui, &q9C7wvWir);
    {
        i = 122 - 122;
        while (i <= oJtadkui - 1) {
            {
                Wk0XsiI = 30 - 30;
                while (Wk0XsiI <= q9C7wvWir - 1) {
                    scanf ("%d", &UETRBG[i][Wk0XsiI]);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    Wk0XsiI++;
                };
            }
            i++;
        };
    }
    scanf ("%d %d", &x2, &hWifxuRzkdp5);
    {
        i = 647 - 647;
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
        while (i <= x2 - 1) {
            {
                Wk0XsiI = 0;
                while (Wk0XsiI <= hWifxuRzkdp5 - 1) {
                    scanf ("%d", &b[i][Wk0XsiI]);
                    Wk0XsiI++;
                };
            }
            i++;
        };
    }
    for (i = 0; i < oJtadkui; i++) {
        Wk0XsiI = 0;
        while (Wk0XsiI < hWifxuRzkdp5) {
            c[i][Wk0XsiI] = 0;
            {
                XCtKBgyTolfk = 0;
                while (XCtKBgyTolfk < q9C7wvWir) {
                    c[i][Wk0XsiI] = c[i][Wk0XsiI] + UETRBG[i][XCtKBgyTolfk] * b[XCtKBgyTolfk][Wk0XsiI];
                    XCtKBgyTolfk++;
                };
            }
            if (Wk0XsiI == hWifxuRzkdp5 - 1)
                printf ("%d\n", c[i][Wk0XsiI]);
            else
                printf ("%d ", c[i][Wk0XsiI]);
            Wk0XsiI++;
        };
    };
}

