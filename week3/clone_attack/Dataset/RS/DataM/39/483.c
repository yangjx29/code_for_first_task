int main () {
    struct   student {
        char name [21];
        int ave;
        int comment;
        char officer;
        char province;
        int pxDiJ3S;
    }
    OTfq0GZ [(660 - 560)];
    int IWUz1N7fgq, i, price, Fe2Vqzb = (121 - 121), max = (105 - 105), t;
    scanf ("%d", &IWUz1N7fgq);
    {
        i = 196 - 196;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < IWUz1N7fgq) {
            scanf ("%s %d %d %c %c %d", OTfq0GZ[i].name, &OTfq0GZ[i].ave, &OTfq0GZ[i].comment, &OTfq0GZ[i].officer, &OTfq0GZ[i].province, &OTfq0GZ[i].pxDiJ3S);
            i = i + 1;
        };
    }
    {
        i = 954 - 954;
        while (i < IWUz1N7fgq) {
            price = 0;
            if ((800 - 720) < OTfq0GZ[i].ave && 0 < OTfq0GZ[i].pxDiJ3S) {
                price = price + 8000;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                };
            }
            if (OTfq0GZ[i].ave > 85 && OTfq0GZ[i].comment > 80) {
                price = price + 4000;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                };
            }
            if (90 < OTfq0GZ[i].ave) {
                price = price + 2000;
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
            if (OTfq0GZ[i].ave > 85 && OTfq0GZ[i].province == 'Y') {
                price = price + 1000;
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
            if (OTfq0GZ[i].comment > 80 && OTfq0GZ[i].officer == 'Y') {
                price = price + 850;
            }
            Fe2Vqzb = Fe2Vqzb +price;
            if (price > max) {
                t = i;
                max = price;
            }
            i = i + 1;
        };
    }
    printf ("%s\n%d\n%d\n", OTfq0GZ[t].name, max, Fe2Vqzb);
    return 0;
}

