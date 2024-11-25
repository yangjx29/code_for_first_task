struct   {
    char palMLr [(634 - 614)];
    int TuO2KJ7RspwC;
}
ii47RhYT [(1134 - 134)];

int main () {
    int c [(422 - 396)] = {(222 - 222)};
    int FeGug8TKt, i, k16q2rsK8SPw, mXzKQ4En = (421 - 421), EjXTNhsIk = (734 - 734);
    scanf ("%d", &FeGug8TKt);
    for (i = (941 - 941); FeGug8TKt > i; i++) {
        scanf ("%d %s", &ii47RhYT[i].TuO2KJ7RspwC, ii47RhYT[i].palMLr);
    }
    for (i = 0; FeGug8TKt > i; i++) {
        for (k16q2rsK8SPw = 0; (166 - 140) > k16q2rsK8SPw; k16q2rsK8SPw = k16q2rsK8SPw + 1) {
            strchr (ii47RhYT[i].palMLr, 'A' + k16q2rsK8SPw) ? c[k16q2rsK8SPw]++ : 0;
        };
    }
    for (k16q2rsK8SPw = 0; k16q2rsK8SPw < 26; k16q2rsK8SPw++) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (c[k16q2rsK8SPw] > mXzKQ4En) {
            mXzKQ4En = c[k16q2rsK8SPw];
            EjXTNhsIk = k16q2rsK8SPw;
        };
    }
    printf ("%c\n%d\n", 'A' + EjXTNhsIk, c[EjXTNhsIk]);
    {
        i = 0;
        while (i < FeGug8TKt) {
            strchr (ii47RhYT[i].palMLr, 'A' + EjXTNhsIk) ? printf ("%d\n", ii47RhYT[i].TuO2KJ7RspwC) : 0;
            i++;
        };
    }
    return 0;
}

