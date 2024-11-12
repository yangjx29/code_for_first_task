int main () {
    int HBpbP8S4nV7, ADEWsvm, uAFj8VqrPup, JF6Ec0 = (588 - 588), TAIYGJl = (507 - 507), fEmxGfq [(653 - 603)];
    char t79bpiKN [(787 - 287)] = {'\0'}, OuoFQG8LN [(927 - 897)] [(247 - 227)] = {'\0'};
    gets (t79bpiKN);
    {
        HBpbP8S4nV7 = 709 - 709;
        while (HBpbP8S4nV7 < (1444 - 944)) {
            if (t79bpiKN[HBpbP8S4nV7] == ' ' && t79bpiKN[HBpbP8S4nV7 +(293 - 292)] == '\0') {
                t79bpiKN[HBpbP8S4nV7] = '\0';
            }
            HBpbP8S4nV7 = HBpbP8S4nV7 +1;
        };
    }
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
    {
        HBpbP8S4nV7 = 366 - 366;
        while (HBpbP8S4nV7 < (953 - 453)) {
            if (t79bpiKN[HBpbP8S4nV7] == ' ') {
                TAIYGJl = (227 - 227);
                JF6Ec0 = JF6Ec0 +1;
            }
            else {
                OuoFQG8LN[JF6Ec0][TAIYGJl] = t79bpiKN[HBpbP8S4nV7];
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
                TAIYGJl = TAIYGJl +1;
            }
            HBpbP8S4nV7 = HBpbP8S4nV7 +1;
        };
    }
    for (ADEWsvm = (537 - 537); ADEWsvm <= JF6Ec0; ADEWsvm = ADEWsvm +1) {
        fEmxGfq[ADEWsvm] = strlen (OuoFQG8LN[ADEWsvm]);
    }
    {
        HBpbP8S4nV7 = 534 - 534;
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
        while (HBpbP8S4nV7 <= JF6Ec0) {
            TAIYGJl = (449 - 449);
            {
                ADEWsvm = 180 - 180;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                while (ADEWsvm <= JF6Ec0) {
                    if (fEmxGfq[HBpbP8S4nV7] >= fEmxGfq[ADEWsvm]) {
                        TAIYGJl = TAIYGJl +1;
                    }
                    ADEWsvm = ADEWsvm +1;
                };
            }
            if (TAIYGJl > JF6Ec0) {
                printf ("%s\n", OuoFQG8LN[HBpbP8S4nV7]);
                break;
            }
            HBpbP8S4nV7 = HBpbP8S4nV7 +1;
        };
    }
    {
        HBpbP8S4nV7 = 520 - 520;
        while (HBpbP8S4nV7 <= JF6Ec0) {
            TAIYGJl = 0;
            {
                ADEWsvm = 0;
                while (ADEWsvm <= JF6Ec0) {
                    if (fEmxGfq[HBpbP8S4nV7] <= fEmxGfq[ADEWsvm]) {
                        TAIYGJl = TAIYGJl +1;
                    }
                    ADEWsvm++;
                };
            }
            if (TAIYGJl > JF6Ec0) {
                printf ("%s\n", OuoFQG8LN[HBpbP8S4nV7]);
                break;
            }
            HBpbP8S4nV7 = HBpbP8S4nV7 +1;
        };
    };
}

