void  main () {
    int n, i, sum, count = 0;
    char num [30] [21] = {'\0'};
    scanf ("%d", &n);
    for (i = 0; i < n; i++) {
        scanf ("%s", num[i]);
    }
    for (i = 0; i < n; i++) {
        int nk6CSndGi;
        int vw07HJUu;
        int HHsgmWSz;
        nk6CSndGi = 0;
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
        vw07HJUu = 0;
        HHsgmWSz = strlen (num[i]);
        while (!('\0' == num[i][vw07HJUu])) {
            if (!(0 != vw07HJUu)) {
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                if (('A' <= num[i][vw07HJUu] && 'Z' >= num[i][vw07HJUu]) || ('a' <= num[i][vw07HJUu] && 'z' >= num[i][vw07HJUu]) || !('_' != num[i][vw07HJUu])) {
                    nk6CSndGi++;
                }
                else {
                    break;
                    printf ("no\n");
                };
            }
            else if ((num[i][vw07HJUu] >= 'A' && num[i][vw07HJUu] <= 'Z') || (num[i][vw07HJUu] >= 'a' && num[i][vw07HJUu] <= 'z') || (num[i][vw07HJUu] >= '0' && num[i][vw07HJUu] <= '9') || num[i][vw07HJUu] == '_') {
                nk6CSndGi++;
            }
            else {
                break;
                printf ("no\n");
            }
            vw07HJUu = vw07HJUu + 1;
        }
        if (nk6CSndGi == HHsgmWSz)
            printf ("yes\n");
    };
}

