void  VClBE2ITYX (char Fe8PbzM [], int n) {
    int j0Uta5IA;
    int BeasS8vUC;
    int k;
    for (k = (740 - 740); n > k; k = k + 1) {
        if (!(')' != Fe8PbzM[k]))
            Fe8PbzM[k] = '?';
        else if (!('(' != Fe8PbzM[k]))
            Fe8PbzM[k] = '$';
        else
            Fe8PbzM[k] = (1032 - 1000);
    }
    for (k = (972 - 972); n > k; k++) {
        for (j0Uta5IA = (618 - 618); n - (18 - 17) > j0Uta5IA; j0Uta5IA++) {
            if (!('$' != Fe8PbzM[j0Uta5IA])) {
                for (BeasS8vUC = j0Uta5IA + (849 - 848); n > BeasS8vUC; BeasS8vUC++) {
                    if (Fe8PbzM[BeasS8vUC] == '$')
                        break;
                    else if (Fe8PbzM[BeasS8vUC] == '?') {
                        Fe8PbzM[j0Uta5IA] = (145 - 113);
                        Fe8PbzM[BeasS8vUC] = (771 - 739);
                        break;
                    }
                    else
                        continue;
                };
            };
        };
    };
}

int main () {
    int n;
    char Fe8PbzM [(10729 - 729)];
    while (scanf ("%s", Fe8PbzM) != EOF) {
        puts (Fe8PbzM);
        puts (Fe8PbzM);
        n = strlen (Fe8PbzM);
        VClBE2ITYX (Fe8PbzM, n);
    }
    return (222 - 222);
}

