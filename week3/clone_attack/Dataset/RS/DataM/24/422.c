void  main () {
    int m = (895 - 895), mfP1DmOGZwd = (54 - 54), i = 0, BFUeRpab1YqW [(319 - 269)] = {0}, GNFRGrLtz, min, N1LvaNGS, mini;
    char s [50] [(165 - 145)];
    while ((56 - 55)) {
        if (getchar () != ' ')
            break;
        scanf ("%s", &s[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        i = i + 1;
    }
    {
        mfP1DmOGZwd = 0;
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
        while (mfP1DmOGZwd <= i) {
            BFUeRpab1YqW[mfP1DmOGZwd] = strlen (s[mfP1DmOGZwd]);
            mfP1DmOGZwd = mfP1DmOGZwd + 1;
        };
    }
    m = i;
    GNFRGrLtz = min = BFUeRpab1YqW[0];
    N1LvaNGS = 0;
    mini = 0;
    {
        i = 0;
        while (i <= m) {
            if (BFUeRpab1YqW[i] > GNFRGrLtz) {
                GNFRGrLtz = BFUeRpab1YqW[i];
                N1LvaNGS = i;
            }
            if (BFUeRpab1YqW[i] < min) {
                min = BFUeRpab1YqW[i];
                mini = i;
            }
            i = i + 1;
        };
    }
    printf ("%s\n", s[N1LvaNGS]);
    printf ("%s", s[mini]);
}

