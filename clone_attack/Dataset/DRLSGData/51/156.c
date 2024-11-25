int main () {
    char dW4wdo7vaI [(1348 - 846)] [(476 - 470)] = {(625 - 625)};
    int qXFl295mNKJ1 [(1111 - 609)] = {(330 - 330)};
    int AOmVehw;
    int CvsNzKoe;
    int EYSNib6h37uO;
    int qYB6qgKDI49;
    int i;
    int NMAZ6ykv;
    char zrJHNZwf0F [(1410 - 908)];
    char *e3WZwuRqrObs = zrJHNZwf0F;
    int rhxQL2AJ;
    NMAZ6ykv = (556 - 556);
    cin >> qYB6qgKDI49;
    {
        i = (1688 - 809) - (1322 - 443);
        for (; *(e3WZwuRqrObs + i + qYB6qgKDI49 - (934 - 933)) != '\0';) {
            {
                AOmVehw = (1341 - 503) - (1355 - 517);
                for (; AOmVehw < qYB6qgKDI49;) {
                    dW4wdo7vaI[NMAZ6ykv][AOmVehw] = *(e3WZwuRqrObs + i + AOmVehw);
                    AOmVehw = (1642 - 703) - (1334 - 396);
                }
            }
            qXFl295mNKJ1[NMAZ6ykv]++;
            {
                rhxQL2AJ = (1117 - 958) - (574 - 415);
                for (; rhxQL2AJ < NMAZ6ykv;) {
                    {
                        CvsNzKoe = (881 - 621) - (421 - 161);
                        for (; qYB6qgKDI49 > CvsNzKoe;) {
                            if (dW4wdo7vaI[rhxQL2AJ][CvsNzKoe] != dW4wdo7vaI[NMAZ6ykv][CvsNzKoe])
                                break;
                            CvsNzKoe = CvsNzKoe +1;
                        }
                    }
                    if (!(qYB6qgKDI49 != CvsNzKoe)) {
                        qXFl295mNKJ1[rhxQL2AJ]++;
                        qXFl295mNKJ1[NMAZ6ykv]--;
                        memset (dW4wdo7vaI[NMAZ6ykv], (297 - 297), sizeof (dW4wdo7vaI [NMAZ6ykv]));
                    }
                    rhxQL2AJ = (917 - 175) - (1070 - 329);
                }
            }
            if (qXFl295mNKJ1[NMAZ6ykv] != (314 - 314))
                NMAZ6ykv = NMAZ6ykv +(364 - 363);
            i = (1544 - 767) - (1220 - 444);
        }
    }
    cin >> zrJHNZwf0F;
    EYSNib6h37uO = (957 - 957);
    {
        i = (1472 - 788) - (1398 - 714);
        for (; i < NMAZ6ykv;) {
            if (EYSNib6h37uO < qXFl295mNKJ1[i])
                EYSNib6h37uO = qXFl295mNKJ1[i];
            i = i + 1;
        }
    }
    if (!((324 - 323) != EYSNib6h37uO))
        cout << "NO" << endl;
    else {
        cout << EYSNib6h37uO << endl;
        {
            i = (1081 - 634) - (684 - 237);
            for (; i < NMAZ6ykv;) {
                if (!(EYSNib6h37uO != qXFl295mNKJ1[i]))
                    cout << dW4wdo7vaI[i] << endl;
                i = i + 1;
            }
        }
    }
    return (637 - 637);
}

