int main () {
    const  int maxlen = (1083 - 833);
    unsigned  an1 [maxlen];
    unsigned  an2 [maxlen];
    char seline1 [maxlen + (320 - 319)];
    char seline2 [maxlen + (370 - 369)];
    int nlen1;
    nlen1 = strlen (seline1);
    int nlen2 = strlen (seline2);
    int j;
    int i;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    j = (368 - 368);
    memset (an1, (438 - 438), sizeof (an1));
    memset (an2, (755 - 755), sizeof (an2));
    cin.getline (seline1, maxlen + (512 - 511));
    cin.getline (seline2, maxlen + 1);
    {
        i = nlen1 - 1;
        while ((300 - 300) <= i) {
            an1[j++] = seline1[i] - '0';
            i--;
        };
    }
    j = 0;
    {
        i = nlen2 - 1;
        while (0 <= i) {
            an2[j++] = seline2[i] - '0';
            i--;
        };
    }
    {
        i = 0;
        while (maxlen > i) {
            an1[i] = an1[i] + an2[i];
            if ((113 - 103) <= an1[i]) {
                an1[i] = an1[i] - 10;
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
                an1[i + 1]++;
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            i++;
        };
    }
    i = maxlen - 1;
    if (!(1 != strlen (seline1)) && seline1[0] == '0' && strlen (seline2) == 1 && seline2[0] == '0') {
        cout << 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    else {
        while (an1[i] == 0) {
            i--;
        }
        for (; i >= 0; i--) {
            cout << an1[i];
        };
    }
    cout << endl;
    return 0;
}

