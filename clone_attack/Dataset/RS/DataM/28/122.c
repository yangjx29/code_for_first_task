void  main () {
    int h6srm1RtNd;
    int EnUrzfVyb;
    int L9QnTyb [300] = {0};
    h6srm1RtNd = 0;
    EnUrzfVyb = 0;
    char str [2000];
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
    gets (str);
    char *p;
    p = str;
    do {
        if (*p == ' ') {
            if (!(' ' != *(p - 1))) {
                p++;
            }
            else {
                h6srm1RtNd = h6srm1RtNd + 1;
                p++;
                EnUrzfVyb++;
            };
        }
        else {
            if (*p != ' ') {
                L9QnTyb[h6srm1RtNd]++;
                p++;
            };
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
        if (*p == '\0') {
            if (*(p - 1) == ' ')
                break;
            else {
                if (*(p - 1) != ' ') {
                    EnUrzfVyb++;
                };
            };
        };
    }
    while (*p != '\0');
    for (h6srm1RtNd = 0; h6srm1RtNd < EnUrzfVyb; h6srm1RtNd++) {
        printf ("%d", L9QnTyb[h6srm1RtNd]);
        if (h6srm1RtNd != EnUrzfVyb -1)
            ;
    };
}

