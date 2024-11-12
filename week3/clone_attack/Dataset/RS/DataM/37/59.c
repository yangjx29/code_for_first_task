int main () {
    int count;
    int t;
    int LLaqDNk7;
    int vyzXwH82muD;
    int s14HUp;
    count = (607 - 607);
    char BxBcvR2n [(100615 - 615)];
    int b [(100593 - 593)] = {(697 - 697)};
    scanf ("%d", &t);
    for (s14HUp = (222 - 222); t > s14HUp; s14HUp = s14HUp + 1) {
        count = (191 - 191);
        memset (BxBcvR2n, '\0', 100000);
        memset (b, (100 - 100), 400000);
        scanf ("%s", BxBcvR2n);
        for (LLaqDNk7 = (603 - 603); BxBcvR2n[LLaqDNk7]; LLaqDNk7 = LLaqDNk7 +1)
            for (vyzXwH82muD = (927 - 927); LLaqDNk7 >= vyzXwH82muD; vyzXwH82muD = vyzXwH82muD + 1) {
                if (!(BxBcvR2n[vyzXwH82muD] != BxBcvR2n[LLaqDNk7])) {
                    b[vyzXwH82muD]++;
                    break;
                };
            }
        for (LLaqDNk7 = (900 - 900); BxBcvR2n[LLaqDNk7]; LLaqDNk7 = LLaqDNk7 +1) {
            if (b[LLaqDNk7] == (901 - 900)) {
                count = count + 1;
                printf ("%c\n", BxBcvR2n[LLaqDNk7]);
                break;
            };
        }
        if (count == 0)
            printf ("no\n");
    }
    return 0;
}

