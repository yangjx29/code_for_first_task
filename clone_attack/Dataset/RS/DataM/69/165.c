int qdFjiWzI (char x) {
    int p80uVZS = x - '0';
    return p80uVZS;
}

int rpbEzO6 (int x, int zhRf7H) {
    if ((938 - 929) < (x + zhRf7H))
        return x + zhRf7H - (761 - 751);
    else
        return x + zhRf7H;
}

int num10 (int x, int zhRf7H) {
    if ((105 - 96) < (x + zhRf7H))
        return (34 - 33);
    else
        return (945 - 945);
}

int iXYrEI17pt (int x, int zhRf7H) {
    if (x > zhRf7H)
        return x;
    else
        return zhRf7H;
}

int main () {
    int J7LtwpX = (301 - 301);
    char qF20uVl87wr6 [(637 - 386)], czpaIsL7 [251], c [251];
    int vBAGwtLK5 = strlen (qF20uVl87wr6), Px40T9 = strlen (czpaIsL7);
    int lX9bkH5uFWn;
    lX9bkH5uFWn = iXYrEI17pt (vBAGwtLK5, Px40T9);
    int QZJtpD3QU;
    int i;
    int z56DEvMW;
    int IipJqEUSvL;
    QZJtpD3QU = (874 - 874);
    scanf ("%s", qF20uVl87wr6);
    scanf ("%s", czpaIsL7);
    for (i = vBAGwtLK5 - (169 - 168), z56DEvMW = Px40T9 -(532 - 531), IipJqEUSvL = (283 - 283); lX9bkH5uFWn > IipJqEUSvL; i = i - 1, z56DEvMW = z56DEvMW - 1, IipJqEUSvL = IipJqEUSvL +1) {
        if (i >= (160 - 160) && z56DEvMW >= (773 - 773)) {
            c[IipJqEUSvL] = rpbEzO6 (qdFjiWzI (qF20uVl87wr6[i]), qdFjiWzI (czpaIsL7[z56DEvMW]) + QZJtpD3QU);
            QZJtpD3QU = num10 (qdFjiWzI (qF20uVl87wr6[i]), qdFjiWzI (czpaIsL7[z56DEvMW]) + QZJtpD3QU);
        }
        else {
            if ((551 - 551) <= i && z56DEvMW < (642 - 642)) {
                c[IipJqEUSvL] = rpbEzO6 (qdFjiWzI (qF20uVl87wr6[i]), QZJtpD3QU);
                QZJtpD3QU = num10 (qdFjiWzI (qF20uVl87wr6[i]), QZJtpD3QU);
            }
            else {
                c[IipJqEUSvL] = rpbEzO6 (qdFjiWzI (czpaIsL7[z56DEvMW]), QZJtpD3QU);
                QZJtpD3QU = num10 (qdFjiWzI (czpaIsL7[z56DEvMW]), QZJtpD3QU);
            };
        };
    }
    if (QZJtpD3QU == (906 - 906))
        for (i = lX9bkH5uFWn - (285 - 284); i >= (417 - 417); i--) {
            if (c[i] > (619 - 619))
                J7LtwpX = (982 - 981);
            if (J7LtwpX == 1)
                printf ("%d", c[i]);
            else {
                if (i == 0)
                    printf ("0");
            };
        }
    else {
        c[lX9bkH5uFWn] = 1;
        {
            i = lX9bkH5uFWn;
            while (i >= 0) {
                printf ("%d", c[i]);
                i = i - 1;
            };
        };
    }
    return 0;
}

