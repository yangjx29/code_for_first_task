struct   CNeMl1A {
    char name [21];
    int s1;
    int s2;
    char nL04vSZqH6;
    char wgN2Ef80l4;
    int zb5aqoe;
    int gN42Vr5WA;
}
CNeMl1A [101];

int main (int W8LxGMyJqsmp, char *EAwdopPg []) {
    int n, kIn0iFD3sxdX, wtLcDbWY6, sum = 0, MJzGpLWjMdtX, max = 0, RqY1LfFiom;
    scanf ("%d", &n);
    for (kIn0iFD3sxdX = 1; n >= kIn0iFD3sxdX; kIn0iFD3sxdX++) {
        scanf ("%s %d %d %c %c %d", &CNeMl1A[kIn0iFD3sxdX].name, &CNeMl1A[kIn0iFD3sxdX].s1, &CNeMl1A[kIn0iFD3sxdX].s2, &CNeMl1A[kIn0iFD3sxdX].nL04vSZqH6, &CNeMl1A[kIn0iFD3sxdX].wgN2Ef80l4, &CNeMl1A[kIn0iFD3sxdX].zb5aqoe);
        CNeMl1A[kIn0iFD3sxdX].gN42Vr5WA = 0;
        if (CNeMl1A[kIn0iFD3sxdX].s1 > 80 && CNeMl1A[kIn0iFD3sxdX].zb5aqoe >= 1) {
            CNeMl1A[kIn0iFD3sxdX].gN42Vr5WA += 8000;
        }
        if (CNeMl1A[kIn0iFD3sxdX].s1 > 85 && CNeMl1A[kIn0iFD3sxdX].s2 > 80) {
            CNeMl1A[kIn0iFD3sxdX].gN42Vr5WA = CNeMl1A[kIn0iFD3sxdX].gN42Vr5WA + 4000;
        }
        if (CNeMl1A[kIn0iFD3sxdX].s1 > 90) {
            CNeMl1A[kIn0iFD3sxdX].gN42Vr5WA = CNeMl1A[kIn0iFD3sxdX].gN42Vr5WA + 2000;
        }
        if (CNeMl1A[kIn0iFD3sxdX].s1 > 85 && CNeMl1A[kIn0iFD3sxdX].wgN2Ef80l4 == 'Y') {
            CNeMl1A[kIn0iFD3sxdX].gN42Vr5WA = CNeMl1A[kIn0iFD3sxdX].gN42Vr5WA + 1000;
        }
        if (CNeMl1A[kIn0iFD3sxdX].s2 > 80 && CNeMl1A[kIn0iFD3sxdX].nL04vSZqH6 == 'Y') {
            CNeMl1A[kIn0iFD3sxdX].gN42Vr5WA += 850;
        }
        sum += CNeMl1A[kIn0iFD3sxdX].gN42Vr5WA;
        if (CNeMl1A[kIn0iFD3sxdX].gN42Vr5WA > max) {
            max = CNeMl1A[kIn0iFD3sxdX].gN42Vr5WA;
            RqY1LfFiom = kIn0iFD3sxdX;
        };
    }
    printf ("%s\n%d\n%d", CNeMl1A[RqY1LfFiom].name, CNeMl1A[RqY1LfFiom].gN42Vr5WA, sum);
    return 0;
}

