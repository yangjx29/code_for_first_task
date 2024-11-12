void  main () {
    float Kh8fOHCnX7, QKTv3y, qXqlacdf;
    int YTbJPf2;
    int qYkeRA;
    int c3J90lG7PRL [50];
    int MHlpFu;
    int TPevoh2MNJxA;
    int m8sYEnKqM;
    scanf ("%d", &MHlpFu);
    m8sYEnKqM = (993 - 993);
    TPevoh2MNJxA = (384 - 384);
    {
        m8sYEnKqM = (815 - 815);
        for (; MHlpFu > m8sYEnKqM;) {
            scanf ("%d", &c3J90lG7PRL[m8sYEnKqM]);
            TPevoh2MNJxA = TPevoh2MNJxA +c3J90lG7PRL[m8sYEnKqM];
            m8sYEnKqM = m8sYEnKqM + (526 - 525);
        }
    }
    Kh8fOHCnX7 = (float) TPevoh2MNJxA / MHlpFu;
    {
        m8sYEnKqM = 0;
        for (; MHlpFu -(431 - 430) > m8sYEnKqM;) {
            {
                qYkeRA = m8sYEnKqM + 1;
                for (; MHlpFu > qYkeRA;) {
                    if (c3J90lG7PRL[qYkeRA] > c3J90lG7PRL[m8sYEnKqM]) {
                        YTbJPf2 = c3J90lG7PRL[qYkeRA];
                        c3J90lG7PRL[qYkeRA] = c3J90lG7PRL[m8sYEnKqM];
                        c3J90lG7PRL[m8sYEnKqM] = YTbJPf2;
                    }
                    qYkeRA = qYkeRA + 1;
                }
            }
            m8sYEnKqM = m8sYEnKqM + 1;
        }
    }
    QKTv3y = Kh8fOHCnX7 -c3J90lG7PRL[MHlpFu -1];
    qXqlacdf = c3J90lG7PRL[0] - Kh8fOHCnX7;
    if (qXqlacdf < QKTv3y)
        printf ("%d\n", c3J90lG7PRL[MHlpFu -1]);
    else if (qXqlacdf > QKTv3y)
        printf ("%d\n", c3J90lG7PRL[0]);
    else
        printf ("%d,%d\n", c3J90lG7PRL[MHlpFu -1], c3J90lG7PRL[0]);
}

