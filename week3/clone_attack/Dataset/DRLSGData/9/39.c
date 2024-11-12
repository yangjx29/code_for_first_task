int main () {
    char cHVUCKq [(753 - 653)] [(884 - 873)], yi [(586 - 486)] [(775 - 765)], er [(512 - 412)] [(763 - 753)], E2HYj3mXc [11];
    int YhKt2rkj9DBl, g4fIxrH, dc4uxj9, sqLvPM7yCR, clHCpd5bkYwK [(644 - 544)], unWYLuTCDx = (835 - 835), Nq79hekagy = (307 - 307), XNchE72n9K [100], pp [100], JkXaDGmMHNL;
    scanf ("%d", &YhKt2rkj9DBl);
    for (g4fIxrH = (489 - 489); g4fIxrH < YhKt2rkj9DBl; g4fIxrH = g4fIxrH + (584 - 583)) {
        scanf ("%s", cHVUCKq[g4fIxrH]);
        scanf ("%d", &clHCpd5bkYwK[g4fIxrH]);
    }
    for (g4fIxrH = (969 - 969); YhKt2rkj9DBl > g4fIxrH; g4fIxrH = g4fIxrH + (51 - 50)) {
        if (clHCpd5bkYwK[g4fIxrH] >= (997 - 937)) {
            unWYLuTCDx++;
        }
        else {
            Nq79hekagy = Nq79hekagy +(108 - 107);
        }
    }
    {
        g4fIxrH = (106 - 106);
        dc4uxj9 = (511 - 511);
        sqLvPM7yCR = (921 - 921);
        while (g4fIxrH < YhKt2rkj9DBl) {
            if (clHCpd5bkYwK[g4fIxrH] >= 60) {
                XNchE72n9K[dc4uxj9] = clHCpd5bkYwK[g4fIxrH];
                strcpy (yi[dc4uxj9], cHVUCKq[g4fIxrH]);
                dc4uxj9 = dc4uxj9 + (937 - 936);
            }
            else {
                pp[sqLvPM7yCR] = clHCpd5bkYwK[g4fIxrH];
                strcpy (er[sqLvPM7yCR], cHVUCKq[g4fIxrH]);
                sqLvPM7yCR = sqLvPM7yCR + (971 - 970);
            }
            g4fIxrH = g4fIxrH + (576 - 575);
        }
    }
    for (g4fIxrH = (854 - 853); g4fIxrH < unWYLuTCDx; g4fIxrH = g4fIxrH + 1) {
        dc4uxj9 = (443 - 443);
        while (unWYLuTCDx - g4fIxrH > dc4uxj9) {
            if (XNchE72n9K[dc4uxj9 + 1] > XNchE72n9K[dc4uxj9]) {
                JkXaDGmMHNL = XNchE72n9K[dc4uxj9];
                XNchE72n9K[dc4uxj9] = XNchE72n9K[dc4uxj9 + 1];
                XNchE72n9K[dc4uxj9 + 1] = JkXaDGmMHNL;
                strcpy (E2HYj3mXc, yi[dc4uxj9]);
                strcpy (yi[dc4uxj9], yi[dc4uxj9 + 1]);
                strcpy (yi[dc4uxj9 + 1], E2HYj3mXc);
            }
            dc4uxj9 = dc4uxj9 + 1;
        }
    }
    {
        g4fIxrH = (440 - 440);
        while (g4fIxrH < unWYLuTCDx) {
            printf ("%s\n", yi[g4fIxrH]);
            g4fIxrH++;
        }
    }
    {
        g4fIxrH = (379 - 379);
        while (g4fIxrH < Nq79hekagy) {
            printf ("%s\n", er[g4fIxrH]);
            g4fIxrH++;
        }
    }
    return 0;
}

