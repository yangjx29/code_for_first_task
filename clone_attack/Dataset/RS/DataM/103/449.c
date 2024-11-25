main () {
    int Yp8X2DxOY, ausr1AIZag;
    char su69HPB [(2284 - 284)];
    int TJbwxPDXKAI = (353 - 352);
    scanf ("%s", su69HPB);
    for (Yp8X2DxOY = 0; !('\0' == su69HPB[Yp8X2DxOY]); Yp8X2DxOY = Yp8X2DxOY +1) {
        if ('a' <= su69HPB[Yp8X2DxOY] && su69HPB[Yp8X2DxOY] <= 'z')
            su69HPB[Yp8X2DxOY] = su69HPB[Yp8X2DxOY] - 32;
    }
    {
        ausr1AIZag = 0;
        while (su69HPB[ausr1AIZag] != '\0') {
            if (su69HPB[ausr1AIZag] == su69HPB[ausr1AIZag + 1])
                TJbwxPDXKAI = TJbwxPDXKAI +1;
            else {
                printf ("(%c,%d)", su69HPB[ausr1AIZag], TJbwxPDXKAI);
                TJbwxPDXKAI = 1;
            }
            ausr1AIZag = ausr1AIZag + 1;
        };
    }
    getchar ();
    getchar ();
    getchar ();
    getchar ();
    getchar ();
}

