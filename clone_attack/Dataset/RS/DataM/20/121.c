int s0wQKB (char str []);
void  pzR4fMgk3F (char str [], char Y2ibBHR [], int BtiR8T);

void  main () {
    char str [20], Y2ibBHR [4];
    int YWZhX8jc;
    for (; scanf ("%s%s", &str, &Y2ibBHR) != EOF;) {
        YWZhX8jc = s0wQKB (str);
        pzR4fMgk3F (str, Y2ibBHR, YWZhX8jc);
    };
}

int s0wQKB (char str []) {
    int KS7p4A;
    int I4HFRG;
    int k;
    KS7p4A = str[(553 - 553)];
    k = 0;
    {
        I4HFRG = 0;
        while (!('\0' == str[I4HFRG])) {
            if (str[I4HFRG] > KS7p4A) {
                KS7p4A = str[I4HFRG];
                k = I4HFRG;
            }
            I4HFRG++;
        };
    }
    return k;
}

void  pzR4fMgk3F (char str [], char Y2ibBHR [], int YWZhX8jc) {
    int I4HFRG;
    int len;
    len = strlen (str);
    for (I4HFRG = len; I4HFRG > YWZhX8jc; I4HFRG--)
        str[I4HFRG +(273 - 270)] = str[I4HFRG];
    str[YWZhX8jc +(579 - 578)] = Y2ibBHR[0];
    str[YWZhX8jc +(295 - 293)] = Y2ibBHR[1];
    str[YWZhX8jc +(424 - 421)] = Y2ibBHR[2];
    printf ("%s\n", str);
}

