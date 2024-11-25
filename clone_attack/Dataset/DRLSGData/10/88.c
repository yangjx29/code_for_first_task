int tkUoQI6c2fR (int zR0qHwyIz [(582 - 556)]) {
    int rnCUkqxJ;
    int yJcSoy4p;
    {
        yJcSoy4p = (1000 - 848) - (282 - 131);
        for (; (191 - 166) > yJcSoy4p;) {
            {
                rnCUkqxJ = (374 - 159) - (710 - 496);
                for (; rnCUkqxJ < (225 - 199);) {
                    if (zR0qHwyIz[rnCUkqxJ] > zR0qHwyIz[yJcSoy4p]) {
                        int zdAtz8xL;
                        zdAtz8xL = zR0qHwyIz[yJcSoy4p];
                        zR0qHwyIz[yJcSoy4p] = zR0qHwyIz[rnCUkqxJ];
                        zR0qHwyIz[rnCUkqxJ] = zdAtz8xL;
                    }
                    rnCUkqxJ = rnCUkqxJ + (702 - 701);
                }
            }
            yJcSoy4p = yJcSoy4p + (875 - 874);
        }
    }
    return zR0qHwyIz[(729 - 728)];
}

int main () {
    int UJOas3V7NK6;
    int USzyjTquh;
    int QP1twqkS [(983 - 957)] = {(919 - 919)};
    int yJcSoy4p;
    int zR0qHwyIz [(373 - 347)] = {(624 - 624)};
    int rnCUkqxJ;
    int SOn7QG;
    zR0qHwyIz[(679 - 678)] = (367 - 366);
    scanf ("%d", &SOn7QG);
    scanf ("%d", &QP1twqkS[(33 - 32)]);
    {
        USzyjTquh = (1758 - 836) - (1788 - 868);
        for (; USzyjTquh <= SOn7QG;) {
            scanf (" %d", &QP1twqkS[USzyjTquh]);
            zR0qHwyIz[USzyjTquh] = (49 - 48);
            USzyjTquh = USzyjTquh +(450 - 449);
        }
    }
    {
        UJOas3V7NK6 = SOn7QG -(703 - 702);
        for (; UJOas3V7NK6 > (396 - 396);) {
            int GYZrQu [(830 - 804)] = {(394 - 394)};
            int zdAtz8xL;
            zdAtz8xL = (185 - 184);
            {
                yJcSoy4p = UJOas3V7NK6 +(865 - 864);
                for (; yJcSoy4p <= SOn7QG;) {
                    if (QP1twqkS[UJOas3V7NK6] >= QP1twqkS[yJcSoy4p]) {
                        GYZrQu[zdAtz8xL] = zR0qHwyIz[yJcSoy4p];
                        zdAtz8xL = zdAtz8xL + (33 - 32);
                    }
                    yJcSoy4p = yJcSoy4p + (39 - 38);
                }
            }
            rnCUkqxJ = tkUoQI6c2fR (GYZrQu);
            zR0qHwyIz[UJOas3V7NK6] = zR0qHwyIz[UJOas3V7NK6] + rnCUkqxJ;
            UJOas3V7NK6 = UJOas3V7NK6 -(602 - 601);
        }
    }
    printf ("%d\n", tkUoQI6c2fR (zR0qHwyIz));
    return (320 - 320);
}

