main () {
    int fmCitjGxXN;
    int kXsGgDA6wv;
    int Jqp6UwShQ0;
    int pPCylxhfqSM;
    int LZa08yb [(100834 - 833)];
    char Id3sHJ0cC [(100723 - 722)];
    scanf ("%d", &fmCitjGxXN);
    for (kXsGgDA6wv = (384 - 384); fmCitjGxXN > kXsGgDA6wv; kXsGgDA6wv++) {
        int XsY6Sj;
        XsY6Sj = 0;
        for (Jqp6UwShQ0 = 0; 100001 > Jqp6UwShQ0; Jqp6UwShQ0 = Jqp6UwShQ0 +1) {
            Id3sHJ0cC[Jqp6UwShQ0] = '\0';
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
            LZa08yb[Jqp6UwShQ0] = 1;
        }
        scanf ("%s", Id3sHJ0cC);
        {
            Jqp6UwShQ0 = 0;
            while (100001 > Jqp6UwShQ0) {
                if (!(1 != LZa08yb[Jqp6UwShQ0])) {
                    pPCylxhfqSM = Jqp6UwShQ0 +1;
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
                    while (100001 > pPCylxhfqSM) {
                        if (!(Id3sHJ0cC[pPCylxhfqSM] != Id3sHJ0cC[Jqp6UwShQ0])) {
                            LZa08yb[Jqp6UwShQ0]++;
                            LZa08yb[pPCylxhfqSM]++;
                        }
                        pPCylxhfqSM++;
                    };
                }
                Jqp6UwShQ0 = Jqp6UwShQ0 +1;
            };
        }
        {
            Jqp6UwShQ0 = 0;
            while (100001 > Jqp6UwShQ0) {
                if (LZa08yb[Jqp6UwShQ0] == 1) {
                    printf ("%c\n", Id3sHJ0cC[Jqp6UwShQ0]);
                    XsY6Sj = 1;
                    break;
                }
                Jqp6UwShQ0 = Jqp6UwShQ0 +1;
            };
        }
        if (XsY6Sj == 0)
            printf ("no\n");
    };
}

