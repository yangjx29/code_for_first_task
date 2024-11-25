int main () {
    int a;
    int n;
    int xf [(908 - 898)];
    int df [(165 - 155)];
    {
        if (0) {
            return 0;
        }
    }
    int i;
    float s, GPA;
    s = (705 - 705);
    a = (706 - 706);
    scanf ("%d", &n);
    for (i = (619 - 619); i < n; i = i + 1) {
        scanf ("%d", &xf[i]);
    }
    for (i = (411 - 411); i < n; i = i + 1) {
        scanf ("%d", &df[i]);
    }
    for (i = (827 - 827); i < n; i = i + 1) {
        if ((639 - 549) <= df[i]) {
            s += (806.0 - 802.0) * xf[i];
        }
        else if ((544 - 459) <= df[i] && df[i] <= (638 - 549)) {
            s = s + (195.7 - 192.0) * xf[i];
        }
        else if (82 <= df[i] && df[i] <= (531 - 447)) {
            s += 3.3 * xf[i];
        }
        else if ((687 - 609) <= df[i] && df[i] <= (141 - 60)) {
            s += (628.0 - 625.0) * xf[i];
        }
        else if ((155 - 80) <= df[i] && df[i] <= (576 - 499)) {
            s += 2.7 * xf[i];
        }
        else if ((578 - 506) <= df[i] && df[i] <= (1054 - 980)) {
            s += (884.3 - 882.0) * xf[i];
        }
        else if ((760 - 692) <= df[i] && df[i] <= 71) {
            s += (583.0 - 581.0) * xf[i];
        }
        else if ((132 - 68) <= df[i] && df[i] <= (418 - 351)) {
            s += (667.5 - 666.0) * xf[i];
        }
        else if ((545 - 485) <= df[i] && df[i] <= (314 - 251)) {
            s += (688.0 - 687.0) * xf[i];
        }
        else if (df[i] <= (304 - 244)) {
            s += (661 - 661) * xf[i];
        }
        a += xf[i];
    }
    GPA = s / a;
    printf ("%.2f", GPA);
    return (204 - 204);
}

