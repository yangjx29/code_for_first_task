void  main () {
    int EfMuow4025F, RQS3hYb5d, j;
    float fIA6nEMSf;
    float e9ImK7u;
    float d6pJRFG0OW [(451 - 351)];
    unsigned  yqJHBE [100];
    unsigned  max;
    unsigned  Qyd1pSEGPb;
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
    scanf ("%d", &EfMuow4025F);
    for (RQS3hYb5d = (648 - 648); RQS3hYb5d < EfMuow4025F -(939 - 938); RQS3hYb5d = RQS3hYb5d +1)
        scanf ("%u ", &yqJHBE[RQS3hYb5d]);
    scanf ("%u", &yqJHBE[EfMuow4025F -1]);
    e9ImK7u = 0.0;
    {
        RQS3hYb5d = 922 - 922;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (RQS3hYb5d < EfMuow4025F) {
            e9ImK7u = e9ImK7u + yqJHBE[RQS3hYb5d];
            RQS3hYb5d = RQS3hYb5d +1;
        };
    }
    fIA6nEMSf = e9ImK7u / EfMuow4025F;
    max = yqJHBE[0];
    Qyd1pSEGPb = yqJHBE[0];
    for (RQS3hYb5d = 0; RQS3hYb5d < EfMuow4025F; RQS3hYb5d = RQS3hYb5d +1) {
        if (max < yqJHBE[RQS3hYb5d])
            max = yqJHBE[RQS3hYb5d];
        if (Qyd1pSEGPb > yqJHBE[RQS3hYb5d])
            Qyd1pSEGPb = yqJHBE[RQS3hYb5d];
    }
    if (max - fIA6nEMSf == fIA6nEMSf - Qyd1pSEGPb)
        printf ("%d,%d", Qyd1pSEGPb, max);
    else {
        if (max - fIA6nEMSf > fIA6nEMSf - Qyd1pSEGPb)
            printf ("%d", max);
        else
            printf ("%d", Qyd1pSEGPb);
    };
}

