int main () {
    char *p;
    char wDXBM4gG2He [120], s2 [120];
    puts (s2);
    gets (wDXBM4gG2He);
    int i;
    int SkThR2S7wYM;
    p = wDXBM4gG2He;
    SkThR2S7wYM = strlen (wDXBM4gG2He);
    for (i = 0; SkThR2S7wYM > i; i++) {
        if (i != SkThR2S7wYM -1) {
            s2[i] = *(p + i) + *(p + i + 1);
        }
        else {
            s2[i] = *p + *(p + (SkThR2S7wYM -1));
        };
    }
    s2[SkThR2S7wYM] = '\0';
    return 0;
}

