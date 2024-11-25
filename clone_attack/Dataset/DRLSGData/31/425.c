struct   student {
    char num [(318 - 298)];
    char nWK2h7qJu [(575 - 555)];
    char Ji0zZUoDM4mc;
    int JyMmbR51E7;
    char jzNt7s1aQI [(73 - 63)];
    char N9qzW4FUwdI [(947 - 917)];
    struct   student *KTrDxAi;
}
*UorlJygRALjF, *qxFBPq8pk1t;

struct   student *K4zPCK6 (void ) {
    char KmTbyvpaF [(331 - 231)] = {(795 - 795)};
    struct   student *Q2ZDlqcpRzJ = NULL;
    for (; gets (KmTbyvpaF);) {
        if (!((800 - 800) != strcmp (KmTbyvpaF, "end")))
            break;
        UorlJygRALjF = (struct   student *) malloc (sizeof (struct   student));
        sscanf (KmTbyvpaF, "%s%s %c %d %s%s", UorlJygRALjF->num, UorlJygRALjF->nWK2h7qJu, &UorlJygRALjF->Ji0zZUoDM4mc, &UorlJygRALjF->JyMmbR51E7, UorlJygRALjF->jzNt7s1aQI, UorlJygRALjF->N9qzW4FUwdI);
        if (!(NULL != Q2ZDlqcpRzJ)) {
            Q2ZDlqcpRzJ = UorlJygRALjF, qxFBPq8pk1t = UorlJygRALjF;
        }
        else {
            qxFBPq8pk1t->KTrDxAi = UorlJygRALjF;
            qxFBPq8pk1t = UorlJygRALjF;
            qxFBPq8pk1t->KTrDxAi = NULL;
        }
    }
    return (Q2ZDlqcpRzJ);
}

struct   student *yQ78KV (struct   student *Q2ZDlqcpRzJ) {
    struct   student *wOhQjMgSLk;
    struct   student *k3MLno8 = NULL;
    do {
        qxFBPq8pk1t = NULL;
        UorlJygRALjF = Q2ZDlqcpRzJ;
        for (; UorlJygRALjF->KTrDxAi != NULL;)
            qxFBPq8pk1t = UorlJygRALjF, UorlJygRALjF = UorlJygRALjF->KTrDxAi;
        if (!(NULL != k3MLno8))
            k3MLno8 = UorlJygRALjF, wOhQjMgSLk = k3MLno8->KTrDxAi = qxFBPq8pk1t;
        wOhQjMgSLk = wOhQjMgSLk->KTrDxAi = qxFBPq8pk1t;
        qxFBPq8pk1t->KTrDxAi = NULL;
    }
    while (Q2ZDlqcpRzJ->KTrDxAi != NULL);
    return (k3MLno8);
}

void  wLHOh38scVi (struct   student *nISw8Po1h) {
    for (UorlJygRALjF = nISw8Po1h; UorlJygRALjF != NULL; UorlJygRALjF = UorlJygRALjF->KTrDxAi)
        printf ("%s %s %c %d %s %s\n", UorlJygRALjF->num, UorlJygRALjF->nWK2h7qJu, UorlJygRALjF->Ji0zZUoDM4mc, UorlJygRALjF->JyMmbR51E7, UorlJygRALjF->jzNt7s1aQI, UorlJygRALjF->N9qzW4FUwdI);
}

int main () {
    struct   student *Q2ZDlqcpRzJ;
    wLHOh38scVi (Q2ZDlqcpRzJ);
    Q2ZDlqcpRzJ = K4zPCK6 ();
    Q2ZDlqcpRzJ = yQ78KV (Q2ZDlqcpRzJ);
    return (680 - 680);
}

