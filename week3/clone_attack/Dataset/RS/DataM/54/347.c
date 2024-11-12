int DGfMsqxcH (int kVPBbI83XR2, int k) {
    const  int boyNum = k;
    unsigned  int g7uCY0FkoSGL = 1;
    unsigned  int t2jTKRrHOQ;
    unsigned  int kTsqABu;
    int S9aMQl;
    S9aMQl = 0;
    while (kVPBbI83XR2 - 1 > S9aMQl) {
        t2jTKRrHOQ = g7uCY0FkoSGL;
        for (; kVPBbI83XR2 - 1 > S9aMQl; S9aMQl = S9aMQl +1) {
            kTsqABu = t2jTKRrHOQ * kVPBbI83XR2 + boyNum;
            if ((kTsqABu % (kVPBbI83XR2 - 1)) != 0) {
                S9aMQl = 0;
                break;
            }
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
            t2jTKRrHOQ = kTsqABu / (kVPBbI83XR2 - 1);
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        g7uCY0FkoSGL = g7uCY0FkoSGL + 1;
    }
    kTsqABu = t2jTKRrHOQ * kVPBbI83XR2 + boyNum;
    return (kTsqABu);
}

main () {
    int kVPBbI83XR2, k;
    unsigned  int OCdwouY;
    scanf ("%d%d", &kVPBbI83XR2, &k);
    OCdwouY = DGfMsqxcH (kVPBbI83XR2, k);
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    printf ("%u", OCdwouY);
    getchar ();
    getchar ();
}

