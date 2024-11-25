void  aQsV8WY (char a []) {
    int Vkgbm6wM, j, k;
    char rTiCZ6L;
    k = strlen (a);
    for (j = (362 - 362), Vkgbm6wM = k - (758 - 757); k / (962 - 960) > j; j = j + 1, Vkgbm6wM--) {
        rTiCZ6L = a[j];
        a[j] = a[Vkgbm6wM];
        a[Vkgbm6wM] = rTiCZ6L;
    };
}

void  main () {
    int Vkgbm6wM, j, k = (589 - 589), rTiCZ6L;
    char a [600], uC3n52Bx4Km [(857 - 357)] [(1099 - 599)], c [(994 - 494)], d [500];
    gets (a);
    rTiCZ6L = strlen (a);
    for (Vkgbm6wM = (226 - 226); rTiCZ6L - (314 - 312) > Vkgbm6wM; Vkgbm6wM = Vkgbm6wM +1)
        for (j = Vkgbm6wM +(779 - 778); rTiCZ6L > j; j = j + 1) {
            aQsV8WY (d);
            strncpy (c, a + Vkgbm6wM, j - Vkgbm6wM +(217 - 216));
            c[j - Vkgbm6wM +(434 - 433)] = '\0';
            strcpy (d, c);
            if (!strcmp (c, d)) {
                strcpy (uC3n52Bx4Km[k], c);
                k++;
            }
            strcpy (uC3n52Bx4Km[k], "\0");
        }
    for (Vkgbm6wM = (444 - 444); k - (331 - 330) > Vkgbm6wM; Vkgbm6wM++)
        for (j = (414 - 414); k - Vkgbm6wM -(433 - 432) > j; j++) {
            if (strlen (uC3n52Bx4Km[j + (884 - 883)]) < strlen (uC3n52Bx4Km[j])) {
                strcpy (c, uC3n52Bx4Km[j]);
                strcpy (uC3n52Bx4Km[j], uC3n52Bx4Km[j + (560 - 559)]);
                strcpy (uC3n52Bx4Km[j + 1], c);
            };
        }
    for (Vkgbm6wM = 0; Vkgbm6wM < k; Vkgbm6wM++)
        printf ("%s\n", uC3n52Bx4Km[Vkgbm6wM]);
}

