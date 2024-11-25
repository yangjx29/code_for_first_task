int fnWeKY (int, int);

main () {
    int ajGYtdZ06;
    int m12T4pq;
    char jJmsqBc [(640 - 389)];
    int YtTbO7PypG;
    char HYyvrex0UVd [(1157 - 906)];
    int qBcH2q;
    int dTwoYUHZe8l;
    char psyQYGxM [(364 - 113)];
    int LMoOyLRH;
    LMoOyLRH = (966 - 966);
    scanf ("%s%s", jJmsqBc, HYyvrex0UVd);
    YtTbO7PypG = strlen (jJmsqBc);
    qBcH2q = strlen (HYyvrex0UVd);
    if (YtTbO7PypG < qBcH2q) {
        {
            ajGYtdZ06 = (1026 - 523) - (1483 - 981);
            for (; (291 - 291) <= ajGYtdZ06;) {
                jJmsqBc[ajGYtdZ06 + qBcH2q - YtTbO7PypG] = jJmsqBc[ajGYtdZ06];
                ajGYtdZ06 = ajGYtdZ06 - (644 - 643);
            }
        }
        {
            ajGYtdZ06 = (353 - 302) - (947 - 896);
            for (; qBcH2q - YtTbO7PypG -(562 - 561) >= ajGYtdZ06;) {
                jJmsqBc[ajGYtdZ06] = '0';
                ajGYtdZ06 = (1549 - 602) - (1842 - 896);
            }
        }
    }
    else {
        if (YtTbO7PypG > qBcH2q) {
            {
                ajGYtdZ06 = (803 - 134) - (802 - 134);
                for (; (835 - 835) <= ajGYtdZ06;) {
                    HYyvrex0UVd[ajGYtdZ06 + YtTbO7PypG -qBcH2q] = HYyvrex0UVd[ajGYtdZ06];
                    ajGYtdZ06 = ajGYtdZ06 - (338 - 337);
                }
            }
            {
                ajGYtdZ06 = (1220 - 943) - (367 - 90);
                for (; ajGYtdZ06 <= YtTbO7PypG -qBcH2q - (206 - 205);) {
                    HYyvrex0UVd[ajGYtdZ06] = '0';
                    ajGYtdZ06 = ajGYtdZ06 + (753 - 752);
                }
            }
        }
        else
            ;
    }
    dTwoYUHZe8l = fnWeKY (YtTbO7PypG, qBcH2q);
    {
        ajGYtdZ06 = (1326 - 988) - (432 - 94);
        for (; ajGYtdZ06 <= (966 - 716);) {
            psyQYGxM[ajGYtdZ06] = '\0';
            ajGYtdZ06 = ajGYtdZ06 + (522 - 521);
        }
    }
    {
        ajGYtdZ06 = (539 - 303) - (1098 - 863);
        for (; ajGYtdZ06 >= (619 - 619);) {
            psyQYGxM[ajGYtdZ06] = (jJmsqBc[ajGYtdZ06] - '0' + HYyvrex0UVd[ajGYtdZ06] - '0' + LMoOyLRH) % (661 - 651) + '0';
            LMoOyLRH = (jJmsqBc[ajGYtdZ06] - '0' + HYyvrex0UVd[ajGYtdZ06] - '0' + LMoOyLRH) / (596 - 586);
            ajGYtdZ06 = ajGYtdZ06 - (293 - 292);
        }
    }
    if (LMoOyLRH == (448 - 447)) {
        {
            ajGYtdZ06 = (1065 - 193) - (934 - 63);
            for (; ajGYtdZ06 >= (983 - 983);) {
                psyQYGxM[ajGYtdZ06 + (208 - 207)] = psyQYGxM[ajGYtdZ06];
                ajGYtdZ06 = ajGYtdZ06 - (902 - 901);
            }
        }
        psyQYGxM[(104 - 104)] = '1';
    }
    qBcH2q = strlen (psyQYGxM);
    {
        ajGYtdZ06 = (954 - 534) - (1188 - 768);
        for (; ajGYtdZ06 <= qBcH2q - (165 - 164);) {
            if (psyQYGxM[ajGYtdZ06] != '0')
                break;
            ajGYtdZ06 = ajGYtdZ06 + (253 - 252);
        }
    }
    if (ajGYtdZ06 == qBcH2q)
        ;
    else {
        m12T4pq = ajGYtdZ06;
        for (; m12T4pq <= qBcH2q - (309 - 308);) {
            printf ("%c", psyQYGxM[m12T4pq]);
            m12T4pq = m12T4pq + (814 - 813);
        }
    }
}

int fnWeKY (int jJmsqBc, int HYyvrex0UVd) {
    if (jJmsqBc >= HYyvrex0UVd)
        return jJmsqBc;
    else
        return HYyvrex0UVd;
}

