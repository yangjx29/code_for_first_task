int main () {
    int WkbS0CwY;
    int SD0HTOc7Fx;
    int j;
    int hMoRuSVUs8Q;
    int LToGIi2n3R;
    int ebmP4pZFf;
    int p;
    char dTLgOHIia [(959 - 849)];
    char fHQxVAzp [(673 - 563)];
    char ax8JWaK9QUm;
    scanf ("%d\n", &WkbS0CwY);
    for (; (898 - 898) < WkbS0CwY; WkbS0CwY = WkbS0CwY -1) {
        gets (dTLgOHIia);
        gets (fHQxVAzp);
        gets (dTLgOHIia);
        hMoRuSVUs8Q = strlen (dTLgOHIia);
        LToGIi2n3R = strlen (fHQxVAzp);
        {
            SD0HTOc7Fx = 387 - 387;
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
            while (LToGIi2n3R / (972 - 970) > SD0HTOc7Fx) {
                ax8JWaK9QUm = fHQxVAzp[SD0HTOc7Fx];
                fHQxVAzp[SD0HTOc7Fx] = fHQxVAzp[LToGIi2n3R -SD0HTOc7Fx-(796 - 795)];
                SD0HTOc7Fx = SD0HTOc7Fx +1;
                fHQxVAzp[LToGIi2n3R -SD0HTOc7Fx-(29 - 28)] = ax8JWaK9QUm;
            };
        }
        for (SD0HTOc7Fx = (55 - 55); hMoRuSVUs8Q / 2 > SD0HTOc7Fx; SD0HTOc7Fx = SD0HTOc7Fx +1) {
            ax8JWaK9QUm = dTLgOHIia[SD0HTOc7Fx];
            dTLgOHIia[SD0HTOc7Fx] = dTLgOHIia[hMoRuSVUs8Q - SD0HTOc7Fx -(930 - 929)];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            dTLgOHIia[hMoRuSVUs8Q - SD0HTOc7Fx -(317 - 316)] = ax8JWaK9QUm;
        }
        {
            SD0HTOc7Fx = 821 - 821;
            while (SD0HTOc7Fx < LToGIi2n3R) {
                if (fHQxVAzp[SD0HTOc7Fx] <= dTLgOHIia[SD0HTOc7Fx])
                    dTLgOHIia[SD0HTOc7Fx] = '0' + dTLgOHIia[SD0HTOc7Fx] - fHQxVAzp[SD0HTOc7Fx];
                else {
                    j = SD0HTOc7Fx +(724 - 723);
                    while (dTLgOHIia[j] == '0') {
                        dTLgOHIia[j] = '9';
                        j = j + 1;
                    }
                    dTLgOHIia[j] -= 1;
                    dTLgOHIia[SD0HTOc7Fx] = dTLgOHIia[SD0HTOc7Fx] + 10 - fHQxVAzp[SD0HTOc7Fx] + '0';
                }
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                SD0HTOc7Fx++;
            };
        }
        {
            SD0HTOc7Fx = hMoRuSVUs8Q - 1;
            while (SD0HTOc7Fx >= (273 - 273)) {
                if (dTLgOHIia[SD0HTOc7Fx] != '0')
                    break;
                SD0HTOc7Fx = SD0HTOc7Fx -1;
            };
        }
        for (j = SD0HTOc7Fx; j >= 0; j--)
            printf ("%c", dTLgOHIia[j]);
    };
}

