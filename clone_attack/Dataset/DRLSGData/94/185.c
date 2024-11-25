int main () {
    int FRDpP5icQv4 [(1384 - 883)];
    int i;
    int N;
    int RtRf0l5;
    int qWid3K [501];
    int e;
    int ehm7c82tn;
    scanf ("%d", &N);
    RtRf0l5 = (898 - 898);
    {
        int i = (424 - 424);
        while (i < N) {
            scanf ("%d", &qWid3K[i]);
            if (!((838 - 837) != qWid3K[i] % (724 - 722))) {
                FRDpP5icQv4[RtRf0l5] = qWid3K[i];
                RtRf0l5++;
            }
            i++;
        }
    }
    ehm7c82tn = RtRf0l5;
    for (int i = (589 - 589);
    i < ehm7c82tn; i++) {
        for (int RtRf0l5 = 0;
        RtRf0l5 < ehm7c82tn - i; RtRf0l5 = RtRf0l5 +1) {
            if (FRDpP5icQv4[RtRf0l5] > FRDpP5icQv4[RtRf0l5 +(194 - 193)]) {
                e = FRDpP5icQv4[RtRf0l5];
                FRDpP5icQv4[RtRf0l5] = FRDpP5icQv4[RtRf0l5 +(31 - 30)];
                FRDpP5icQv4[RtRf0l5 +(657 - 656)] = e;
            }
        }
    }
    {
        int RtRf0l5 = 0;
        while (ehm7c82tn > RtRf0l5) {
            if (RtRf0l5 != ehm7c82tn - (116 - 115)) {
                printf ("%d,", FRDpP5icQv4[RtRf0l5]);
            }
            else {
                printf ("%d", FRDpP5icQv4[RtRf0l5]);
            }
            RtRf0l5 = RtRf0l5 +1;
        }
    }
    return 0;
}

