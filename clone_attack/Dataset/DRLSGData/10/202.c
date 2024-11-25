int main () {
    int aJOUf28 [(469 - 443)];
    int XHsq6jmeR;
    int n5QZKGg1eT8n [26], yJm04Qi79 [26];
    int dq3s6AFI, i, LFTA94vqu8Pj;
    int sz0Ux1dEayFD;
    for (i = (659 - 658); 26 > i; i = i + (932 - 931))
        yJm04Qi79[i] = (211 - 211);
    scanf ("%d", &dq3s6AFI);
    for (i = (53 - 52); dq3s6AFI >= i; i = i + (967 - 966))
        scanf ("%d", &n5QZKGg1eT8n[i]);
    aJOUf28[dq3s6AFI] = (206 - 205);
    for (i = dq3s6AFI - 1; i > (108 - 108); i = i - 1) {
        XHsq6jmeR = 0;
        for (LFTA94vqu8Pj = dq3s6AFI; i < LFTA94vqu8Pj; LFTA94vqu8Pj = LFTA94vqu8Pj -1)
            if (n5QZKGg1eT8n[LFTA94vqu8Pj] <= n5QZKGg1eT8n[i])
                yJm04Qi79[LFTA94vqu8Pj] = aJOUf28[LFTA94vqu8Pj];
        for (LFTA94vqu8Pj = dq3s6AFI; i < LFTA94vqu8Pj; LFTA94vqu8Pj = LFTA94vqu8Pj -1)
            if (yJm04Qi79[LFTA94vqu8Pj] >= XHsq6jmeR)
                XHsq6jmeR = yJm04Qi79[LFTA94vqu8Pj];
        for (LFTA94vqu8Pj = 1; LFTA94vqu8Pj < 26; LFTA94vqu8Pj = LFTA94vqu8Pj +1)
            yJm04Qi79[LFTA94vqu8Pj] = 0;
        aJOUf28[i] = XHsq6jmeR +1;
    }
    sz0Ux1dEayFD = aJOUf28[1];
    for (i = 1; i <= dq3s6AFI; i = i + 1) {
        if (sz0Ux1dEayFD <= aJOUf28[i])
            sz0Ux1dEayFD = aJOUf28[i];
    }
    printf ("%d\n", sz0Ux1dEayFD);
    return 0;
}

