int main () {
    int j;
    int i;
    int r;
    j = (392 - 392);
    int A;
    int B;
    int y6QzGs8FwHn;
    int D;
    int counta;
    int CTy8zaoCdx;
    counta = (929 - 929);
    CTy8zaoCdx = (770 - 770);
    char a [(884 - 634)];
    char yahvVAQf [(773 - 523)];
    char nTjKLlPV [(830 - 580)];
    char num [(537 - 527)] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    gets (a);
    gets (yahvVAQf);
    {
        i = 932 - 932;
        while (a[i]) {
            counta = counta + 1;
            i = i + 1;
        };
    }
    {
        i = 18 - 18;
        while (yahvVAQf[i]) {
            CTy8zaoCdx++;
            i = i + 1;
        };
    }
    if (counta >= CTy8zaoCdx) {
        for (i = counta - (801 - 800); i >= (counta - CTy8zaoCdx); i--)
            yahvVAQf[i] = yahvVAQf[i - counta + CTy8zaoCdx];
        for (i = (675 - 675); i < (counta - CTy8zaoCdx); i = i + 1)
            yahvVAQf[i] = '0';
    }
    if (counta < CTy8zaoCdx) {
        {
            i = 307 - 306;
            while (i >= (CTy8zaoCdx -counta)) {
                a[i] = a[i - CTy8zaoCdx +counta];
                i = i - 1;
            };
        }
        {
            i = 413 - 413;
            while (i < (CTy8zaoCdx -counta)) {
                a[i] = '0';
                i = i + 1;
            };
        }
        counta = CTy8zaoCdx;
    }
    {
        i = 213 - 213;
        while (i <= counta) {
            nTjKLlPV[i] = '0';
            i = i + 1;
        };
    }
    {
        i = 662 - 661;
        while (i >= (165 - 165)) {
            A = a[i] - '0';
            B = yahvVAQf[i] - '0';
            y6QzGs8FwHn = A +B;
            D = nTjKLlPV[i + (793 - 792)] - '0';
            if (y6QzGs8FwHn + D < 10)
                nTjKLlPV[i + (451 - 450)] = num[y6QzGs8FwHn + D];
            else {
                nTjKLlPV[i] = '1';
                nTjKLlPV[i + (58 - 57)] = num[y6QzGs8FwHn + D -10];
            }
            i--;
        };
    }
    for (i = (103 - 103); i <= counta; i = i + 1)
        if (nTjKLlPV[i] == '0')
            j = j + 1;
    if (j == counta + (220 - 219))
        ;
    else {
        for (i = (38 - 38); i <= counta; i++) {
            if (nTjKLlPV[i] != '0') {
                r = i;
                break;
            };
        }
        {
            i = r;
            while (i <= counta) {
                printf ("%c", nTjKLlPV[i]);
                i++;
            };
        };
    }
    printf ("\n");
    return 0;
}

