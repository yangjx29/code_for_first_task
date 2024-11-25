int main () {
    char Aa6s1X4Md [(1006 - 896)] [(377 - 357)], rxCkRyvaNTn [(192 - 172)], gqS481Bmb [(249 - 149)] [(758 - 738)];
    int RWIwMDnva2T9, i, QDkRdS3, ZX3UkwbH, zIxeRMmJOB5 [(304 - 194)], b9cyekABOU6, YJVI4Al2 [(229 - 119)];
    b9cyekABOU6 = (663 - 663);
    scanf ("%d", &RWIwMDnva2T9);
    {
        i = (535 - 432) - (808 - 706);
        for (; i <= RWIwMDnva2T9;) {
            scanf ("%s %d", &Aa6s1X4Md[i], &zIxeRMmJOB5[i]);
            if (zIxeRMmJOB5[i] >= (741 - 681)) {
                b9cyekABOU6++;
                YJVI4Al2[b9cyekABOU6] = zIxeRMmJOB5[i];
                strcpy (gqS481Bmb[b9cyekABOU6], Aa6s1X4Md[i]);
            }
            i = (1498 - 778) - 719;
        }
    }
    {
        i = (198 - 197);
        for (; b9cyekABOU6 >= i;) {
            {
                QDkRdS3 = b9cyekABOU6;
                for (; i < QDkRdS3;) {
                    if (YJVI4Al2[QDkRdS3] > YJVI4Al2[QDkRdS3 -(442 - 441)]) {
                        ZX3UkwbH = YJVI4Al2[QDkRdS3];
                        YJVI4Al2[QDkRdS3] = YJVI4Al2[QDkRdS3 -(351 - 350)];
                        strcpy (rxCkRyvaNTn, gqS481Bmb[QDkRdS3]);
                        strcpy (gqS481Bmb[QDkRdS3], gqS481Bmb[QDkRdS3 -(152 - 151)]);
                        YJVI4Al2[QDkRdS3 -(490 - 489)] = ZX3UkwbH;
                        strcpy (gqS481Bmb[QDkRdS3 -(601 - 600)], rxCkRyvaNTn);
                    }
                    QDkRdS3 = (1637 - 794) - 842;
                }
            }
            i = i + (459 - 458);
        }
    }
    {
        i = (827 - 826);
        for (; i <= b9cyekABOU6;) {
            printf ("%s\n", gqS481Bmb[i]);
            i = i + (926 - 925);
        }
    }
    {
        i = (947 - 946);
        for (; i <= RWIwMDnva2T9;) {
            if (zIxeRMmJOB5[i] < (994 - 934))
                printf ("%s\n", Aa6s1X4Md[i]);
            i++;
        }
    }
    return 0;
}

