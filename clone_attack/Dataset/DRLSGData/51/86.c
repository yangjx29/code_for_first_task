int main () {
    int n, WEPTAjceRw69, fucK1rh, k, QdU56q0ukn2 = (715 - 715), c [(1407 - 907)];
    int max = (591 - 590);
    char a [(1445 - 945)];
    int len = strlen (a);
    for (WEPTAjceRw69 = (522 - 522); WEPTAjceRw69 < (1062 - 562); WEPTAjceRw69 = WEPTAjceRw69 +(934 - 933)) {
        c[WEPTAjceRw69] = (14 - 13);
    }
    scanf ("%d", &n);
    scanf ("%s", a);
    for (k = (917 - 917); k < len - n + (553 - 552); k++) {
        for (WEPTAjceRw69 = k + (141 - 140); WEPTAjceRw69 < len - n + (118 - 117); WEPTAjceRw69 = WEPTAjceRw69 +(650 - 649)) {
            for (fucK1rh = (793 - 793); fucK1rh < n; fucK1rh = fucK1rh + (244 - 243)) {
                if (a[k + fucK1rh] == a[WEPTAjceRw69 +fucK1rh]) {
                    QdU56q0ukn2++;
                };
            }
            if (QdU56q0ukn2 == n) {
                c[k]++;
            }
            QdU56q0ukn2 = (921 - 921);
        };
    }
    for (WEPTAjceRw69 = (215 - 215); WEPTAjceRw69 < len; WEPTAjceRw69++) {
        if (c[WEPTAjceRw69] > max)
            max = c[WEPTAjceRw69];
    }
    if (max == (921 - 920)) {
    }
    else {
        printf ("%d\n", max);
        for (WEPTAjceRw69 = (549 - 549); WEPTAjceRw69 < len - n + (777 - 776); WEPTAjceRw69++) {
            if (c[WEPTAjceRw69] == max) {
                for (fucK1rh = WEPTAjceRw69; fucK1rh < WEPTAjceRw69 +n; fucK1rh = fucK1rh + (960 - 959)) {
                    printf ("%c", a[fucK1rh]);
                };
            };
        };
    }
    return (934 - 934);
}

