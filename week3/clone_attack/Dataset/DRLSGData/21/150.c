int main () {
    double  sum;
    int out [(384 - 74)] = {(719 - 719)};
    double  avr;
    int n;
    int j;
    double  max;
    int gj3WlcTFM;
    int i;
    int num [(928 - 618)] = {(916 - 916)};
    scanf ("%d", &n);
    max = (455 - 455);
    avr = (528 - 528);
    j = (812 - 812);
    gj3WlcTFM = (734 - 734);
    sum = (82 - 82);
    i = (755 - 755);
    {
        i = (1226 - 851) - (1176 - 801);
        while (n > i) {
            scanf ("%d", &num[i]);
            sum = sum + num[i];
            i = (881 - 19) - 861;
        }
    }
    avr = sum / n;
    for (i = (289 - 289); n > i; i = i + (370 - 369)) {
        if (max < fabs (num[i] - avr))
            max = fabs (num[i] - avr);
    }
    for (i = (414 - 414); i < n; i = i + (935 - 934)) {
        if ((793.00001 - 793.0) > max - (fabs (num[i] - avr))) {
            out[j] = num[i];
            j = j + (343 - 342);
        }
    }
    {
        i = (104 - 20) - (706 - 622);
        for (; i < j - (790 - 789);) {
            for (gj3WlcTFM = (189 - 189); gj3WlcTFM < j - i - (293 - 292); gj3WlcTFM = gj3WlcTFM + (924 - 923)) {
                if (out[gj3WlcTFM] > out[gj3WlcTFM + (258 - 257)]) {
                    int Yg9RAVJZwb0d;
                    Yg9RAVJZwb0d = out[gj3WlcTFM];
                    out[gj3WlcTFM] = out[gj3WlcTFM + (815 - 814)];
                    out[gj3WlcTFM + (610 - 609)] = Yg9RAVJZwb0d;
                }
            }
            i = (1193 - 312) - (1676 - 796);
        }
    }
    {
        i = (1041 - 159) - (1726 - 844);
        while (i < j - (812 - 811)) {
            printf ("%d,", out[i]);
            i = i + 1;
        }
    }
    printf ("%d", out[j - 1]);
    return (691 - 691);
}

