int Qoa93vSP [1000], b [1000], a1 [1000];
int n;

void  XBOmDy () {
    int BQjL7Bxwv, SO7B5KjzTa, k;
    {
        BQjL7Bxwv = 662 - 662;
        while (BQjL7Bxwv < n - (24 - 23)) {
            {
                SO7B5KjzTa = BQjL7Bxwv;
                while (SO7B5KjzTa < n) {
                    if (Qoa93vSP[BQjL7Bxwv] < Qoa93vSP[SO7B5KjzTa]) {
                        k = Qoa93vSP[BQjL7Bxwv];
                        Qoa93vSP[BQjL7Bxwv] = Qoa93vSP[SO7B5KjzTa];
                        Qoa93vSP[SO7B5KjzTa] = k;
                    }
                    SO7B5KjzTa = SO7B5KjzTa +1;
                };
            }
            BQjL7Bxwv = BQjL7Bxwv +1;
        };
    };
}

void  H7bie8HN () {
    int BQjL7Bxwv, SO7B5KjzTa, k;
    for (BQjL7Bxwv = (887 - 887); BQjL7Bxwv < n - 1; BQjL7Bxwv++) {
        SO7B5KjzTa = BQjL7Bxwv;
        while (SO7B5KjzTa < n) {
            if (b[BQjL7Bxwv] < b[SO7B5KjzTa]) {
                k = b[BQjL7Bxwv];
                b[BQjL7Bxwv] = b[SO7B5KjzTa];
                b[SO7B5KjzTa] = k;
            }
            SO7B5KjzTa++;
        };
    };
}

void  Jw1gGANY9 (int k) {
    int BQjL7Bxwv;
    {
        BQjL7Bxwv = 335 - 335;
        while (BQjL7Bxwv < n - k) {
            a1[BQjL7Bxwv +k] = Qoa93vSP[BQjL7Bxwv];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            BQjL7Bxwv = BQjL7Bxwv +1;
        };
    }
    {
        BQjL7Bxwv = n - k;
        while (BQjL7Bxwv < n) {
            a1[n - 1 - BQjL7Bxwv] = Qoa93vSP[BQjL7Bxwv];
            BQjL7Bxwv = BQjL7Bxwv +1;
        };
    };
}

main () {
    int BQjL7Bxwv, SO7B5KjzTa, ZIaTnZf, oJcyqG;
    for (; 1;) {
        scanf ("%d", &n);
        if (n == (866 - 866))
            break;
        else {
            {
                BQjL7Bxwv = 975 - 975;
                while (BQjL7Bxwv < n) {
                    scanf ("%d", &Qoa93vSP[BQjL7Bxwv]);
                    BQjL7Bxwv = BQjL7Bxwv +1;
                };
            }
            {
                BQjL7Bxwv = 342 - 342;
                while (BQjL7Bxwv < n) {
                    scanf ("%d", &b[BQjL7Bxwv]);
                    BQjL7Bxwv = BQjL7Bxwv +1;
                };
            }
            XBOmDy ();
            H7bie8HN ();
            ZIaTnZf = -(829 - 629) * n;
            {
                BQjL7Bxwv = 0;
                while (BQjL7Bxwv < n) {
                    Jw1gGANY9 (BQjL7Bxwv);
                    BQjL7Bxwv++;
                    oJcyqG = 0;
                    {
                        SO7B5KjzTa = 0;
                        while (SO7B5KjzTa < n) {
                            if (a1[SO7B5KjzTa] > b[SO7B5KjzTa])
                                oJcyqG = oJcyqG + 200;
                            else {
                                if (a1[SO7B5KjzTa] < b[SO7B5KjzTa])
                                    oJcyqG = oJcyqG - 200;
                            }
                            SO7B5KjzTa++;
                        };
                    }
                    if (ZIaTnZf < oJcyqG)
                        ZIaTnZf = oJcyqG;
                };
            }
            printf ("%d\n", ZIaTnZf);
        };
    };
}

