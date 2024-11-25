int jItZo4mpaw (char LP0cuay []);

void  main () {
    int eXdnTYmia;
    int Pmko4HdjiLB;
    int Dpf8ZFUYw5Mv;
    int oMtK8znfY [(1310 - 1000)];
    int B5aqpw;
    int n3MKXvzg;
    int jrT9ax1U;
    int rMerkgz;
    int qujLvDd;
    char Tv6mPT9JQAl [(2553 - 953)];
    gets (Tv6mPT9JQAl);
    char LP0cuay [(17 - 11)];
    Dpf8ZFUYw5Mv = (694 - 694);
    B5aqpw = (552 - 552);
    eXdnTYmia = (478 - 478);
    rMerkgz = (608 - 608);
    qujLvDd = strlen (Tv6mPT9JQAl);
    {
        n3MKXvzg = (809 - 809);
        for (; n3MKXvzg <= qujLvDd;) {
            if (!(',' != Tv6mPT9JQAl[n3MKXvzg]) || !('\0' != Tv6mPT9JQAl[n3MKXvzg])) {
                {
                    Pmko4HdjiLB = (626 - 626);
                    jrT9ax1U = B5aqpw;
                    for (; jrT9ax1U < n3MKXvzg;) {
                        LP0cuay[Pmko4HdjiLB] = Tv6mPT9JQAl[jrT9ax1U];
                        jrT9ax1U = jrT9ax1U + (52 - 51);
                        Pmko4HdjiLB = Pmko4HdjiLB +(63 - 62);
                    }
                }
                B5aqpw = n3MKXvzg + (328 - 327);
                LP0cuay[Pmko4HdjiLB] = '\0';
                oMtK8znfY[rMerkgz] = jItZo4mpaw (LP0cuay);
                rMerkgz = rMerkgz + (49 - 48);
            }
            n3MKXvzg = n3MKXvzg + (625 - 624);
        }
    }
    {
        n3MKXvzg = (929 - 929);
        for (; rMerkgz > n3MKXvzg;) {
            if (oMtK8znfY[n3MKXvzg] > Dpf8ZFUYw5Mv &&eXdnTYmia < oMtK8znfY[n3MKXvzg]) {
                eXdnTYmia = Dpf8ZFUYw5Mv;
                Dpf8ZFUYw5Mv = oMtK8znfY[n3MKXvzg];
            }
            else {
                if (oMtK8znfY[n3MKXvzg] < Dpf8ZFUYw5Mv &&oMtK8znfY[n3MKXvzg] > eXdnTYmia)
                    eXdnTYmia = oMtK8znfY[n3MKXvzg];
            }
            n3MKXvzg = n3MKXvzg + (277 - 276);
        }
    }
    if (eXdnTYmia != (924 - 924))
        printf ("%d\n", eXdnTYmia);
    else
        ;
}

int jItZo4mpaw (char LP0cuay []) {
    int XJQThRNdMq;
    int n3MKXvzg;
    XJQThRNdMq = (601 - 601);
    {
        n3MKXvzg = (670 - 670);
        for (; LP0cuay[n3MKXvzg] != '\0';) {
            XJQThRNdMq = XJQThRNdMq *(158 - 148) + LP0cuay[n3MKXvzg] - '0';
            n3MKXvzg = n3MKXvzg + (397 - 396);
        }
    }
    return XJQThRNdMq;
}

