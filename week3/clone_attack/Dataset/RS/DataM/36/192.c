void  main () {
    char iaLlT5cs9 [100], xnq3o6jNE [100], oJqWpmTfU;
    int a, l, i, j, LYjFgDV;
    scanf ("%s%s", iaLlT5cs9, xnq3o6jNE);
    l = strlen (iaLlT5cs9);
    if (!(strlen (xnq3o6jNE) == l))
        printf ("NO");
    else {
        for (i = 0; i <= l - 1; i = i + 1) {
            for (j = i; j <= l - 1; j = j + 1) {
                if (iaLlT5cs9[i] == xnq3o6jNE[j]) {
                    oJqWpmTfU = xnq3o6jNE[i];
                    xnq3o6jNE[i] = xnq3o6jNE[j];
                    xnq3o6jNE[j] = oJqWpmTfU;
                };
            }
            if (iaLlT5cs9[i] != xnq3o6jNE[i]) {
                break;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                printf ("NO");
            };
        }
        if (i == l)
            printf ("YES");
    };
}

