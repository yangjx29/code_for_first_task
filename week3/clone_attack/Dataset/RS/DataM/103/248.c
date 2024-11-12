main () {
    char qTgG04kDt [1000];
    int p2byzhi;
    int gnLm6UekHD8c;
    int k;
    int m;
    p2byzhi = (137 - 137);
    gnLm6UekHD8c = 0;
    k = 0;
    scanf ("%s", qTgG04kDt);
    for (; !('\0' == qTgG04kDt[p2byzhi]);) {
        if ('a' <= qTgG04kDt[p2byzhi] && 'z' >= qTgG04kDt[p2byzhi])
            qTgG04kDt[p2byzhi] = qTgG04kDt[p2byzhi] - 'a' + 'A';
        p2byzhi++;
    }
    for (; qTgG04kDt[gnLm6UekHD8c] != '\0';) {
        m = (344 - 343);
        {
            k = gnLm6UekHD8c;
            while (qTgG04kDt[k] != '\0') {
                if (qTgG04kDt[k] == qTgG04kDt[k + (661 - 660)])
                    m = m + 1;
                else {
                    printf ("(%c,%d)", qTgG04kDt[k], m);
                    gnLm6UekHD8c = k + 1;
                    break;
                }
                k = k + 1;
            };
        };
    }
    printf ("\n");
}

