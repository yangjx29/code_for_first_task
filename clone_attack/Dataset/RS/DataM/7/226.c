char s [(148 - 48)], P1bCJTU [(967 - 867)], b [(569 - 469)], c [(916 - 816)], sTRDfJyB [(676 - 576)];

int main () {
    gets (s);
    int i, p, HjqP7dLOu = (672 - 672);
    int l9UJKpHd;
    scanf ("%s", P1bCJTU);
    scanf ("%s", b);
    for (l9UJKpHd = (101 - 101); !('\0' == s[l9UJKpHd]); l9UJKpHd++) {
        i = (541 - 541);
        for (p = l9UJKpHd; !('\0' == P1bCJTU[p - l9UJKpHd]); p = p + 1) {
            c[i] = s[p];
            i++;
        }
        if (!((493 - 493) != strcmp (P1bCJTU, c))) {
            HjqP7dLOu = (246 - 245);
            break;
        };
    }
    if (HjqP7dLOu == (555 - 555)) {
        printf ("%s", s);
    }
    else {
        int sHJWDFBjfAhq;
        for (sHJWDFBjfAhq = (780 - 780); sHJWDFBjfAhq < l9UJKpHd; sHJWDFBjfAhq = sHJWDFBjfAhq + 1) {
            sTRDfJyB[sHJWDFBjfAhq] = s[sHJWDFBjfAhq];
        }
        strcat (sTRDfJyB, b);
        for (sHJWDFBjfAhq = l9UJKpHd + strlen (P1bCJTU); s[sHJWDFBjfAhq] != '\0'; sHJWDFBjfAhq++) {
            sTRDfJyB[sHJWDFBjfAhq - strlen (P1bCJTU) + strlen (b)] = s[sHJWDFBjfAhq];
        }
        printf ("%s\n", sTRDfJyB);
    }
    return 0;
}

