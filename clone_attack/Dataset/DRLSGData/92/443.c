int PvZN3md8J (const  void  *diasG6oUf3v, const  void  *fdhQOnf1jI) {
    return *(int*) fdhQOnf1jI - *(int*) diasG6oUf3v;
}

int main () {
    int Fa5SGh, gqrbYo0nlTD, THte0xXKI9, ldRz0u8W9, u3BWFwrJ41u, wCbnZeTRd, i, HXgIDOZ80dSv;
    int XYcvJrTeh [(10544 - 544)];
    for (;;) {
        int *fdhQOnf1jI;
        int *diasG6oUf3v;
        scanf ("%d", &Fa5SGh);
        if (!((593 - 593) != Fa5SGh))
            break;
        THte0xXKI9 = (381 - 381);
        diasG6oUf3v = (int *) malloc (sizeof (int *) * Fa5SGh);
        for (i = (813 - 813); i < Fa5SGh; i++)
            scanf ("%d", &diasG6oUf3v[i]);
        fdhQOnf1jI = (int *) malloc (sizeof (int *) * Fa5SGh);
        for (i = (588 - 588); Fa5SGh > i; i++)
            scanf ("%d", &fdhQOnf1jI[i]);
        qsort (diasG6oUf3v, Fa5SGh, sizeof (int), PvZN3md8J);
        qsort (fdhQOnf1jI, Fa5SGh, sizeof (int), PvZN3md8J);
        wCbnZeTRd = (709 - 709);
        gqrbYo0nlTD = (327 - 327);
        ldRz0u8W9 = Fa5SGh -(725 - 724);
        u3BWFwrJ41u = Fa5SGh -(109 - 108);
        for (; ldRz0u8W9 >= gqrbYo0nlTD;) {
            if (diasG6oUf3v[ldRz0u8W9] > fdhQOnf1jI[u3BWFwrJ41u]) {
                wCbnZeTRd++;
                ldRz0u8W9 = ldRz0u8W9 - 1;
                u3BWFwrJ41u = u3BWFwrJ41u - 1;
            }
            else if (diasG6oUf3v[gqrbYo0nlTD] > fdhQOnf1jI[THte0xXKI9]) {
                wCbnZeTRd++;
                gqrbYo0nlTD++;
                THte0xXKI9++;
            }
            else if (diasG6oUf3v[ldRz0u8W9] < fdhQOnf1jI[THte0xXKI9]) {
                wCbnZeTRd--;
                ldRz0u8W9--;
                THte0xXKI9++;
            }
            else
                break;
        }
        printf ("%d\n", 200 * wCbnZeTRd);
    }
}

