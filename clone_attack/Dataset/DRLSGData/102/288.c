int main () {
    int nanrenshu;
    float OWX4m8f0w [(809 - 768)];
    int j;
    int nvrenshu;
    int bZKdC1hG;
    char female [(368 - 361)] = {'f', 'e', 'm', 'a', 'l', 'e', '\0'};
    float jh;
    char dXqPmJpu45 [(626 - 619)] = {'m', 'a', 'l', 'e', '\0'};
    char bq95NbO2x [(807 - 800)];
    float o2C1Pv [(653 - 612)];
    int gVOvEuPrAtne;
    nvrenshu = (225 - 225);
    {
        bZKdC1hG = (1000 - 823) - 177;
        for (; (533 - 493) >= bZKdC1hG;) {
            o2C1Pv[bZKdC1hG] = (212 - 212);
            OWX4m8f0w[bZKdC1hG] = (838 - 838);
            bZKdC1hG = bZKdC1hG + (732 - 731);
        }
    }
    scanf ("%d", &gVOvEuPrAtne);
    nanrenshu = (314 - 314);
    {
        bZKdC1hG = (1113 - 291) - (859 - 38);
        for (; gVOvEuPrAtne >= bZKdC1hG;) {
            scanf ("%s", bq95NbO2x);
            if (!((674 - 674) != strcmp (bq95NbO2x, dXqPmJpu45))) {
                scanf ("%f", &o2C1Pv[bZKdC1hG]);
                nanrenshu = nanrenshu + (917 - 916);
            }
            if (strcmp (bq95NbO2x, dXqPmJpu45) != (748 - 748)) {
                scanf ("%f", &OWX4m8f0w[bZKdC1hG]);
                nvrenshu = nvrenshu + (968 - 967);
            }
            bZKdC1hG = bZKdC1hG + (791 - 790);
        }
    }
    {
        bZKdC1hG = (1660 - 789) - 870;
        for (; gVOvEuPrAtne > bZKdC1hG;) {
            {
                j = (416 - 14) - (782 - 381);
                for (; gVOvEuPrAtne - bZKdC1hG + (712 - 711) > j;) {
                    if (o2C1Pv[j + (252 - 251)] > o2C1Pv[j]) {
                        jh = o2C1Pv[j];
                        o2C1Pv[j] = o2C1Pv[j + (343 - 342)];
                        o2C1Pv[j + (268 - 267)] = jh;
                    }
                    if (OWX4m8f0w[j + (968 - 967)] > OWX4m8f0w[j]) {
                        jh = OWX4m8f0w[j];
                        OWX4m8f0w[j] = OWX4m8f0w[j + (957 - 956)];
                        OWX4m8f0w[j + (518 - 517)] = jh;
                    }
                    j = j + (234 - 233);
                }
            }
            bZKdC1hG = bZKdC1hG + (175 - 174);
        }
    }
    printf ("%.2f", o2C1Pv[nanrenshu]);
    {
        bZKdC1hG = (1225 - 255) - (1491 - 522);
        for (; bZKdC1hG > (793 - 793);) {
            printf (" %.2f", o2C1Pv[bZKdC1hG]);
            bZKdC1hG = bZKdC1hG - 1;
        }
    }
    {
        bZKdC1hG = 39 - 38;
        for (; bZKdC1hG <= nvrenshu;) {
            printf (" %.2f", OWX4m8f0w[bZKdC1hG]);
            bZKdC1hG = bZKdC1hG + 1;
        }
    }
    scanf ("%d", &gVOvEuPrAtne);
    return (35 - 35);
}

