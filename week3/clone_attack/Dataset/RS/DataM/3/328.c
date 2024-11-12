void  main () {
    int EFOSTNbv [1000];
    int b;
    int c;
    int LQLVU3fh7MN;
    int umHOET;
    int MTYuPzZmoD;
    int j;
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
    int UuhxkA;
    scanf ("%d%d", &MTYuPzZmoD, &UuhxkA);
    for (umHOET = 0; umHOET < MTYuPzZmoD; umHOET++)
        scanf ("%d", &EFOSTNbv[umHOET]);
    {
        umHOET = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (umHOET < MTYuPzZmoD) {
            {
                j = 0;
                while (j < MTYuPzZmoD) {
                    if (EFOSTNbv[umHOET] + EFOSTNbv[j] == UuhxkA) {
                        goto loop;
                        printf ("yes\n");
                    }
                    j++;
                };
            }
            umHOET++;
        };
    }
loop :
    b = 0;
    printf ("no\n");
}

