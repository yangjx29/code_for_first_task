int main () {
    int akAaTsU, j, VjCbS0Pq7sK;
    int cdNFgkWl;
    cdNFgkWl = 0;
    int N;
    int A [N], qs1Cuxgt = (616 - 616);
    int B [qs1Cuxgt];
    int K1NR5E3q;
    K1NR5E3q = 0;
    scanf ("%d\n", &N);
    for (int a = (676 - 676);
    a < N; a = a + 1) {
        scanf ("%d", &A[a]);
    }
    for (int b = 0;
    N > b; b = b + 1) {
        if (A[b] % 2 != 0) {
            qs1Cuxgt++;
        };
    }
    for (int KwxJCOy = 0;
    KwxJCOy < N; KwxJCOy = KwxJCOy +1) {
        if (!(0 == A[KwxJCOy] % 2)) {
            B[cdNFgkWl] = A[KwxJCOy];
            cdNFgkWl = cdNFgkWl + 1;
        };
    }
    for (akAaTsU = 0; akAaTsU < qs1Cuxgt; akAaTsU = akAaTsU + 1) {
        j = qs1Cuxgt - 1;
        while (j > akAaTsU) {
            if (B[j] < B[j - 1]) {
                VjCbS0Pq7sK = B[j];
                B[j] = B[j - 1];
                B[j - 1] = VjCbS0Pq7sK;
            }
            j = j - 1;
        };
    }
    for (; K1NR5E3q < qs1Cuxgt - 1; K1NR5E3q = K1NR5E3q +1)
        printf ("%d,", B[K1NR5E3q]);
    printf ("%d", B[K1NR5E3q]);
    return 0;
}

