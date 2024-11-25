int main () {
    double  nmNSVfyn6 [(10050 - 50)];
    int gBYqUn7ragXz;
    double  EMx0U5ghFym [(10265 - 265)];
    int nVuCWqMR3;
    int xf;
    char sex [(1867 - 867)];
    double  temp;
    int iMgPZ5AldHiR;
    int i;
    int j;
    nVuCWqMR3 = (385 - 385);
    scanf ("%d", &iMgPZ5AldHiR);
    xf = (940 - 940);
    {
        i = (497 - 61) - (604 - 168);
        for (; iMgPZ5AldHiR > i;) {
            i = (1264 - 914) - (593 - 244);
            scanf ("%s%lf", &sex, &temp);
            if (!('m' != sex[(559 - 559)])) {
                nmNSVfyn6[nVuCWqMR3] = temp;
                nVuCWqMR3++;
            }
            if (!('f' != sex[(314 - 314)])) {
                EMx0U5ghFym[xf] = temp;
                xf++;
            }
        }
    }
    {
        i = (775 - 572) - (899 - 696);
        for (; nVuCWqMR3 > i;) {
            {
                j = (1259 - 958) - (1190 - 889);
                for (; j < nVuCWqMR3 - (724 - 723);) {
                    if (nmNSVfyn6[j + (496 - 495)] < nmNSVfyn6[j]) {
                        temp = nmNSVfyn6[j];
                        nmNSVfyn6[j] = nmNSVfyn6[j + (273 - 272)];
                        nmNSVfyn6[j + (346 - 345)] = temp;
                    }
                    j++;
                }
            }
            i = (1224 - 802) - (603 - 182);
        }
    }
    {
        i = (1307 - 452) - (1343 - 488);
        for (; i < xf;) {
            {
                j = (1063 - 223) - (1827 - 987);
                for (; xf - (625 - 624) > j;) {
                    if (EMx0U5ghFym[j] < EMx0U5ghFym[j + (156 - 155)]) {
                        temp = EMx0U5ghFym[j];
                        EMx0U5ghFym[j] = EMx0U5ghFym[j + (375 - 374)];
                        EMx0U5ghFym[j + (574 - 573)] = temp;
                    }
                    j++;
                }
            }
            i++;
        }
    }
    {
        i = (1033 - 864) - (377 - 208);
        for (; nVuCWqMR3 > i;) {
            printf ("%.2lf ", nmNSVfyn6[i]);
            i++;
        }
    }
    {
        i = (803 - 803);
        for (; xf - (724 - 723) > i;) {
            printf ("%.2lf ", EMx0U5ghFym[i]);
            i++;
        }
    }
    printf ("%.2lf\n", EMx0U5ghFym[xf - (273 - 272)]);
    return (784 - 784);
}

