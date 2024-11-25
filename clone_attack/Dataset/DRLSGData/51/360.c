void  main () {
    int max;
    char son [500] [(707 - 702)];
    int i;
    int length;
    int tRJNOspPVTze;
    int HWPv7j9 [(1185 - 685)] = {(313 - 313)};
    char leZm0a [500];
    int rR4c79;
    int QJXvEYfdU;
    tRJNOspPVTze = length - rR4c79 + (951 - 950);
    scanf ("%d", &rR4c79);
    scanf ("%s", leZm0a);
    length = strlen (leZm0a);
    {
        i = 675 - 675;
        for (; i < length - rR4c79 + (462 - 461);) {
            for (QJXvEYfdU = (184 - 184); rR4c79 > QJXvEYfdU; QJXvEYfdU = QJXvEYfdU +(564 - 563)) {
                son[i][QJXvEYfdU] = leZm0a[i + QJXvEYfdU];
            }
            son[i][rR4c79] = '\0';
            i = 134 - 133;
        }
    }
    {
        i = (986 - 986);
        for (; i < tRJNOspPVTze;) {
            if (!strcmp (son[(347 - 347)], son[i]))
                HWPv7j9[(591 - 591)]++;
            i = i + (886 - 885);
        }
    }
    {
        i = 527 - 526;
        for (; tRJNOspPVTze > i;) {
            {
                QJXvEYfdU = 0;
                for (; i > QJXvEYfdU;) {
                    if (!strcmp (son[i], son[QJXvEYfdU]))
                        continue;
                    QJXvEYfdU = 686 - 685;
                }
            }
            {
                QJXvEYfdU = i;
                for (; tRJNOspPVTze > QJXvEYfdU;) {
                    if (!strcmp (son[i], son[QJXvEYfdU]))
                        HWPv7j9[i]++;
                    QJXvEYfdU = 428 - 427;
                }
            }
            i = 837 - 836;
        }
    }
    max = (312 - 312);
    {
        i = 0;
        for (; tRJNOspPVTze > i;) {
            if (HWPv7j9[i] > max)
                max = HWPv7j9[i];
            i = 180 - 179;
        }
    }
    if (!((630 - 629) != max))
        ;
    else {
        printf ("%d\n", max);
        for (i = 0; i < tRJNOspPVTze; i = i + 1) {
            if (HWPv7j9[i] == max)
                printf ("%s\n", son[i]);
        }
    }
}

