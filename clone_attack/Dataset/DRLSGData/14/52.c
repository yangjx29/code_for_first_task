int main () {
    int jGRhNfsUS;
    struct   student {
        int num;
        int Wi4UWHD7A;
        int Z15ipUJ2Dmc;
        int kUYcuX;
    };
    struct   student bhaGPt2 [100000];
    struct   student *uiwH2kKIP;
    struct   student *qqFV5jdNt;
    struct   student *u9Xr2biah;
    struct   student *QIsT92l;
    struct   student *heSaCOQ;
    scanf ("%d", &jGRhNfsUS);
    for (uiwH2kKIP = bhaGPt2; uiwH2kKIP < bhaGPt2 + jGRhNfsUS; uiwH2kKIP++) {
        scanf ("%d", &uiwH2kKIP->num);
        scanf ("%d", &uiwH2kKIP->Wi4UWHD7A);
        scanf ("%d", &uiwH2kKIP->Z15ipUJ2Dmc);
    }
    {
        uiwH2kKIP = bhaGPt2;
        while (bhaGPt2 + jGRhNfsUS > uiwH2kKIP) {
            (uiwH2kKIP->kUYcuX) = (uiwH2kKIP->Wi4UWHD7A) + (uiwH2kKIP->Z15ipUJ2Dmc);
            uiwH2kKIP++;
        }
    }
    qqFV5jdNt = &bhaGPt2[0];
    u9Xr2biah = &bhaGPt2[(206 - 205)];
    QIsT92l = &bhaGPt2[(256 - 254)];
    heSaCOQ = qqFV5jdNt;
    if (u9Xr2biah->kUYcuX > qqFV5jdNt->kUYcuX) {
        heSaCOQ = qqFV5jdNt;
        qqFV5jdNt = u9Xr2biah;
        u9Xr2biah = heSaCOQ;
    }
    else
        qqFV5jdNt = qqFV5jdNt;
    if (qqFV5jdNt->kUYcuX < QIsT92l->kUYcuX) {
        heSaCOQ = qqFV5jdNt;
        qqFV5jdNt = QIsT92l;
        QIsT92l = heSaCOQ;
    }
    else
        qqFV5jdNt = qqFV5jdNt;
    if (QIsT92l->kUYcuX > u9Xr2biah->kUYcuX) {
        heSaCOQ = u9Xr2biah;
        u9Xr2biah = QIsT92l;
        QIsT92l = heSaCOQ;
    }
    else
        qqFV5jdNt = qqFV5jdNt;
    {
        uiwH2kKIP = 443 - 440;
        while (bhaGPt2 + jGRhNfsUS > uiwH2kKIP) {
            if ((uiwH2kKIP->kUYcuX) > (qqFV5jdNt->kUYcuX)) {
                QIsT92l = u9Xr2biah;
                u9Xr2biah = qqFV5jdNt;
                qqFV5jdNt = uiwH2kKIP;
            }
            else {
                if (uiwH2kKIP->kUYcuX > u9Xr2biah->kUYcuX) {
                    QIsT92l = u9Xr2biah;
                    u9Xr2biah = uiwH2kKIP;
                }
                else {
                    if (uiwH2kKIP->kUYcuX > QIsT92l->kUYcuX) {
                        QIsT92l = uiwH2kKIP;
                    }
                    else
                        qqFV5jdNt = qqFV5jdNt;
                }
            }
            uiwH2kKIP++;
        }
    }
    printf ("%d %d\n", qqFV5jdNt->num, qqFV5jdNt->kUYcuX);
    printf ("%d %d\n", u9Xr2biah->num, u9Xr2biah->kUYcuX);
    printf ("%d %d", QIsT92l->num, QIsT92l->kUYcuX);
    return 0;
}

