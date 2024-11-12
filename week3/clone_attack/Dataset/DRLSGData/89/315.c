main () {
    int pZhskYInSuoK, i, AR4Z1652i, tjvqcErp5U, GbJ02T3zDvK [20000], gh67Qox [20000];
    {
        tjvqcErp5U = 0;
        while (20000 > tjvqcErp5U) {
            GbJ02T3zDvK[tjvqcErp5U] = 0;
            gh67Qox[tjvqcErp5U] = 0;
            tjvqcErp5U++;
        }
    }
    scanf ("%d", &pZhskYInSuoK);
    scanf ("%d %d", &i, &AR4Z1652i);
    while ((i + AR4Z1652i) != 0) {
        GbJ02T3zDvK[i]++;
        gh67Qox[AR4Z1652i]++;
        scanf ("%d %d", &i, &AR4Z1652i);
    }
    {
        tjvqcErp5U = 0;
        while (pZhskYInSuoK - 1 >= tjvqcErp5U) {
            if (!(pZhskYInSuoK - 1 != gh67Qox[tjvqcErp5U]) && GbJ02T3zDvK[tjvqcErp5U] == 0) {
                AR4Z1652i = 0;
                break;
            }
            tjvqcErp5U++;
        }
    }
    if (AR4Z1652i)
        ;
    else
        printf ("%d", tjvqcErp5U);
}

