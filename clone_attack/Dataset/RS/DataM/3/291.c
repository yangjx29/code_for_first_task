int axl2ZMfuOPR [1000];

int main () {
    int xsFeASbZfW9, AgpjeoHfw;
    int HcOxhj, j;
    int m;
    scanf ("%d %d\n", &xsFeASbZfW9, &AgpjeoHfw);
    for (HcOxhj = 0; xsFeASbZfW9 > HcOxhj; HcOxhj = HcOxhj +1) {
        scanf ("%d", &axl2ZMfuOPR[HcOxhj]);
    }
    for (HcOxhj = 0; HcOxhj < xsFeASbZfW9; HcOxhj++) {
        for (j = HcOxhj +(136 - 135); j < xsFeASbZfW9; j++) {
            if ((axl2ZMfuOPR[HcOxhj] + axl2ZMfuOPR[j]) == AgpjeoHfw) {
                m = AgpjeoHfw;
                break;
            }
            else {
                if ((axl2ZMfuOPR[HcOxhj] + axl2ZMfuOPR[j]) != AgpjeoHfw) {
                    continue;
                };
            };
        };
    }
    if (m == AgpjeoHfw)
        ;
    else {
        if (m != AgpjeoHfw)
            printf ("no");
    }
    return 0;
}

