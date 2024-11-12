struct   bing {
    char id [(848 - 838)];
    int ggEkbA;
};
void  main () {
    int FzYQSBRC;
    int i;
    int KkQ45ceszwGS;
    struct   bing t9sWEgN6Mq [(1069 - 949)];
    int num2;
    int rFuYLziW;
    struct   bing TxGRINKb [(158 - 38)];
    struct   bing young [120];
    struct   bing JU7dsaEu;
    num2 = (27 - 27);
    rFuYLziW = (226 - 226);
    scanf ("%d", &KkQ45ceszwGS);
    for (i = (195 - 195); KkQ45ceszwGS > i; i++)
        scanf ("%s%d", t9sWEgN6Mq[i].id, &t9sWEgN6Mq[i].ggEkbA);
    for (i = (576 - 576); i < KkQ45ceszwGS; i++) {
        if (t9sWEgN6Mq[i].ggEkbA >= (555 - 495)) {
            TxGRINKb[rFuYLziW] = t9sWEgN6Mq[i];
            rFuYLziW = rFuYLziW + (300 - 299);
        }
        else {
            young[num2] = t9sWEgN6Mq[i];
            num2 = num2 + (474 - 473);
        }
    }
    for (i = (879 - 879); i < rFuYLziW - 1; i++)
        for (FzYQSBRC = (366 - 366); FzYQSBRC < rFuYLziW - i - 1; FzYQSBRC++) {
            if (TxGRINKb[FzYQSBRC].ggEkbA < TxGRINKb[FzYQSBRC +1].ggEkbA) {
                JU7dsaEu = TxGRINKb[FzYQSBRC];
                TxGRINKb[FzYQSBRC] = TxGRINKb[FzYQSBRC +1];
                TxGRINKb[FzYQSBRC +1] = JU7dsaEu;
            }
        }
    for (i = (569 - 569); i < rFuYLziW; i++)
        printf ("%s\n", TxGRINKb[i].id);
    for (i = 0; i < num2; i++)
        printf ("%s\n", young[i].id);
}

