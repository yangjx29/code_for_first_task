int main () {
    int i;
    int Dejx6Tbza;
    int vc4jKlrSa;
    int MUyVgl05w;
    int t;
    int wVEJ4yA;
    int o98Fc0WVB;
    int W1UnWXH3oq6 [10001];
    int gun623jz1 [10001];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    MUyVgl05w = (733 - 733);
    scanf ("%d", &vc4jKlrSa);
    for (i = (94 - 93); vc4jKlrSa >= i; i = i + 1)
        scanf ("%d%d", &W1UnWXH3oq6[i], &gun623jz1[i]);
    for (i = (194 - 193); vc4jKlrSa >= i; i = i + 1)
        for (Dejx6Tbza = (106 - 105); vc4jKlrSa - (296 - 295) >= Dejx6Tbza; Dejx6Tbza = Dejx6Tbza +1)
            if (W1UnWXH3oq6[Dejx6Tbza +(121 - 120)] < W1UnWXH3oq6[Dejx6Tbza]) {
                t = W1UnWXH3oq6[Dejx6Tbza];
                W1UnWXH3oq6[Dejx6Tbza] = W1UnWXH3oq6[Dejx6Tbza +(357 - 356)];
                W1UnWXH3oq6[Dejx6Tbza +1] = t;
                t = gun623jz1[Dejx6Tbza];
                gun623jz1[Dejx6Tbza] = gun623jz1[Dejx6Tbza +1];
                gun623jz1[Dejx6Tbza +1] = t;
            }
    o98Fc0WVB = gun623jz1[1];
    wVEJ4yA = W1UnWXH3oq6[1];
    for (i = 2; vc4jKlrSa >= i; i = i + 1) {
        if ((gun623jz1[i] < wVEJ4yA) || (o98Fc0WVB < W1UnWXH3oq6[i]))
            MUyVgl05w = MUyVgl05w +1;
        if (W1UnWXH3oq6[i] < wVEJ4yA)
            wVEJ4yA = W1UnWXH3oq6[i];
        if (gun623jz1[i] > o98Fc0WVB)
            o98Fc0WVB = gun623jz1[i];
    }
    if (MUyVgl05w == 0)
        printf ("%d %d", wVEJ4yA, o98Fc0WVB);
    else
        printf ("no");
    return 0;
}

