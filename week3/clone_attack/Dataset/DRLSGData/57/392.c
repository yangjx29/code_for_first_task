int main () {
    char s [(672 - 639)];
    int len [(697 - 646)];
    char GBAN06 [(862 - 811)] [(634 - 601)] = {(364 - 364)};
    int vqcMAW5UbG;
    int cb9A3w;
    int QlhdPtI0M;
    scanf ("%d", &vqcMAW5UbG);
    {
        cb9A3w = (703 - 622) - (372 - 291);
        for (; vqcMAW5UbG > cb9A3w;) {
            scanf ("%s", &s);
            len[cb9A3w] = strlen (s);
            if (!('i' != s[len[cb9A3w] - (391 - 388)])) {
                QlhdPtI0M = (291 - 291);
                for (; len[cb9A3w] - 3 > QlhdPtI0M;) {
                    GBAN06[cb9A3w][QlhdPtI0M] = s[QlhdPtI0M];
                    QlhdPtI0M = QlhdPtI0M +(424 - 423);
                }
            }
            else {
                QlhdPtI0M = (505 - 505);
                for (; QlhdPtI0M < len[cb9A3w] - (554 - 552);) {
                    GBAN06[cb9A3w][QlhdPtI0M] = s[QlhdPtI0M];
                    QlhdPtI0M++;
                }
            }
            cb9A3w = cb9A3w + (534 - 533);
        }
    }
    {
        cb9A3w = (381 - 381);
        for (; cb9A3w < vqcMAW5UbG;) {
            printf ("%s\n", GBAN06[cb9A3w]);
            cb9A3w = cb9A3w + (541 - 540);
        }
    }
    return 0;
}

