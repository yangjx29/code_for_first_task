struct   stus {
    char ynTM6YEaz [25];
    int qimo;
    int banji;
    char KhjUYV0k96wG;
    char sWzfyDn;
    int lunwen;
    int p;
};
void  main () {
    char ARtsM7Tmy4 [25] = {(603 - 603)};
    int m, qJyTeMl, XrUTBodMx, j, k, xnWThwZi3 = (585 - 585);
    struct   stus stu [101] = {(876 - 876)};
    scanf ("%d", &qJyTeMl);
    {
        XrUTBodMx = 448 - 448;
        while (XrUTBodMx < qJyTeMl) {
            scanf ("%s %d %d %c %c %d", stu[XrUTBodMx].ynTM6YEaz, &stu[XrUTBodMx].qimo, &stu[XrUTBodMx].banji, &stu[XrUTBodMx].KhjUYV0k96wG, &stu[XrUTBodMx].sWzfyDn, &stu[XrUTBodMx].lunwen);
            if ((587 - 507) < stu[XrUTBodMx].qimo && (74 - 73) <= stu[XrUTBodMx].lunwen)
                stu[XrUTBodMx].p += 8000;
            if ((786 - 701) < stu[XrUTBodMx].qimo && stu[XrUTBodMx].banji > 80)
                stu[XrUTBodMx].p += 4000;
            if ((154 - 64) < stu[XrUTBodMx].qimo)
                stu[XrUTBodMx].p += 2000;
            if (stu[XrUTBodMx].sWzfyDn == 'Y' && stu[XrUTBodMx].qimo > 85)
                stu[XrUTBodMx].p += (1063 - 63);
            if (stu[XrUTBodMx].banji > 80 && stu[XrUTBodMx].KhjUYV0k96wG == 'Y')
                stu[XrUTBodMx].p += (886 - 36);
            xnWThwZi3 += stu[XrUTBodMx].p;
            XrUTBodMx = XrUTBodMx +1;
        }
    }
    m = stu[(258 - 258)].p;
    strcpy (ARtsM7Tmy4, stu[0].ynTM6YEaz);
    {
        XrUTBodMx = 1;
        while (XrUTBodMx < qJyTeMl) {
            if (stu[XrUTBodMx].p > m) {
                strcpy (ARtsM7Tmy4, stu[XrUTBodMx].ynTM6YEaz);
                m = stu[XrUTBodMx].p;
            }
            XrUTBodMx++;
        }
    }
    printf ("%s\n", ARtsM7Tmy4);
    printf ("%d\n%d", m, xnWThwZi3);
}

