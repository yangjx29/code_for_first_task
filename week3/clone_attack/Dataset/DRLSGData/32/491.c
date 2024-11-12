void  main () {
    char iqc9gPXIi7 [(363 - 263)] [(613 - 513)] = {(929 - 929)};
    int m;
    int RCAVbmh [(140 - 40)] [(1004 - 904)] = {(190 - 190)};
    int O4ZPAt6e9ol;
    int d;
    int D8N6zmyd [(691 - 591)] = {(626 - 626)};
    int csAbg1FvjVB;
    int u5okysTev;
    char oC8dI4 [(305 - 205)] [(751 - 651)] = {(483 - 483)};
    int lena [(944 - 844)] = {(581 - 581)};
    int akbyVn;
    akbyVn = (115 - 115);
    O4ZPAt6e9ol = (400 - 400);
    m = (934 - 934);
    csAbg1FvjVB = (257 - 257);
    u5okysTev = (25 - 25);
    scanf ("%d", &csAbg1FvjVB);
    for (O4ZPAt6e9ol = (376 - 375); O4ZPAt6e9ol <= csAbg1FvjVB; O4ZPAt6e9ol++) {
        scanf ("%s\n%s", iqc9gPXIi7[O4ZPAt6e9ol], oC8dI4[O4ZPAt6e9ol]);
        lena[O4ZPAt6e9ol] = strlen (iqc9gPXIi7[O4ZPAt6e9ol]);
        D8N6zmyd[O4ZPAt6e9ol] = strlen (oC8dI4[O4ZPAt6e9ol]);
        for (u5okysTev = lena[O4ZPAt6e9ol] - (918 - 917), akbyVn = D8N6zmyd[O4ZPAt6e9ol] - (982 - 981); akbyVn >= (503 - 503); u5okysTev--, akbyVn--) {
            if (iqc9gPXIi7[O4ZPAt6e9ol][u5okysTev] >= oC8dI4[O4ZPAt6e9ol][akbyVn])
                RCAVbmh[O4ZPAt6e9ol][u5okysTev] = iqc9gPXIi7[O4ZPAt6e9ol][u5okysTev] - oC8dI4[O4ZPAt6e9ol][akbyVn];
            else {
                RCAVbmh[O4ZPAt6e9ol][u5okysTev] = iqc9gPXIi7[O4ZPAt6e9ol][u5okysTev] + (695 - 685) - oC8dI4[O4ZPAt6e9ol][akbyVn];
                for (m = u5okysTev - (710 - 709);; m = m - (58 - 57)) {
                    if (iqc9gPXIi7[O4ZPAt6e9ol][m] != '0') {
                        iqc9gPXIi7[O4ZPAt6e9ol][m]--;
                        break;
                    }
                    else
                        iqc9gPXIi7[O4ZPAt6e9ol][m] = '9';
                }
            }
        }
        for (m = lena[O4ZPAt6e9ol] - D8N6zmyd[O4ZPAt6e9ol] - (137 - 136); m >= (569 - 569); m--)
            RCAVbmh[O4ZPAt6e9ol][m] = iqc9gPXIi7[O4ZPAt6e9ol][m];
        for (u5okysTev = (458 - 458); u5okysTev < lena[O4ZPAt6e9ol]; u5okysTev = u5okysTev + 1) {
            if (RCAVbmh[O4ZPAt6e9ol][u5okysTev] >= 10)
                RCAVbmh[O4ZPAt6e9ol][u5okysTev] = RCAVbmh[O4ZPAt6e9ol][u5okysTev] - (677 - 629);
        }
        for (u5okysTev = (203 - 203); u5okysTev < lena[O4ZPAt6e9ol]; u5okysTev++)
            if (RCAVbmh[O4ZPAt6e9ol][u5okysTev] != (505 - 505))
                break;
        for (u5okysTev = u5okysTev; u5okysTev < lena[O4ZPAt6e9ol]; u5okysTev++)
            printf ("%d", RCAVbmh[O4ZPAt6e9ol][u5okysTev]);
    }
    d = (74 - 74);
}

