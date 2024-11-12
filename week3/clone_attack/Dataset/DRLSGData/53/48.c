void  main () {
    int ucZMqdERVChH;
    int JO0Zz9D [300];
    int SYrhgAzD;
    int m;
    int KEsH4RvcUou8;
    int QpMHCcQF [300];
    m = 0;
    scanf ("%d", &ucZMqdERVChH);
    for (SYrhgAzD = 0; ucZMqdERVChH > SYrhgAzD; SYrhgAzD++)
        scanf ("%d", &QpMHCcQF[SYrhgAzD]);
    for (SYrhgAzD = 0; SYrhgAzD < ucZMqdERVChH; SYrhgAzD++) {
        for (KEsH4RvcUou8 = SYrhgAzD -1; KEsH4RvcUou8 >= 0 && (QpMHCcQF[SYrhgAzD] != QpMHCcQF[KEsH4RvcUou8]); KEsH4RvcUou8--)
            ;
        if (KEsH4RvcUou8 < 0)
            JO0Zz9D[m++] = QpMHCcQF[SYrhgAzD];
    }
    for (SYrhgAzD = 0; m > SYrhgAzD; SYrhgAzD++) {
        printf ("%d", JO0Zz9D[SYrhgAzD]);
        if (SYrhgAzD != m - 1)
            ;
    }
}

