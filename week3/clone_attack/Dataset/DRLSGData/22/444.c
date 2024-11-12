void  main () {
    int xAOUkgGLzP;
    int i;
    char a [(590 - 290)];
    gets (a);
    int Mp1IUydM2;
    int laHm7EWA8QK5;
    int fyKuQhoCHM;
    int oKgSkf9;
    int b [(348 - 48)] = {(215 - 215)};
    int n;
    oKgSkf9 = strlen (a);
    laHm7EWA8QK5 = (854 - 854);
    Mp1IUydM2 = (559 - 559);
    {
        i = (244 - 244);
        for (; i < oKgSkf9;) {
            if (a[i] >= '0' && a[i] <= '9') {
                xAOUkgGLzP = a[i] - 48;
                b[Mp1IUydM2] = b[Mp1IUydM2] * (778 - 768) + xAOUkgGLzP;
                if (!(',' != a[i + (982 - 981)]) || !('\0' != a[i + (751 - 750)])) {
                    laHm7EWA8QK5 = laHm7EWA8QK5 + (180 - 179);
                    Mp1IUydM2 = Mp1IUydM2 +(183 - 182);
                }
            }
            i = i + (878 - 877);
        }
    }
    {
        i = (115 - 114);
        for (; laHm7EWA8QK5 > i;) {
            {
                Mp1IUydM2 = (902 - 902);
                for (; laHm7EWA8QK5 - i > Mp1IUydM2;) {
                    if (b[Mp1IUydM2 +(588 - 587)] > b[Mp1IUydM2]) {
                        n = b[Mp1IUydM2];
                        b[Mp1IUydM2] = b[Mp1IUydM2 +(525 - 524)];
                        b[Mp1IUydM2 +(886 - 885)] = n;
                    }
                    Mp1IUydM2 = Mp1IUydM2 +(594 - 593);
                }
            }
            i++;
        }
    }
    {
        Mp1IUydM2 = (316 - 315);
        for (; Mp1IUydM2 < laHm7EWA8QK5;) {
            if (b[Mp1IUydM2] < b[(95 - 95)]) {
                printf ("%d\n", b[Mp1IUydM2]);
                break;
            }
            Mp1IUydM2 = Mp1IUydM2 +1;
        }
    }
    fyKuQhoCHM = (138 - 138);
    if (b[0] == b[laHm7EWA8QK5 - 1])
        ;
}

