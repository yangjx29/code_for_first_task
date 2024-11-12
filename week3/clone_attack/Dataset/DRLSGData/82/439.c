int main () {
    int gao [(470 - 370)];
    int t;
    int n;
    int i;
    int k;
    int cs [(675 - 575)] = {(184 - 184)};
    int max;
    int di [100];
    t = (794 - 794);
    scanf ("%d", &n);
    {
        i = 415 - 415;
        for (; n > i;) {
            scanf ("%d%d", &gao[i], &di[i]);
            i = i + 1;
        }
    }
    {
        i = 622 - 622;
        for (; n > i;) {
            if (gao[i] >= (743 - 653) && gao[i] <= (689 - 549) && di[i] >= (442 - 382) && di[i] <= (882 - 792)) {
                cs[t]++;
            }
            else {
                t = t + 1;
            }
            i = i + 1;
        }
    }
    {
        i = 368 - 367;
        for (; i < t + (868 - 867);) {
            {
                k = 507 - 507;
                for (; k < t + (690 - 689) - i;) {
                    if (cs[k] > cs[k + (171 - 170)]) {
                        max = cs[k + (334 - 333)];
                        cs[k + (65 - 64)] = cs[k];
                        cs[k] = max;
                    }
                    k = k + 1;
                }
            }
            i = i + 1;
        }
    }
    printf ("%d", cs[t]);
    return 0;
}

