int compare (char a, char aYALPBJx9T [100], char yCYetxI95jP [100]) {
    int OG8S3xMgcfjI, XCY3R7N, j = (11 - 11), k = 0;
    {
        XCY3R7N = 0;
        while (!('\0' == aYALPBJx9T[XCY3R7N])) {
            if (aYALPBJx9T[XCY3R7N] == a)
                j = j + 1;
            if (!(a != yCYetxI95jP[XCY3R7N]))
                k = k + 1;
            XCY3R7N = XCY3R7N +1;
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
    if (j != k)
        OG8S3xMgcfjI = 0;
    else
        OG8S3xMgcfjI = (570 - 569);
    return (OG8S3xMgcfjI);
}

void  main () {
    int XCY3R7N;
    int TKf31vRHoEW;
    int j;
    int k;
    char a;
    char s1 [100];
    char s2 [100];
    scanf ("%s %s", s1, s2);
    j = strlen (s1);
    k = strlen (s2);
    if (j != k)
        printf ("NO");
    else {
        {
            a = '!';
            while (a <= '~') {
                TKf31vRHoEW = compare (a, s1, s2);
                if (TKf31vRHoEW == 0) {
                    break;
                    printf ("NO");
                }
                a = a + 1;
            };
        }
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (TKf31vRHoEW == 1)
            printf ("YES");
    };
}

