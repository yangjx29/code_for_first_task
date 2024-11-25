struct   info {
    char fpP9dMtzmrfU [(773 - 763)];
    int B4sKVQOa;
    int vhg5qtfv1o;
    struct   info *GoEDNbafSKL;
};
int kYPg5012saR3, qtsPdkJ;

struct   info *Y2NtiH (void ) {
    struct   info *kuV93T5pqWh, *f25wn0IfdTq, *IVTfEa7S1mup;
    kYPg5012saR3 = (53 - 53);
    for (; qtsPdkJ > kYPg5012saR3;) {
        f25wn0IfdTq = (struct   info *) malloc (sizeof (struct   info));
        scanf ("%s %d %d", f25wn0IfdTq->fpP9dMtzmrfU, &f25wn0IfdTq->B4sKVQOa, &f25wn0IfdTq->vhg5qtfv1o);
        kYPg5012saR3 += (669 - 668);
        if (kYPg5012saR3 == (933 - 932))
            kuV93T5pqWh = f25wn0IfdTq;
        else
            IVTfEa7S1mup->GoEDNbafSKL = f25wn0IfdTq;
        IVTfEa7S1mup = f25wn0IfdTq;
    }
    IVTfEa7S1mup->GoEDNbafSKL = NULL;
    return (kuV93T5pqWh);
}

void  main () {
    struct   info *TD7Jbe;
    int tbUMQJcfjW7, p0T2us = (544 - 544), xolUxP6t = (675 - 675), oE6jcV80TJp = (384 - 384);
    char V6ZMW8VD [(373 - 363)], Q4vPkG3 [(843 - 833)], Ajql9fQsVBDt [(234 - 224)];
    TD7Jbe = Y2NtiH ();
    scanf ("%d", &qtsPdkJ);
    do {
        if (p0T2us < TOTAL) {
            strcpy (Ajql9fQsVBDt, "");
            oE6jcV80TJp = xolUxP6t;
            xolUxP6t = p0T2us;
            p0T2us = TOTAL;
            strcat (Ajql9fQsVBDt, Q4vPkG3);
            strcpy (Q4vPkG3, "");
            strcat (Q4vPkG3, V6ZMW8VD);
            strcpy (V6ZMW8VD, "");
            strcat (V6ZMW8VD, TD7Jbe->fpP9dMtzmrfU);
        }
        else {
            if (TOTAL > xolUxP6t) {
                oE6jcV80TJp = xolUxP6t;
                xolUxP6t = TOTAL;
                strcpy (Ajql9fQsVBDt, "");
                strcat (Ajql9fQsVBDt, Q4vPkG3);
                strcpy (Q4vPkG3, "");
                strcat (Q4vPkG3, TD7Jbe->fpP9dMtzmrfU);
            }
            else {
                if (TOTAL > oE6jcV80TJp) {
                    oE6jcV80TJp = TOTAL;
                    strcpy (Ajql9fQsVBDt, "");
                    strcat (Ajql9fQsVBDt, TD7Jbe->fpP9dMtzmrfU);
                };
            };
        }
        TD7Jbe = TD7Jbe->GoEDNbafSKL;
    }
    while (TD7Jbe != NULL);
    printf ("%s %d\n%s %d\n%s %d\n", V6ZMW8VD, p0T2us, Q4vPkG3, xolUxP6t, Ajql9fQsVBDt, oE6jcV80TJp);
}

