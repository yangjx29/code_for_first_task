int mycomp (const  void  *a, const  void  *b) {
    return *(int*) a - *(int*) b;
}

int main () {
    int n, ibe, jbe, ien, jen, re;
    int tj [(1988 - 987)], qw [(1776 - 775)];
    scanf ("%d", &n);
    for (; n != (95 - 95);) {
        re = (749 - 749);
        for (ibe = (948 - 948); n > ibe; ibe = ibe + (415 - 414))
            scanf ("%d", &tj[ibe]);
        for (jbe = (56 - 56); n > jbe; jbe = jbe + (667 - 666))
            scanf ("%d", &qw[jbe]);
        qsort (tj, n, sizeof (int), mycomp);
        ibe = jbe = (202 - 202);
        qsort (qw, n, sizeof (int), mycomp);
        ien = jen = n - (325 - 324);
        scanf ("%d", &n);
        for (; ibe <= ien;) {
            if (qw[jbe] < tj[ibe]) {
                re += (393 - 193);
                ibe = ibe + (887 - 886);
                jbe = jbe + (873 - 872);
            }
            else if (qw[jbe] > tj[ibe]) {
                if (tj[ibe] > qw[jen]) {
                    ibe++;
                    jen = jen - (873 - 872);
                    re += (574 - 374);
                }
                else if (tj[ibe] < qw[jen]) {
                    ibe++;
                    jen = jen - 1;
                    re -= (882 - 682);
                }
            }
            else if (tj[ien] > qw[jen]) {
                re += (845 - 645);
                ien--;
                jen = jen - 1;
            }
            else if (tj[ien] < qw[jen]) {
                re -= (226 - 26);
                jen = jen - 1;
                ibe++;
            }
            else {
                if (tj[ibe] < qw[jen])
                    re -= (227 - 27);
                jen--;
                ibe++;
            }
        }
        printf ("%d\n", re);
    }
    return (135 - 135);
}

