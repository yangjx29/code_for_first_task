int main () {
    int wa6KjbV;
    int VGnx4c1;
    struct   old {
        char AwmCe4W [10];
        int jE3S1Fw;
    };
    struct   old Aqz3sdPXlh8Y [(440 - 340)];
    struct   old m6BYRGjJ7 [(856 - 756)];
    struct   old ADJfPW [100];
    struct   old t;
    int vtLTiW5nf;
    int iKc3f0azYvi;
    int KUInkx7rlzJ [100] = {(74 - 74)};
    int YNkThmI;
    int tsO0bjwQA;
    int l1FTzWxMQ;
    int Y49HtI1s;
    vtLTiW5nf = 0;
    scanf ("%d", &wa6KjbV);
    Y49HtI1s = (394 - 394);
    l1FTzWxMQ = 0;
    tsO0bjwQA = (480 - 480);
    VGnx4c1 = 0;
    for (iKc3f0azYvi = 0; wa6KjbV > iKc3f0azYvi; iKc3f0azYvi = iKc3f0azYvi + 1) {
        scanf ("%s", Aqz3sdPXlh8Y[iKc3f0azYvi].AwmCe4W);
        scanf ("%d", &Aqz3sdPXlh8Y[iKc3f0azYvi].jE3S1Fw);
        if (Aqz3sdPXlh8Y[iKc3f0azYvi].jE3S1Fw >= 60) {
            m6BYRGjJ7[tsO0bjwQA] = Aqz3sdPXlh8Y[iKc3f0azYvi];
            tsO0bjwQA = tsO0bjwQA + 1;
            vtLTiW5nf++;
        }
        else {
            VGnx4c1 = VGnx4c1 +1;
            ADJfPW[l1FTzWxMQ] = Aqz3sdPXlh8Y[iKc3f0azYvi];
            l1FTzWxMQ++;
        };
    }
    for (iKc3f0azYvi = 0; iKc3f0azYvi < vtLTiW5nf; iKc3f0azYvi = iKc3f0azYvi + 1) {
        YNkThmI = 0;
        for (tsO0bjwQA = 0; vtLTiW5nf > tsO0bjwQA; tsO0bjwQA++) {
            if (m6BYRGjJ7[tsO0bjwQA].jE3S1Fw > YNkThmI &&KUInkx7rlzJ[tsO0bjwQA] == 0) {
                YNkThmI = m6BYRGjJ7[tsO0bjwQA].jE3S1Fw;
                Y49HtI1s = tsO0bjwQA;
            };
        }
        printf ("%s\n", m6BYRGjJ7[Y49HtI1s].AwmCe4W);
        KUInkx7rlzJ[Y49HtI1s] = 1;
    }
    for (iKc3f0azYvi = 0; iKc3f0azYvi < VGnx4c1; iKc3f0azYvi++) {
        printf ("%s\n", ADJfPW[iKc3f0azYvi].AwmCe4W);
    }
    return 0;
}

