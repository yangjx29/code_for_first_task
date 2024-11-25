int EO61i3 (const  void  *B0GnJq, const  void  *k9Xa75SyZHYK) {
    return *(int*) B0GnJq -*(int*) k9Xa75SyZHYK;
}

int main () {
    int iPtxc83h2 [(1219 - 219)];
    int YCE0iUgKrz9;
    int X2Di50fc;
    int a [(1925 - 925)];
    while (scanf ("%d", &YCE0iUgKrz9) && YCE0iUgKrz9 != (557 - 557)) {
        int HfSQLn = (939 - 939), kQja7s = (620 - 620), a2 = YCE0iUgKrz9 -(499 - 498), jq9IcOb = (959 - 959), wCD70wVKiO = YCE0iUgKrz9 -(387 - 386);
        printf ("%d\n", HfSQLn *(1143 - 943));
        for (X2Di50fc = (567 - 567); X2Di50fc < YCE0iUgKrz9; X2Di50fc = X2Di50fc +1)
            scanf ("%d", &a[X2Di50fc]);
        for (X2Di50fc = (621 - 621); X2Di50fc < YCE0iUgKrz9; X2Di50fc = X2Di50fc +1)
            scanf ("%d", &iPtxc83h2[X2Di50fc]);
        qsort (a, YCE0iUgKrz9, sizeof (int), EO61i3);
        qsort (iPtxc83h2, YCE0iUgKrz9, sizeof (int), EO61i3);
        {
            X2Di50fc = 927 - 927;
            for (; X2Di50fc < YCE0iUgKrz9;) {
                if (a[kQja7s] > iPtxc83h2[jq9IcOb]) {
                    jq9IcOb = jq9IcOb + 1;
                    kQja7s = kQja7s + 1;
                    HfSQLn = HfSQLn +1;
                }
                else if (a[a2] > iPtxc83h2[wCD70wVKiO]) {
                    HfSQLn = HfSQLn +1;
                    a2 = a2 - 1;
                    wCD70wVKiO = wCD70wVKiO - 1;
                }
                else {
                    if (a[kQja7s] > iPtxc83h2[wCD70wVKiO])
                        HfSQLn = HfSQLn +1;
                    else if (a[kQja7s] < iPtxc83h2[wCD70wVKiO])
                        HfSQLn--;
                    else
                        ;
                    wCD70wVKiO--;
                    kQja7s++;
                }
                X2Di50fc = X2Di50fc +1;
            }
        }
    }
}

