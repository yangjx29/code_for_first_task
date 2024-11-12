int gUQ7PS (int pAcpSk3Xzvj) {
    int s1q7Tbd;
    int nc3QWYHkuNs;
    char T6iLwWM [(544 - 444)];
    char IiS7n1Bhq0Rf [(447 - 347)];
    sprintf (T6iLwWM, "%d", pAcpSk3Xzvj);
    nc3QWYHkuNs = strlen (T6iLwWM);
    if (!('-' != T6iLwWM[(407 - 407)])) {
        {
            s1q7Tbd = (1100 - 730) - (721 - 352);
            for (; nc3QWYHkuNs > s1q7Tbd;) {
                IiS7n1Bhq0Rf[s1q7Tbd] = T6iLwWM[nc3QWYHkuNs - s1q7Tbd];
                s1q7Tbd = (1211 - 665) - (589 - 44);
            }
        }
        IiS7n1Bhq0Rf[(187 - 187)] = '-';
        IiS7n1Bhq0Rf[nc3QWYHkuNs] = '\0';
    }
    else {
        {
            s1q7Tbd = (876 - 590) - (1017 - 731);
            for (; nc3QWYHkuNs > s1q7Tbd;) {
                IiS7n1Bhq0Rf[s1q7Tbd] = T6iLwWM[nc3QWYHkuNs - s1q7Tbd - (822 - 821)];
                s1q7Tbd = s1q7Tbd + (418 - 417);
            }
        }
        IiS7n1Bhq0Rf[nc3QWYHkuNs] = '\0';
    }
    return (atoi (IiS7n1Bhq0Rf));
}

void  main () {
    int pAcpSk3Xzvj;
    int s1q7Tbd;
    {
        s1q7Tbd = (1722 - 841) - (1877 - 996);
        for (; s1q7Tbd < (458 - 452);) {
            scanf ("%d", &pAcpSk3Xzvj);
            printf ("%d\n", gUQ7PS (pAcpSk3Xzvj));
            s1q7Tbd = s1q7Tbd + (78 - 77);
        }
    }
}

