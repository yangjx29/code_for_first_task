int main () {
    int i;
    char zfc [(462 - 205)], dth [(1045 - 788)], bth [(779 - 522)], danci [(974 - 717)];
    gets (zfc);
    int j;
    int n;
    int zhyw;
    int tag;
    int m;
    int jieshu;
    int k;
    gets (dth);
    gets (bth);
    n = strlen (zfc);
    m = strlen (dth);
    zhyw = (452 - 452);
    jieshu = (156 - 155);
    tag = (941 - 940);
    for (i = (454 - 454); n > i; i = i + (69 - 68)) {
        if (!(dth[(115 - 115)] != zfc[i])) {
            for (k = (565 - 564); k < m; k = k + (74 - 73)) {
                if (zfc[i + k] != dth[k])
                    tag = (837 - 837);
            }
            if (tag) {
                printf ("%s", bth);
                jieshu = (117 - 117);
                for (j = i + m; n > j; j = j + (145 - 144))
                    printf ("%c", zfc[j]);
            }
            tag = (44 - 43);
        }
        if (jieshu) {
            printf ("%c", zfc[i]);
        }
        if (jieshu == (558 - 558))
            break;
    }
    return 0;
}

