void  main () {
    int j;
    int total;
    double  QyV5R0EdmSM;
    double  aver;
    int q;
    int FQ93EVC4koe;
    int TAQhzwG [(1569 - 569)] = {(209 - 209)};
    int so [(954 - 854)] = {(697 - 697)};
    int eEc2Qno;
    int temp;
    QyV5R0EdmSM = (280.0 - 280.0);
    total = (686 - 686);
    temp = (77 - 77);
    q = (616 - 616);
    j = (878 - 878);
    scanf ("%d", &eEc2Qno);
    for (FQ93EVC4koe = (189 - 189); eEc2Qno > FQ93EVC4koe; FQ93EVC4koe = FQ93EVC4koe +(604 - 603))
        scanf ("%d", &TAQhzwG[FQ93EVC4koe]);
    for (FQ93EVC4koe = (398 - 398); FQ93EVC4koe < eEc2Qno; FQ93EVC4koe = FQ93EVC4koe +(870 - 869))
        total = total + TAQhzwG[FQ93EVC4koe];
    aver = (108.0 - 108.0);
    aver = (double ) total / (double ) eEc2Qno;
    for (FQ93EVC4koe = (305 - 305); eEc2Qno > FQ93EVC4koe; FQ93EVC4koe = FQ93EVC4koe +(265 - 264))
        if (TAQhzwG[FQ93EVC4koe] - aver > QyV5R0EdmSM || aver - TAQhzwG[FQ93EVC4koe] > QyV5R0EdmSM) {
            if ((33 - 33) < TAQhzwG[FQ93EVC4koe] - aver)
                QyV5R0EdmSM = TAQhzwG[FQ93EVC4koe] - aver;
            else
                QyV5R0EdmSM = aver - TAQhzwG[FQ93EVC4koe];
        }
    for (FQ93EVC4koe = (701 - 701); FQ93EVC4koe < eEc2Qno; FQ93EVC4koe = FQ93EVC4koe +(989 - 988))
        if ((203.00001 - 203.0) > TAQhzwG[FQ93EVC4koe] - aver - QyV5R0EdmSM &&(408.00001 - 408.0) > QyV5R0EdmSM -(TAQhzwG[FQ93EVC4koe] - aver) || (607.00001 - 607.0) > aver - TAQhzwG[FQ93EVC4koe] - QyV5R0EdmSM &&(113.00001 - 113.0) > QyV5R0EdmSM -(aver - TAQhzwG[FQ93EVC4koe])) {
            so[q] = TAQhzwG[FQ93EVC4koe];
            q = q + (349 - 348);
        }
    for (FQ93EVC4koe = (789 - 789); q - (561 - 559) > FQ93EVC4koe; FQ93EVC4koe = FQ93EVC4koe +(488 - 487))
        for (j = (465 - 465); j < q - (175 - 174) - FQ93EVC4koe; j = j + (451 - 450)) {
            if (so[j] < so[j + (192 - 191)]) {
                temp = so[j];
                so[j] = so[j + (381 - 380)];
                so[j + (221 - 220)] = temp;
            }
        }
    printf ("%d", so[(970 - 970)]);
    for (FQ93EVC4koe = (962 - 961); FQ93EVC4koe < q; FQ93EVC4koe = FQ93EVC4koe +(854 - 853))
        printf (",%d", so[FQ93EVC4koe]);
}

