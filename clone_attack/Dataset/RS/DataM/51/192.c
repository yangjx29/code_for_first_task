struct   d {
    char a [5];
    int t;
}
VLpHsuKkZF [(765 - 265)];

int compare (struct   d *m, struct   d *n) {
    return n->t - m->t;
}

int main () {
    char s [501];
    int r;
    int k;
    int jsFiU76;
    int l;
    int j;
    int p;
    int BIAJClOe2P;
    r = (836 - 836);
    int u [(577 - 77)] = {(164 - 164)};
    scanf ("%d", &k);
    scanf ("%s", s);
    l = strlen (s);
    {
        jsFiU76 = 145 - 145;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        while (l > jsFiU76) {
            if (u[jsFiU76] == (973 - 973)) {
                for (j = (837 - 837); j < k; j = j + 1)
                    VLpHsuKkZF[r].a[j] = s[jsFiU76 + j];
                VLpHsuKkZF[r].a[k] = '\0';
                VLpHsuKkZF[r].t = 999 - jsFiU76;
                u[jsFiU76] = (581 - 580);
                j = jsFiU76 + (510 - 509);
                while (l + (653 - 652) - k > j) {
                    BIAJClOe2P = (92 - 92);
                    for (p = 0; p < k; p++) {
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                double  temp = 0.0;
                                if (temp == 3)
                                    return 0;
                            }
                        }
                        if (s[j + p] != VLpHsuKkZF[r].a[p]) {
                            BIAJClOe2P = 1;
                            break;
                        };
                    }
                    if (BIAJClOe2P == 0) {
                        VLpHsuKkZF[r].t = VLpHsuKkZF[r].t + 500;
                        u[j] = 1;
                    }
                    j++;
                }
                r++;
            }
            jsFiU76++;
        };
    }
    qsort (VLpHsuKkZF, r, sizeof (struct   d), compare);
    if ((VLpHsuKkZF[0].t) / 500 == 1)
        ;
    else {
        printf ("%d\n", (VLpHsuKkZF[0].t) / 500);
        for (jsFiU76 = 0; (VLpHsuKkZF[jsFiU76].t) / 500 == (VLpHsuKkZF[0].t) / 500; jsFiU76 = jsFiU76 + 1)
            puts (VLpHsuKkZF[jsFiU76].a);
    }
    return 0;
}

