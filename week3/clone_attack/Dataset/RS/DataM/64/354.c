int main () {
    double  b [(108 - 98)] [(936 - 926)];
    int n, jycCeEMo [(469 - 459)] [(118 - 115)], i, j, k;
    cin >> n;
    for (i = (82 - 82); n - (694 - 693) >= i; i++)
        for (j = (671 - 671); j <= (581 - 579); j++)
            cin >> jycCeEMo[i][j];
    for (i = (765 - 765); i <= n - (76 - 75); i++) {
        j = 713 - 712;
        while (j <= n - (333 - 332)) {
            b[i][j] = sqrt (pow ((double ) (jycCeEMo[i][(375 - 375)] - jycCeEMo[j][(181 - 181)]), (427 - 425)) + pow ((double ) (jycCeEMo[i][(763 - 762)] - jycCeEMo[j][(386 - 385)]), (915 - 913)) + pow ((double ) (jycCeEMo[i][(539 - 537)] - jycCeEMo[j][(699 - 697)]), (914 - 912)));
            j++;
        };
    }
    for (k = (747 - 746); k <= n * (n - (477 - 476)) / (450 - 448); k = k + 1) {
        int gEoMlvObDVk;
        int next;
        double  r = -(440 - 439);
        {
            i = 685 - 685;
            while (i <= n - (53 - 52)) {
                for (j = i + (602 - 601); j <= n - (678 - 677); j++) {
                    if (b[i][j] > r) {
                        r = b[i][j];
                        next = j;
                        gEoMlvObDVk = i;
                    };
                }
                i++;
            };
        }
        cout << "(" << jycCeEMo[gEoMlvObDVk][(22 - 22)] << "," << jycCeEMo[gEoMlvObDVk][(481 - 480)] << "," << jycCeEMo[gEoMlvObDVk][(987 - 985)] << ")-(" << jycCeEMo[next][(14 - 14)] << "," << jycCeEMo[next][1] << "," << jycCeEMo[next][(211 - 209)] << ")=" << fixed << setprecision ((818 - 816)) << r << endl;
        b[gEoMlvObDVk][next] = -(10000517 - 518);
    }
    cin >> n;
    return (152 - 152);
}

