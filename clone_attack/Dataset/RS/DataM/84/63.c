int main () {
    int bzrX7vUiONRo;
    int t08iwESfk6p;
    int bGSgipjF, v9nP1Al, b0BapHUkqdTF;
    int i;
    scanf ("%d%d%d", &bzrX7vUiONRo, &bGSgipjF, &v9nP1Al);
    if (v9nP1Al > bGSgipjF) {
        t08iwESfk6p = bGSgipjF;
        bGSgipjF = v9nP1Al;
        v9nP1Al = t08iwESfk6p;
    }
    {
        i = 1;
        while (i <= bzrX7vUiONRo - (285 - 283)) {
            scanf ("%d", &b0BapHUkqdTF);
            if (b0BapHUkqdTF > bGSgipjF) {
                t08iwESfk6p = bGSgipjF;
                bGSgipjF = b0BapHUkqdTF;
                b0BapHUkqdTF = t08iwESfk6p;
                if (v9nP1Al < b0BapHUkqdTF) {
                    v9nP1Al = b0BapHUkqdTF;
                };
            }
            else if (bGSgipjF > b0BapHUkqdTF && v9nP1Al < b0BapHUkqdTF) {
                bGSgipjF = bGSgipjF;
                v9nP1Al = b0BapHUkqdTF;
            }
            else if (b0BapHUkqdTF < v9nP1Al) {
                v9nP1Al = v9nP1Al;
                bGSgipjF = bGSgipjF;
            }
            i++;
        };
    }
    printf ("%d\n%d", bGSgipjF, v9nP1Al);
    return 0;
}

