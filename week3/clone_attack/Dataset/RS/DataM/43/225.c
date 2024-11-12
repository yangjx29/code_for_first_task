void  main () {
    int Shdj7mu (int UX83i9DA);
    int n, AJpsIRcyrj;
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
    scanf ("%d", &n);
    for (AJpsIRcyrj = 3; n / 2 >= AJpsIRcyrj; AJpsIRcyrj++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (Shdj7mu (AJpsIRcyrj) &&Shdj7mu(n - AJpsIRcyrj)) {
            printf ("%d %d\n", AJpsIRcyrj, n - AJpsIRcyrj);
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
            };
        };
    };
}

int Shdj7mu (int UX83i9DA) {
    int cs7mIb;
    for (cs7mIb = 2; sqrt (UX83i9DA) >= cs7mIb; cs7mIb++)
        if (UX83i9DA % cs7mIb == 0)
            break;
    if (cs7mIb > sqrt (UX83i9DA))
        return 1;
    else
        return 0;
}

