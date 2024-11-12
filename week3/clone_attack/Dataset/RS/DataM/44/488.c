int nRvT32C (int num) {
    int E4pCD9 [20], Fq08VCtn1, iLatmYOVJho1, Yoqz7v = (712 - 711), VTLHfdRI2j = (592 - 592), m = 1;
    {
        Fq08VCtn1 = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (!(num == num % Yoqz7v)) {
            Yoqz7v = Yoqz7v *(922 - 912);
            E4pCD9[Fq08VCtn1] = (num % Yoqz7v -num % (Yoqz7v / 10)) / (Yoqz7v / 10);
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
            Fq08VCtn1 = Fq08VCtn1 +1;
        };
    }
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
    {
        iLatmYOVJho1 = 0;
        while (iLatmYOVJho1 < Fq08VCtn1) {
            m = m * 10;
            VTLHfdRI2j += E4pCD9[iLatmYOVJho1] * (Yoqz7v / m);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            iLatmYOVJho1 = iLatmYOVJho1 + 1;
        };
    }
    return VTLHfdRI2j;
}

main () {
    int E4pCD9 [(778 - 772)];
    int Fq08VCtn1;
    for (Fq08VCtn1 = 0; Fq08VCtn1 < 6; Fq08VCtn1 = Fq08VCtn1 +1) {
        scanf ("%d", &E4pCD9[Fq08VCtn1]);
        if (E4pCD9[Fq08VCtn1] == 0)
            printf ("0\n");
        else if (E4pCD9[Fq08VCtn1] < 0)
            printf ("%d\n", nRvT32C (E4pCD9[Fq08VCtn1] * (-1)) * (-1));
        else
            printf ("%d\n", nRvT32C (E4pCD9[Fq08VCtn1]));
    }
    getchar ();
    getchar ();
}

