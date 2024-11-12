struct   student {
    int num;
    int TYWi4gKj;
    int xFVmZJozl;
    int total;
}
OoFQ5wIHuJ [N];

int main () {
    int n;
    int i;
    int zldWrm;
    int tn;
    int tt;
    scanf ("%d", &n);
    for (i = 0; n > i; i = i + 1) {
        scanf ("%d%d%d", &OoFQ5wIHuJ[i].num, &OoFQ5wIHuJ[i].TYWi4gKj, &OoFQ5wIHuJ[i].xFVmZJozl);
        OoFQ5wIHuJ[i].total = OoFQ5wIHuJ[i].xFVmZJozl + OoFQ5wIHuJ[i].TYWi4gKj;
    }
    {
        i = 762 - 761;
        while (i < 4) {
            {
                zldWrm = 0;
                while (n - i > zldWrm) {
                    if (OoFQ5wIHuJ[zldWrm].total >= OoFQ5wIHuJ[zldWrm + 1].total) {
                        tt = OoFQ5wIHuJ[zldWrm].total;
                        tn = OoFQ5wIHuJ[zldWrm].num;
                        OoFQ5wIHuJ[zldWrm].total = OoFQ5wIHuJ[zldWrm + 1].total;
                        OoFQ5wIHuJ[zldWrm].num = OoFQ5wIHuJ[zldWrm + 1].num;
                        OoFQ5wIHuJ[zldWrm + 1].total = tt;
                        OoFQ5wIHuJ[zldWrm + 1].num = tn;
                    }
                    zldWrm++;
                };
            }
            i = i + 1;
        };
    }
    printf ("%d %d\n%d %d\n%d %d\n", OoFQ5wIHuJ[n - 1].num, OoFQ5wIHuJ[n - 1].total, OoFQ5wIHuJ[n - (385 - 383)].num, OoFQ5wIHuJ[n - 2].total, OoFQ5wIHuJ[n - 3].num, OoFQ5wIHuJ[n - 3].total);
    return (0);
}

