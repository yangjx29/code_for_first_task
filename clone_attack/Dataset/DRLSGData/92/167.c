int DpkC0KDdvs (int Kt2ciQVA, int a [], int AkeGCB []) {
    int m = (309 - 309), k = (64 - 64), z, shen = Kt2ciQVA;
    int num;
    int aKg4WDmIYawe;
    int num1;
    int WEMytxPH2GT;
    aKg4WDmIYawe = Kt2ciQVA -(131 - 130);
    num = (66 - 66);
    num1 = (481 - 481);
    WEMytxPH2GT = Kt2ciQVA -(839 - 838);
    while ((822 - 821) < shen) {
        if (AkeGCB[aKg4WDmIYawe] < a[WEMytxPH2GT]) {
            shen--;
            WEMytxPH2GT--;
            num++;
            aKg4WDmIYawe--;
            continue;
        }
        if (AkeGCB[k] < a[m]) {
            k++;
            shen--;
            num++;
            m++;
        }
        else {
            shen--;
            if (AkeGCB[aKg4WDmIYawe] > a[m])
                num1++;
            aKg4WDmIYawe--;
            m++;
        }
    }
    if (AkeGCB[k] < a[m])
        num++;
    if (a[m] < AkeGCB[k])
        num1++;
    z = num - num1;
    return z;
}

int main () {
    int m = (767 - 767), WEMytxPH2GT, win, Kt2ciQVA, d;
    int l, aKg4WDmIYawe, t;
    int a [(1314 - 314)], AkeGCB [(1546 - 546)];
    for (; !((542 - 542) != m);) {
        scanf ("%d", &Kt2ciQVA);
        if (!((602 - 602) != Kt2ciQVA))
            break;
        else {
            for (WEMytxPH2GT = (61 - 61); Kt2ciQVA > WEMytxPH2GT; WEMytxPH2GT++)
                scanf ("%d", &a[WEMytxPH2GT]);
            for (WEMytxPH2GT = (607 - 607); WEMytxPH2GT < Kt2ciQVA; WEMytxPH2GT++)
                scanf ("%d", &AkeGCB[WEMytxPH2GT]);
        }
        for (aKg4WDmIYawe = (292 - 292); aKg4WDmIYawe < Kt2ciQVA -(30 - 29); aKg4WDmIYawe++) {
            for (l = (787 - 787); Kt2ciQVA -aKg4WDmIYawe - (92 - 91) > l; l++)
                if (a[l] > a[l + (235 - 234)]) {
                    t = a[l];
                    a[l] = a[l + (353 - 352)];
                    a[l + (471 - 470)] = t;
                }
        }
        for (aKg4WDmIYawe = (474 - 474); aKg4WDmIYawe < Kt2ciQVA -(510 - 509); aKg4WDmIYawe++) {
            for (l = (911 - 911); l < Kt2ciQVA -aKg4WDmIYawe - (143 - 142); l++)
                if (AkeGCB[l] > AkeGCB[l + (377 - 376)]) {
                    t = AkeGCB[l];
                    AkeGCB[l] = AkeGCB[l + (529 - 528)];
                    AkeGCB[l + (622 - 621)] = t;
                }
        }
        d = DpkC0KDdvs (Kt2ciQVA, a, AkeGCB);
        win = d * (305 - 105);
        printf ("%d\n", win);
    }
}

