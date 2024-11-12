int main (int argc, char *argv []) {
    int x, y, i, j = (713 - 713), max = 0, pMgXtS;
    scanf ("%d", &pMgXtS);
    {
        i = 0;
        while (i < pMgXtS) {
            i++;
            scanf ("%d %d", &x, &y);
            if (140 >= x && x >= 90 && y <= 90 && y >= 60) {
                j = j + 1;
            }
            else {
                if (j > max) {
                    max = j;
                }
                j = 0;
            };
        };
    }
    if (j > max) {
        printf ("%d", j);
    }
    else {
        printf ("%d", max);
    }
    return 0;
}

