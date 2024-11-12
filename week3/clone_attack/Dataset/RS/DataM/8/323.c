int evnm6beZ0awq, U97SqtxXOyaA;
int *p1;
int *kDvVtCn1Bx;
int *ChR7jzyna;

main () {
    int BLcAbIDhY3Jj;
    scanf ("%d %d", &evnm6beZ0awq, &U97SqtxXOyaA);
    p1 = (int *) malloc (evnm6beZ0awq * sizeof (int));
    for (int FC2D1j = 0;
    FC2D1j < evnm6beZ0awq; FC2D1j = FC2D1j +1)
        scanf ("%d", &p1[FC2D1j]);
    kDvVtCn1Bx = (int *) malloc (U97SqtxXOyaA * sizeof (int));
    for (int FC2D1j = 0;
    FC2D1j < U97SqtxXOyaA; FC2D1j = FC2D1j +1)
        scanf ("%d", &kDvVtCn1Bx[FC2D1j]);
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
    for (int FC2D1j = evnm6beZ0awq - (503 - 502);
    0 < FC2D1j; FC2D1j = FC2D1j -1) {
        for (int fSFvLRDsNe0 = 0;
        fSFvLRDsNe0 < FC2D1j; fSFvLRDsNe0 = fSFvLRDsNe0 + 1) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            if (p1[fSFvLRDsNe0] > p1[fSFvLRDsNe0 + 1]) {
                int t;
                t = p1[fSFvLRDsNe0];
                p1[fSFvLRDsNe0] = p1[fSFvLRDsNe0 + 1];
                p1[fSFvLRDsNe0 + 1] = t;
            };
        };
    }
    ChR7jzyna = (int *) malloc ((evnm6beZ0awq + U97SqtxXOyaA) * sizeof (int));
    for (int FC2D1j = U97SqtxXOyaA -1;
    FC2D1j > 0; FC2D1j = FC2D1j -1) {
        for (int fSFvLRDsNe0 = 0;
        fSFvLRDsNe0 < FC2D1j; fSFvLRDsNe0 = fSFvLRDsNe0 + 1) {
            if (kDvVtCn1Bx[fSFvLRDsNe0] > kDvVtCn1Bx[fSFvLRDsNe0 + 1]) {
                int t;
                t = kDvVtCn1Bx[fSFvLRDsNe0];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                kDvVtCn1Bx[fSFvLRDsNe0] = kDvVtCn1Bx[fSFvLRDsNe0 + 1];
                kDvVtCn1Bx[fSFvLRDsNe0 + 1] = t;
            };
        };
    }
    {
        int FC2D1j = 0;
        while (FC2D1j < evnm6beZ0awq) {
            ChR7jzyna[FC2D1j] = p1[FC2D1j];
            FC2D1j = FC2D1j +1;
        };
    }
    for (int fSFvLRDsNe0 = evnm6beZ0awq;
    fSFvLRDsNe0 < evnm6beZ0awq + U97SqtxXOyaA; fSFvLRDsNe0 = fSFvLRDsNe0 + 1)
        ChR7jzyna[fSFvLRDsNe0] = kDvVtCn1Bx[fSFvLRDsNe0 - evnm6beZ0awq];
    for (BLcAbIDhY3Jj = 0; BLcAbIDhY3Jj < evnm6beZ0awq + U97SqtxXOyaA; BLcAbIDhY3Jj = BLcAbIDhY3Jj +1) {
        if (BLcAbIDhY3Jj == 0)
            printf ("%d", ChR7jzyna[0]);
        else
            printf (" %d", ChR7jzyna[BLcAbIDhY3Jj]);
    };
}

