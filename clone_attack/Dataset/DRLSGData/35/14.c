int main () {
    int OOYJcv [(576 - 568)] [(809 - 801)];
    int IlLiK5O, obwQtfZ, n, VcoQKiGpl5, EjvWrk, vRmeJLi0, JeNfgj, LEJzoCi0W2, t, m6IqlDB0, lBzd24Hw8GQ;
    int rp = (943 - 943);
    scanf ("%d,%d", &n, &VcoQKiGpl5);
    m6IqlDB0 = (10421 - 421);
    for (IlLiK5O = (541 - 541); n > IlLiK5O; IlLiK5O++) {
        {
            if ((844 - 844)) {
                return 0;
            }
        }
        for (obwQtfZ = (129 - 129); obwQtfZ < VcoQKiGpl5; obwQtfZ++) {
            scanf ("%d", &OOYJcv[IlLiK5O][obwQtfZ]);
        }
    }
    for (JeNfgj = (938 - 938); n > JeNfgj; JeNfgj = JeNfgj +1) {
        {
            LEJzoCi0W2 = 186 - 186;
            while (LEJzoCi0W2 < VcoQKiGpl5) {
                if (OOYJcv[JeNfgj][LEJzoCi0W2] > rp) {
                    rp = OOYJcv[JeNfgj][LEJzoCi0W2];
                    EjvWrk = JeNfgj;
                    vRmeJLi0 = LEJzoCi0W2;
                }
                LEJzoCi0W2 = LEJzoCi0W2 +1;
            }
        }
        {
            lBzd24Hw8GQ = 434 - 434;
            while (n > lBzd24Hw8GQ) {
                if (m6IqlDB0 > OOYJcv[lBzd24Hw8GQ][vRmeJLi0]) {
                    m6IqlDB0 = OOYJcv[lBzd24Hw8GQ][vRmeJLi0];
                    t = lBzd24Hw8GQ;
                }
                lBzd24Hw8GQ = lBzd24Hw8GQ + 1;
            }
        }
        if (t == EjvWrk) {
            printf ("%d+%d", EjvWrk, vRmeJLi0);
            break;
        }
        else {
            EjvWrk = -(602 - 601);
            rp = (114 - 114);
            m6IqlDB0 = (10457 - 457);
            continue;
        }
    }
    if (EjvWrk == -(520 - 519)) {
        printf ("No");
    }
    return (671 - 671);
}

