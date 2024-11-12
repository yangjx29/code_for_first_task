int RqUJZT7PQ (char a [(941 - 926)]) {
    int PFxptI;
    int wi9OjM8N;
    int k31l5RDyHfOT;
    wi9OjM8N = (846 - 846);
    int ukqwd235H, iVSc4nxiqf;
    k31l5RDyHfOT = a[(535 - 535)];
    iVSc4nxiqf = strlen (a);
    PFxptI = a[(421 - 421)];
    {
        ukqwd235H = 628 - 628;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (iVSc4nxiqf - (592 - 591) > ukqwd235H) {
            if (a[ukqwd235H + (136 - 135)] > k31l5RDyHfOT) {
                wi9OjM8N = ukqwd235H + (774 - 773);
                k31l5RDyHfOT = a[ukqwd235H + (601 - 600)];
            }
            ukqwd235H = ukqwd235H + 1;
        };
    }
    return wi9OjM8N;
}

void  main () {
    int ukqwd235H;
    int lstr;
    int JFn0a3P1rA;
    char c34JjS [(908 - 893)] = {(739 - 739)}, substr [(658 - 653)] = {(635 - 635)};
    while (!(EOF == scanf ("%s %s", c34JjS, substr))) {
        JFn0a3P1rA = RqUJZT7PQ (c34JjS);
        lstr = strlen (c34JjS);
        {
            ukqwd235H = lstr - 1;
            while (ukqwd235H > JFn0a3P1rA) {
                c34JjS[ukqwd235H + (868 - 865)] = c34JjS[ukqwd235H];
                ukqwd235H--;
            };
        }
        {
            ukqwd235H = 327 - 327;
            while (ukqwd235H < (988 - 985)) {
                c34JjS[JFn0a3P1rA +ukqwd235H + 1] = substr[ukqwd235H];
                ukqwd235H = ukqwd235H + 1;
            };
        }
        printf ("%s\n", c34JjS);
        {
            ukqwd235H = 975 - 975;
            while (ukqwd235H < 15) {
                c34JjS[ukqwd235H] = 0;
                ukqwd235H = ukqwd235H + 1;
            };
        }
        {
            ukqwd235H = 0;
            while (ukqwd235H < 3) {
                substr[ukqwd235H] = 0;
                ukqwd235H++;
            };
        };
    };
}

