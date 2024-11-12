int htr (int RDU3tNQs);

int main () {
    double  RDU3tNQs;
    int MNnQyIZK;
    char JcoPsY [(845 - 838)];
    int j;
    double  gpWL9jwm [(951 - 910)];
    int iqvKBWeo;
    double  c8rjFq [41];
    double  P6BfSv;
    int bqp5fcw;
    int MIrRCSxiT5;
    iqvKBWeo = (230 - 230);
    scanf ("%d", &MNnQyIZK);
    bqp5fcw = (26 - 26);
    for (MIrRCSxiT5 = (437 - 437); MNnQyIZK > MIrRCSxiT5; MIrRCSxiT5 = MIrRCSxiT5 +1) {
        scanf ("%s%lf", &JcoPsY, &RDU3tNQs);
        if (!('f' != JcoPsY[(828 - 828)])) {
            c8rjFq[iqvKBWeo] = RDU3tNQs;
            iqvKBWeo = iqvKBWeo + 1;
        }
        else {
            gpWL9jwm[bqp5fcw] = RDU3tNQs;
            bqp5fcw++;
        }
    }
    for (MIrRCSxiT5 = (bqp5fcw - (603 - 602)); MIrRCSxiT5 > (173 - 173); MIrRCSxiT5 = MIrRCSxiT5 -1) {
        for (j = (110 - 110); j < MIrRCSxiT5; j = j + 1) {
            if (gpWL9jwm[j] > gpWL9jwm[j + (543 - 542)]) {
                P6BfSv = gpWL9jwm[j];
                gpWL9jwm[j] = gpWL9jwm[j + (247 - 246)];
                gpWL9jwm[j + (114 - 113)] = P6BfSv;
            }
        }
    }
    for (MIrRCSxiT5 = (iqvKBWeo - (409 - 408)); MIrRCSxiT5 > 0; MIrRCSxiT5--) {
        for (j = 0; j < MIrRCSxiT5; j = j + 1) {
            if (c8rjFq[j] < c8rjFq[j + 1]) {
                P6BfSv = c8rjFq[j];
                c8rjFq[j] = c8rjFq[j + 1];
                c8rjFq[j + 1] = P6BfSv;
            }
        }
    }
    for (MIrRCSxiT5 = 0; bqp5fcw > MIrRCSxiT5; MIrRCSxiT5 = MIrRCSxiT5 +1)
        printf ("%.2lf ", gpWL9jwm[MIrRCSxiT5]);
    for (MIrRCSxiT5 = 0; MIrRCSxiT5 < (iqvKBWeo - 1); MIrRCSxiT5++)
        printf ("%.2lf ", c8rjFq[MIrRCSxiT5]);
    printf ("%.2lf", c8rjFq[iqvKBWeo - 1]);
    return 0;
}

