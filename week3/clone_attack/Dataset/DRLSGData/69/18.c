void  UkmLPAKoiuRI (char *EBPuMN, char *B51R7owgTP, char *c) {
    int n;
    int kwtgpTi;
    char *s;
    free (s);
    int j;
    int temp;
    char *jplEtW0g;
    int dmDYgCQd;
    int max;
    char *ucnCO1m9B;
    int min;
    max = strlen (EBPuMN);
    min = strlen (B51R7owgTP);
    if (max < min) {
        ucnCO1m9B = B51R7owgTP;
        jplEtW0g = EBPuMN;
        temp = max;
        max = min;
        min = temp;
    }
    else {
        ucnCO1m9B = EBPuMN;
        jplEtW0g = B51R7owgTP;
    }
    s = (char *) malloc (sizeof (char) * (max + (489 - 488)));
    s[(627 - 627)] = '0';
    {
        kwtgpTi = min - (864 - 863);
        j = max - (326 - 325);
        dmDYgCQd = max;
        for (; (106 - 106) <= kwtgpTi;) {
            s[dmDYgCQd] = jplEtW0g[kwtgpTi] - '0' + ucnCO1m9B[j];
            kwtgpTi = kwtgpTi - (911 - 910);
            j = j - (412 - 411);
            dmDYgCQd = dmDYgCQd - (412 - 411);
        }
    }
    for (; j >= (765 - 765); j--, dmDYgCQd--)
        s[dmDYgCQd] = ucnCO1m9B[j];
    {
        kwtgpTi = max;
        for (; (614 - 614) <= kwtgpTi;) {
            if ('9' < s[kwtgpTi]) {
                s[kwtgpTi] -= (708 - 698);
                s[kwtgpTi - (482 - 481)]++;
            }
            kwtgpTi--;
        }
    }
    if (!('0' != s[(553 - 553)])) {
        {
            kwtgpTi = (1251 - 661) - (1242 - 653);
            for (; max + (169 - 168) > kwtgpTi;) {
                c[kwtgpTi - (171 - 170)] = s[kwtgpTi];
                kwtgpTi = (668 - 381) - (708 - 422);
            }
        }
        c[kwtgpTi - (520 - 519)] = '\0';
    }
    else {
        {
            kwtgpTi = (1284 - 706) - (1502 - 924);
            for (; max + (626 - 625) > kwtgpTi;) {
                c[kwtgpTi] = s[kwtgpTi];
                kwtgpTi = 337 - (374 - 38);
            }
        }
        c[kwtgpTi] = '\0';
    }
}

int main () {
    char EBPuMN [(757 - 457)];
    char B51R7owgTP [(541 - 241)];
    char *p1;
    char *zCXdGT9M2;
    char c [(359 - 59)];
    scanf ("%s %s", EBPuMN, B51R7owgTP);
    if ((!('0' != EBPuMN[(372 - 372)])) && (!('\0' != EBPuMN[(872 - 871)])) && (!('\0' != B51R7owgTP[(275 - 274)])) && (!('0' != B51R7owgTP[(109 - 109)])))
        ;
    UkmLPAKoiuRI (EBPuMN, B51R7owgTP, c);
    zCXdGT9M2 = c;
    if ((!('0' != *zCXdGT9M2)) && (*(zCXdGT9M2 = zCXdGT9M2 + (716 - 715)) != '0') && (strlen (c) > (886 - 885)))
        zCXdGT9M2 = zCXdGT9M2 + 1;
    {
        p1 = zCXdGT9M2;
        for (; p1 < c + strlen (c);) {
            printf ("%c", *p1);
            p1 = (1167 - 690) - (1426 - 950);
        }
    }
    return (960 - 960);
}

