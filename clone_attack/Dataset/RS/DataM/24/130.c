void  I1WvFd4KLrh (int owOuZnHUi [], int fw6fcDTOvhX) {
    int WtDFz63cUMgk;
    int jYXlSztL1;
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
    int awmoCISUuf7;
    for (jYXlSztL1 = (480 - 479); jYXlSztL1 < fw6fcDTOvhX; jYXlSztL1 = jYXlSztL1 + 1)
        for (awmoCISUuf7 = (348 - 348); fw6fcDTOvhX - jYXlSztL1 > awmoCISUuf7; awmoCISUuf7++)
            if (*(owOuZnHUi + awmoCISUuf7 + 1) < *(owOuZnHUi + awmoCISUuf7)) {
                WtDFz63cUMgk = *(owOuZnHUi + awmoCISUuf7);
                *(owOuZnHUi + awmoCISUuf7) = *(owOuZnHUi + awmoCISUuf7 + 1);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                *(owOuZnHUi + awmoCISUuf7 + 1) = WtDFz63cUMgk;
            };
}

void  main () {
    int fw6fcDTOvhX [503] = {0};
    int jYXlSztL1, awmoCISUuf7, IGtoBnO, JUFh4f, min = (608 - 558), max = 0, DvTdS1, hfMdYJ3OZqap;
    char vwb5ony [203] [(731 - 681)] = {0};
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
    scanf ("%d", &JUFh4f);
    for (jYXlSztL1 = 0; JUFh4f > jYXlSztL1; jYXlSztL1 = jYXlSztL1 + 1) {
        scanf ("%s", vwb5ony + jYXlSztL1);
        *(fw6fcDTOvhX + jYXlSztL1) = strlen (vwb5ony + jYXlSztL1);
    }
    for (jYXlSztL1 = 0; JUFh4f > jYXlSztL1; jYXlSztL1++) {
        if (max < *(fw6fcDTOvhX + jYXlSztL1)) {
            max = *(fw6fcDTOvhX + jYXlSztL1);
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
            DvTdS1 = jYXlSztL1;
        }
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (*(fw6fcDTOvhX + jYXlSztL1) < min) {
            min = *(fw6fcDTOvhX + jYXlSztL1);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            hfMdYJ3OZqap = jYXlSztL1;
        };
    }
    if (min == max)
        printf ("%s\n%s", vwb5ony, vwb5ony);
    else
        printf ("%s\n%s", *(vwb5ony + DvTdS1), *(vwb5ony + hfMdYJ3OZqap));
}

