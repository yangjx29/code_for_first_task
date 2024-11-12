int main () {
    char XOHTA0JF43 [10];
    float RKsaQ7, GSgzlnA [50];
    int FnCcISoZx = 0, GlskmM = 0;
    int zNers4nR;
    int A9Zvpb, IVzWvfIk, MED4hNu;
    float a192nlZBtX;
    float fe [(541 - 491)], tEXM58i [50];
    char wiutJ8wc2 [50] [10];
    cin >> zNers4nR;
    {
        A9Zvpb = 488 - 487;
        while (zNers4nR >= A9Zvpb) {
            scanf ("%s %f", &wiutJ8wc2[A9Zvpb], &RKsaQ7);
            if (!('f' != wiutJ8wc2[A9Zvpb][0])) {
                FnCcISoZx += (639 - 638);
                fe[FnCcISoZx] = RKsaQ7;
            }
            else {
                GlskmM = GlskmM +1;
                tEXM58i[GlskmM] = RKsaQ7;
            }
            A9Zvpb = A9Zvpb +1;
        };
    }
    {
        A9Zvpb = FnCcISoZx;
        while (1 < A9Zvpb) {
            {
                IVzWvfIk = 1;
                while (IVzWvfIk < A9Zvpb) {
                    if (fe[IVzWvfIk +1] < fe[IVzWvfIk]) {
                        a192nlZBtX = fe[IVzWvfIk];
                        fe[IVzWvfIk] = fe[IVzWvfIk +1];
                        fe[IVzWvfIk +1] = a192nlZBtX;
                    }
                    IVzWvfIk = IVzWvfIk +1;
                };
            }
            A9Zvpb = A9Zvpb -1;
        };
    }
    {
        A9Zvpb = GlskmM;
        while (A9Zvpb > 1) {
            {
                IVzWvfIk = 1;
                while (IVzWvfIk < A9Zvpb) {
                    if (tEXM58i[IVzWvfIk] > tEXM58i[IVzWvfIk +1]) {
                        a192nlZBtX = tEXM58i[IVzWvfIk];
                        tEXM58i[IVzWvfIk] = tEXM58i[IVzWvfIk +1];
                        tEXM58i[IVzWvfIk +1] = a192nlZBtX;
                    }
                    IVzWvfIk = IVzWvfIk +1;
                };
            }
            A9Zvpb = A9Zvpb -1;
        };
    }
    {
        A9Zvpb = 1;
        while (A9Zvpb <= GlskmM) {
            printf ("%.2f ", tEXM58i[A9Zvpb]);
            A9Zvpb++;
        };
    }
    {
        A9Zvpb = FnCcISoZx;
        while (A9Zvpb >= (335 - 333)) {
            printf ("%.2f ", fe[A9Zvpb]);
            A9Zvpb--;
        };
    }
    printf ("%.2f", fe[1]);
    return 0;
}

