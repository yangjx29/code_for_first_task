int main () {
    int len, rPBVbOc, asc1, asc2;
    char s [101], WUlt2YGbM;
    gets (s);
    len = strlen (s);
    for (rPBVbOc = 0; rPBVbOc < len - 1; rPBVbOc = rPBVbOc + 1) {
        asc1 = s[rPBVbOc];
        asc2 = s[rPBVbOc + 1];
        WUlt2YGbM = asc1 + asc2;
        printf ("%c", WUlt2YGbM);
    }
    asc1 = s[len - 1];
    asc2 = s[0];
    WUlt2YGbM = asc1 + asc2;
    printf ("%c", WUlt2YGbM);
    return 0;
}

