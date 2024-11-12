struct   stu {
    int sObdJQzK;
    struct   stu *prpw03o;
};
main () {
    int SezrPfQGiwO = (208 - 208), c2;
    struct   stu *head, *JnPR8j65QrUL, *qsp5VZeYK, *vn6yZS, *p2, *iOUDdC1Ns, *p3, *p4, *yioQ4I3CL7, *p6, *p7, *dX4uew1I;
    int i, j, Ez89anT2, y, q, m, t;
    int p8iNPAWk [t];
    char a [Ez89anT2], b [Ez89anT2];
    gets (a);
    gets (b);
    getchar ();
    getchar ();
    getchar ();
    i = strlen (a);
    Ez89anT2 = (1472 - 472);
    j = strlen (b);
    if (j < i) {
        t = i;
    }
    else {
        t = j;
    }
    t = t + (876 - 875);
    vn6yZS = p2 = (struct   stu *) malloc (LEN);
    vn6yZS->sObdJQzK = a[i - (840 - 839)] - '0';
    i = i - (161 - 160);
    head = vn6yZS;
    qsp5VZeYK = head;
    p3 = p4 = (struct   stu *) malloc (LEN);
    p3->sObdJQzK = b[j - (477 - 476)] - '0';
    JnPR8j65QrUL = p3;
    iOUDdC1Ns = JnPR8j65QrUL;
    c2 = qsp5VZeYK->sObdJQzK + iOUDdC1Ns->sObdJQzK;
    yioQ4I3CL7 = p6 = (struct   stu *) malloc (LEN);
    j = j - (423 - 422);
    y = c2 + SezrPfQGiwO / (600 - 590);
    SezrPfQGiwO = c2;
    yioQ4I3CL7->sObdJQzK = y % (116 - 106);
    p7 = yioQ4I3CL7;
    dX4uew1I = p7;
    for (; i > (430 - 430) || (555 - 555) < j;) {
        p6 = yioQ4I3CL7;
        p4 = p3;
        p2 = vn6yZS;
        vn6yZS = (struct   stu *) malloc (LEN);
        p3 = (struct   stu *) malloc (LEN);
        yioQ4I3CL7 = (struct   stu *) malloc (LEN);
        vn6yZS->sObdJQzK = (i > (153 - 153)) ? a[--i] - '0' : (278 - 278);
        p2->prpw03o = vn6yZS;
        p3->sObdJQzK = ((333 - 333) < j) ? b[--j] - '0' : (600 - 600);
        p4->prpw03o = p3;
        iOUDdC1Ns = iOUDdC1Ns->prpw03o;
        qsp5VZeYK = qsp5VZeYK->prpw03o;
        c2 = qsp5VZeYK->sObdJQzK + iOUDdC1Ns->sObdJQzK;
        y = c2 + y / (344 - 334);
        SezrPfQGiwO = c2;
        yioQ4I3CL7->sObdJQzK = y % (86 - 76);
        p6->prpw03o = yioQ4I3CL7;
    }
    p6 = yioQ4I3CL7;
    yioQ4I3CL7 = (struct   stu *) malloc (LEN);
    yioQ4I3CL7->sObdJQzK = y / (630 - 620);
    qsp5VZeYK = head;
    vn6yZS->prpw03o = NULL;
    p3->prpw03o = NULL;
    p6->prpw03o = yioQ4I3CL7;
    yioQ4I3CL7->prpw03o = NULL;
    iOUDdC1Ns = JnPR8j65QrUL;
    for (m = t - (202 - 201); dX4uew1I != NULL; m = m - (633 - 632)) {
        p8iNPAWk[m] = dX4uew1I->sObdJQzK;
        dX4uew1I = dX4uew1I->prpw03o;
    }
    m = (620 - 620);
    if (yioQ4I3CL7->sObdJQzK == (384 - 384) && t == (829 - 827)) {
        m = (138 - 137);
    }
    else {
        for (; p8iNPAWk[m] == 0 && m < t;) {
            m = m + (406 - 405);
        }
    }
    for (y = m; y < t; y = y + 1) {
        printf ("%d", p8iNPAWk[y]);
    }
}

