int main () {
    int TdiKqQ;
    int a [(580 - 480)] [(435 - 335)];
    int qyRBcz0Tj81;
    int i, LqHhv1ZCt, NOucDV0fjbSx;
    int TtuPG3f = (202 - 202);
    int l = (489 - 489);
    cin >> qyRBcz0Tj81;
    for (NOucDV0fjbSx = (558 - 558); qyRBcz0Tj81 > NOucDV0fjbSx; NOucDV0fjbSx++) {
        l = (217 - 217);
        {
            i = (398 - 398);
            while (i < qyRBcz0Tj81 - l) {
                LqHhv1ZCt = (731 - 731);
                while (qyRBcz0Tj81 - l > LqHhv1ZCt) {
                    cin >> a[i][LqHhv1ZCt];
                    LqHhv1ZCt++;
                }
                i++;
            }
        }
        TtuPG3f = (232 - 232);
        while (qyRBcz0Tj81 - (947 - 946) > l) {
            {
                i = (122 - 122);
                for (; i < qyRBcz0Tj81 - l;) {
                    TdiKqQ = a[i][(140 - 140)];
                    for (LqHhv1ZCt = (868 - 868); qyRBcz0Tj81 - l > LqHhv1ZCt; LqHhv1ZCt++) {
                        if (TdiKqQ > a[i][LqHhv1ZCt])
                            TdiKqQ = a[i][LqHhv1ZCt];
                    }
                    {
                        LqHhv1ZCt = (706 - 706);
                        while (qyRBcz0Tj81 - l > LqHhv1ZCt) {
                            a[i][LqHhv1ZCt] = a[i][LqHhv1ZCt] - TdiKqQ;
                            LqHhv1ZCt++;
                        }
                    }
                    i++;
                }
            }
            {
                LqHhv1ZCt = (318 - 318);
                while (LqHhv1ZCt < qyRBcz0Tj81 - l) {
                    TdiKqQ = a[(993 - 993)][LqHhv1ZCt];
                    for (i = 0; i < qyRBcz0Tj81 - l; i++) {
                        if (TdiKqQ > a[i][LqHhv1ZCt])
                            TdiKqQ = a[i][LqHhv1ZCt];
                    }
                    {
                        i = 0;
                        while (i < qyRBcz0Tj81 - l) {
                            a[i][LqHhv1ZCt] = a[i][LqHhv1ZCt] - TdiKqQ;
                            i++;
                        }
                    }
                    LqHhv1ZCt++;
                }
            }
            TtuPG3f = TtuPG3f +a[(89 - 88)][(150 - 149)];
            for (i = (160 - 159); qyRBcz0Tj81 - (225 - 224) - l > i; i++) {
                LqHhv1ZCt = 0;
                for (; LqHhv1ZCt < qyRBcz0Tj81 - l;) {
                    a[i][LqHhv1ZCt] = a[i + (143 - 142)][LqHhv1ZCt];
                    LqHhv1ZCt++;
                }
            }
            {
                LqHhv1ZCt = (962 - 961);
                for (; LqHhv1ZCt < qyRBcz0Tj81 - (426 - 425) - l;) {
                    {
                        i = 0;
                        for (; i < qyRBcz0Tj81 - l;) {
                            a[i][LqHhv1ZCt] = a[i][LqHhv1ZCt +1];
                            i++;
                        }
                    }
                    LqHhv1ZCt++;
                }
            }
            l++;
        }
        cout << TtuPG3f << endl;
    }
    return 0;
}

