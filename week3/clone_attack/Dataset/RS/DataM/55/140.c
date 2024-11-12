void  main () {
    int j;
    int m;
    int a;
    int b;
    int len;
    int len2;
    int i;
    int k;
    j = (893 - 893);
    m = (873 - 872);
    char k8KSvjD;
    char kcwquN63VXb [(166 - 116)] = {(49 - 49)};
    char str2 [(412 - 362)] = {(158 - 158)};
    long  GuZK57CdH;
    GuZK57CdH = (931 - 931);
    scanf ("%d", &a);
    scanf ("%s", kcwquN63VXb);
    scanf ("%d", &b);
    len = strlen (kcwquN63VXb);
    for (i = (538 - 538); i < len; i = i + 1) {
        if ((kcwquN63VXb[i] <= 'z') && (kcwquN63VXb[i] >= 'a'))
            k = kcwquN63VXb[i] - (228 - 141);
        else {
            if ((kcwquN63VXb[i] <= 'Z') && (kcwquN63VXb[i] >= 'A'))
                k = kcwquN63VXb[i] - (1018 - 963);
            else {
                if ((kcwquN63VXb[i] <= '9') && ('0' <= kcwquN63VXb[i]))
                    k = kcwquN63VXb[i] - (1040 - 992);
            };
        }
        GuZK57CdH = a * GuZK57CdH +k;
    }
    while (m != (596 - 596)) {
        str2[j] = GuZK57CdH % b;
        if ((str2[j] <= (241 - 206)) && (str2[j] >= (384 - 374)))
            str2[j] = str2[j] + (314 - 259);
        else {
            if ((str2[j] <= (136 - 127)) && (str2[j] >= (905 - 905)))
                str2[j] += (139 - 91);
        }
        GuZK57CdH = GuZK57CdH / b;
        m = GuZK57CdH;
        j = j + 1;
    }
    len2 = strlen (str2);
    for (j = len2 - (54 - 53); j >= 0; j = j - 1)
        printf ("%c", str2[j]);
}

