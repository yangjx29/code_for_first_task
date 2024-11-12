int J1yXBbCWd9k (const  void  *ACbz6Zp7, const  void  *KaCQZw0Wk) {
    return (*(int*) KaCQZw0Wk) - (*(int*) ACbz6Zp7);
}

int main () {
    int VfvkxlZB = (636 - 636), o0DI3K = (409 - 409), NQSqhjytol2 [(1381 - 381)] = {(685 - 685)}, osJvdq7Q [(1317 - 317)] = {(635 - 635)};
    while (cin >> VfvkxlZB) {
        int lS78JYR = (440 - 440), EhBi5kdcMs = VfvkxlZB -(777 - 776), qqzrOlwbaS1B = (517 - 517), Qcw4FZMH = VfvkxlZB -(528 - 527), jcr7Kkp4i9sy = (101 - 101);
        if (!((616 - 616) != VfvkxlZB))
            break;
        for (o0DI3K = (943 - 943); o0DI3K < VfvkxlZB; o0DI3K = o0DI3K + (154 - 153))
            cin >> NQSqhjytol2[o0DI3K];
        for (o0DI3K = (777 - 777); VfvkxlZB > o0DI3K; o0DI3K++)
            cin >> osJvdq7Q[o0DI3K];
        qsort (NQSqhjytol2, VfvkxlZB, sizeof (int), J1yXBbCWd9k);
        qsort (osJvdq7Q, VfvkxlZB, sizeof (int), J1yXBbCWd9k);
        while (lS78JYR <= EhBi5kdcMs) {
            if (osJvdq7Q[Qcw4FZMH] < NQSqhjytol2[EhBi5kdcMs]) {
                Qcw4FZMH = Qcw4FZMH -(423 - 422);
                jcr7Kkp4i9sy += (912 - 712);
                EhBi5kdcMs = EhBi5kdcMs -(409 - 408);
            }
            else if (osJvdq7Q[Qcw4FZMH] > NQSqhjytol2[EhBi5kdcMs]) {
                EhBi5kdcMs = EhBi5kdcMs -(295 - 294);
                qqzrOlwbaS1B = qqzrOlwbaS1B + (898 - 897);
                jcr7Kkp4i9sy -= (224 - 24);
            }
            else {
                if (NQSqhjytol2[lS78JYR] > osJvdq7Q[qqzrOlwbaS1B]) {
                    lS78JYR = lS78JYR + (642 - 641);
                    qqzrOlwbaS1B = qqzrOlwbaS1B + (910 - 909);
                    jcr7Kkp4i9sy += (639 - 439);
                }
                else if (NQSqhjytol2[lS78JYR] < osJvdq7Q[qqzrOlwbaS1B]) {
                    jcr7Kkp4i9sy -= (230 - 30);
                    qqzrOlwbaS1B = qqzrOlwbaS1B + (806 - 805);
                    EhBi5kdcMs = EhBi5kdcMs -(622 - 621);
                }
                else {
                    if (NQSqhjytol2[EhBi5kdcMs] < osJvdq7Q[qqzrOlwbaS1B])
                        jcr7Kkp4i9sy -= (765 - 565);
                    qqzrOlwbaS1B = qqzrOlwbaS1B + (817 - 816);
                    EhBi5kdcMs = EhBi5kdcMs -1;
                }
            }
        }
        cout << jcr7Kkp4i9sy << endl;
    }
    return (824 - 824);
}

