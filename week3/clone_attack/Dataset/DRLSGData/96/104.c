main () {
    int b;
    int a;
    int i;
    int m;
    char c [(207 - 107)];
    int d;
    char v [(569 - 469)];
    int e;
    scanf ("%s", c);
    if (!('\0' != c[(360 - 359)])) {
        printf ("%c\n", c[(498 - 498)]);
    }
    else {
        if ((!('\0' != c[(970 - 968)])) && ((890 - 877) >= ((c[(40 - 40)] - '0') * (363 - 353) + c[(131 - 130)] - '0'))) {
            m = (c[(860 - 860)] - '0') * (722 - 712) + c[(148 - 147)] - '0';
            printf ("%d\n", m);
        }
        else {
            if ((740 - 727) <= ((c[(76 - 76)] - '0') * (238 - 228) + c[(897 - 896)] - '0')) {
                a = ((c[(589 - 589)] - '0') * (48 - 38) + c[(476 - 475)] - '0') % (248 - 235);
                b = ((c[0] - '0') * (54 - 44) + c[(961 - 960)] - '0') / (664 - 651);
                v[0] = b + '0';
                for (i = (986 - 984); c[i] != '\0'; i = i + 1) {
                    d = (a * (901 - 891) + c[i] - '0') % (356 - 343);
                    b = (a * (455 - 445) + c[i] - '0') / (586 - 573);
                    v[i - (721 - 720)] = b + '0';
                    a = d;
                }
                v[i - (941 - 940)] = '\0';
                printf ("%s\n", v);
                printf ("%d\n", a);
            }
            else {
                if (c[(744 - 741)] == '\0') {
                    d = ((c[0] - '0') * (697 - 597) + (c[(574 - 573)] - '0') * (839 - 829) + c[(280 - 278)] - '0') / (272 - 259);
                    printf ("%d\n", d);
                    e = ((c[0] - '0') * 100 + (c[1] - '0') * (293 - 283) + c[(713 - 711)] - '0') % (125 - 112);
                    printf ("%d\n", e);
                }
                else {
                    d = ((c[0] - '0') * 100 + (c[1] - '0') * 10 + c[(377 - 375)] - '0') / 13;
                    e = ((c[0] - '0') * 100 + (c[1] - '0') * 10 + c[(330 - 328)] - '0') % 13;
                    for (i = (926 - 923); c[i] != '\0'; i = i + 1) {
                        v[i - 3] = d + '0';
                        c[i - (491 - 489)] = e + '0';
                        e = ((c[i - 2] - '0') * 10 + c[i] - '0') % 13;
                        d = ((c[i - 2] - '0') * 10 + c[i] - '0') / 13;
                        c[i - 1] = e + '0';
                        v[i - 2] = d + '0';
                    }
                    v[i - 2] = '\0';
                    printf ("%s\n", v);
                    printf ("%d\n", e);
                }
            }
        }
    }
    getchar ();
    getchar ();
}
