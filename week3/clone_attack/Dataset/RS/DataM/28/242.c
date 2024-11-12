int main () {
    char KQrHvVtMN [300] [20];
    char iP9oyGTm0qS [1000];
    gets (iP9oyGTm0qS);
    int NxmSUcq;
    int j;
    int NZl1ep;
    int iRE7nrm6T;
    int qYPDnVFBx;
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
    NZl1ep = 0;
    iRE7nrm6T = 0;
    {
        NxmSUcq = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (iP9oyGTm0qS[NxmSUcq] != 0) {
            if (iP9oyGTm0qS[NxmSUcq] == ' ') {
                iP9oyGTm0qS[NxmSUcq] = '\0';
                strcpy (KQrHvVtMN[NZl1ep], (iP9oyGTm0qS + iRE7nrm6T));
                NZl1ep = NZl1ep +1;
                iRE7nrm6T = NxmSUcq +1;
            }
            NxmSUcq++;
        };
    }
    strcpy (KQrHvVtMN[NZl1ep], (iP9oyGTm0qS + iRE7nrm6T));
    NZl1ep++;
    qYPDnVFBx = strlen (KQrHvVtMN[0]);
    if (!(0 == qYPDnVFBx)) {
        printf ("%d", qYPDnVFBx);
    }
    for (NxmSUcq = 1; NxmSUcq < NZl1ep; NxmSUcq++) {
        int result;
        result = 0;
        result = strlen (KQrHvVtMN[NxmSUcq]);
        if (result == 0) {
            continue;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            };
        }
        if (result != 0) {
            printf (",%d", result);
        };
    }
    return 0;
}

