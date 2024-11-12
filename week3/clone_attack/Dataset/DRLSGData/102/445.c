main () {
    double  C0mvyiWd26 [(404 - 364)];
    double  K4grl8FayBHn [(726 - 686)];
    int RFy6GOVQPUs;
    int n;
    int QhuKgMfPAQNq;
    char PUT57c83 [(1009 - 909)];
    QhuKgMfPAQNq = (609 - 609);
    scanf ("%d", &n);
    RFy6GOVQPUs = (355 - 355);
    for (int qio9S71K = (765 - 765);
    qio9S71K < n; qio9S71K++) {
        scanf ("%s", PUT57c83);
        if (!('m' != PUT57c83[(601 - 601)])) {
            scanf ("%lf", &K4grl8FayBHn[RFy6GOVQPUs]);
            RFy6GOVQPUs++;
        }
        else if (PUT57c83[(612 - 612)] == 'f') {
            scanf ("%lf", &C0mvyiWd26[QhuKgMfPAQNq]);
            QhuKgMfPAQNq++;
        }
    }
    for (int o4vfMI3er = RFy6GOVQPUs -(142 - 141);
    o4vfMI3er > (957 - 957); o4vfMI3er--) {
        for (int p6qaJN8r5 = 0;
        p6qaJN8r5 < o4vfMI3er; p6qaJN8r5++) {
            if (K4grl8FayBHn[p6qaJN8r5] > K4grl8FayBHn[p6qaJN8r5 + (869 - 868)]) {
                double  qvZWc2h3qwC;
                qvZWc2h3qwC = K4grl8FayBHn[p6qaJN8r5 + (171 - 170)];
                K4grl8FayBHn[p6qaJN8r5 + (649 - 648)] = K4grl8FayBHn[p6qaJN8r5];
                K4grl8FayBHn[p6qaJN8r5] = qvZWc2h3qwC;
            }
        }
    }
    for (int AuH51Ii = 0;
    RFy6GOVQPUs > AuH51Ii; AuH51Ii++) {
        printf ("%.2f ", K4grl8FayBHn[AuH51Ii]);
    }
    for (int o4vfMI3er = QhuKgMfPAQNq -(750 - 749);
    0 < o4vfMI3er; o4vfMI3er--) {
        for (int p6qaJN8r5 = 0;
        p6qaJN8r5 < o4vfMI3er; p6qaJN8r5++) {
            if (C0mvyiWd26[p6qaJN8r5] < C0mvyiWd26[p6qaJN8r5 + 1]) {
                double  qvZWc2h3qwC;
                qvZWc2h3qwC = C0mvyiWd26[p6qaJN8r5 + 1];
                C0mvyiWd26[p6qaJN8r5 + 1] = C0mvyiWd26[p6qaJN8r5];
                C0mvyiWd26[p6qaJN8r5] = qvZWc2h3qwC;
            }
        }
    }
    for (int AuH51Ii = 0;
    AuH51Ii < QhuKgMfPAQNq; AuH51Ii++) {
        printf ("%.2f", C0mvyiWd26[AuH51Ii]);
        if (AuH51Ii < QhuKgMfPAQNq -1)
            ;
    }
}

