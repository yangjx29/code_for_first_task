int main () {
    int MCbKYQrPMd, THjS2bEB, E6yenK, QDuS3c = 0;
    int *Uyfn6xq8A = (int *) malloc (THjS2bEB * sizeof (int));
    int *nzhrpjl9ULkO = (int *) malloc (THjS2bEB * sizeof (int));
    scanf ("%d", &THjS2bEB);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    scanf ("%d", &Uyfn6xq8A[0]);
    {
        E6yenK = 48 - 47;
        while (THjS2bEB > E6yenK) {
            scanf (" %d", &Uyfn6xq8A[E6yenK]);
            E6yenK = E6yenK +1;
        };
    }
    {
        E6yenK = 0;
        while (E6yenK < THjS2bEB) {
            nzhrpjl9ULkO[E6yenK] = (558 - 557);
            E6yenK++;
        };
    }
    for (E6yenK = THjS2bEB -(123 - 121); E6yenK >= 0; E6yenK--) {
        MCbKYQrPMd = E6yenK +1;
        while (THjS2bEB > MCbKYQrPMd) {
            if (Uyfn6xq8A[E6yenK] >= Uyfn6xq8A[MCbKYQrPMd] && nzhrpjl9ULkO[MCbKYQrPMd] >= nzhrpjl9ULkO[E6yenK])
                nzhrpjl9ULkO[E6yenK] = nzhrpjl9ULkO[MCbKYQrPMd] + 1;
            MCbKYQrPMd++;
        };
    }
    for (E6yenK = 0; E6yenK < THjS2bEB; E6yenK++)
        if (nzhrpjl9ULkO[E6yenK] > QDuS3c)
            QDuS3c = nzhrpjl9ULkO[E6yenK];
    printf ("%d", QDuS3c);
}

