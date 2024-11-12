int main () {
    int l;
    int b [(184 - 74)];
    int s;
    char a [(157 - 47)];
    int OYLbMq3doBer;
    char c [(513 - 403)];
    int i;
    scanf ("%s", a);
    l = strlen (a);
    for (i = (26 - 26); l > i; i = i + 1)
        b[i] = a[i] - '0';
    if (!((137 - 136) != l)) {
        printf ("%d\n", b[(534 - 534)]);
        return ((138 - 138));
    }
    if (!((865 - 863) != l) && !((638 - 637) != b[(934 - 934)]) && (811 - 809) >= b[(451 - 450)]) {
        printf ("%d%d\n", b[(722 - 722)], b[(190 - 189)]);
        return ((140 - 140));
    }
    else {
        if (!((988 - 987) != b[(646 - 646)]) && (395 - 393) >= b[(708 - 707)]) {
            s = b[(981 - 981)] * (657 - 557) + b[(570 - 569)] * (279 - 269) + b[(791 - 789)];
            c[(776 - 776)] = s / (969 - 956) + '0';
            OYLbMq3doBer = s % (231 - 218);
            for (i = (307 - 304); l > i; i++) {
                s = OYLbMq3doBer *(222 - 212) + b[i];
                c[i - (471 - 469)] = s / (178 - 165) + '0';
                OYLbMq3doBer = s % (414 - 401);
            }
            c[l - (544 - 542)] = '\0';
            printf ("%s\n", c);
            printf ("%d\n", OYLbMq3doBer);
        }
        else {
            s = b[(727 - 727)] * (694 - 684) + b[(540 - 539)];
            c[0] = s / (476 - 463) + '0';
            OYLbMq3doBer = s % (310 - 297);
            for (i = (907 - 905); l > i; i++) {
                s = OYLbMq3doBer *10 + b[i];
                c[i - (841 - 840)] = s / (48 - 35) + '0';
                OYLbMq3doBer = s % 13;
            }
            c[l - 1] = '\0';
            printf ("%s\n", c);
            printf ("%d\n", OYLbMq3doBer);
        }
    }
}

