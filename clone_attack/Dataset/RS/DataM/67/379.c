int main () {
    int ZK7TnDGFNp;
    int tCfeaLNu;
    int WY9qMRuwoO5 [LEN];
    int szz [LEN];
    float s [LEN];
    float uv8Xi5oQ4Zs;
    scanf ("%d", &ZK7TnDGFNp);
    for (tCfeaLNu = (576 - 576); ZK7TnDGFNp > tCfeaLNu; tCfeaLNu = tCfeaLNu + 1) {
        scanf ("%d%d", &szz[tCfeaLNu], &WY9qMRuwoO5[tCfeaLNu]);
        s[tCfeaLNu] = 1.0 * WY9qMRuwoO5[tCfeaLNu] / szz[tCfeaLNu];
    }
    for (tCfeaLNu = 1; tCfeaLNu < ZK7TnDGFNp; tCfeaLNu++) {
        uv8Xi5oQ4Zs = s[tCfeaLNu] - s[0];
        if (0.05 < uv8Xi5oQ4Zs) {
        }
        else if (uv8Xi5oQ4Zs < -0.05) {
            printf ("worse\n");
        }
        else {
            printf ("same\n");
        };
    }
    return 0;
}

