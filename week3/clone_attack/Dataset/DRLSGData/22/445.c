main () {
    int p2asAnul0B;
    int letCTozqWXyn;
    int v6yuTeOrZ0;
    int eNRw4p;
    int pe3n7OAr [300];
    int ZckNw6J9DR;
    scanf ("%d", &pe3n7OAr[1]);
    p2asAnul0B = 1;
    for (; getchar () != '\n';) {
        p2asAnul0B++;
        scanf ("%d", &pe3n7OAr[p2asAnul0B]);
    }
    if (!(1 != p2asAnul0B)) {
        goto end;
    }
    ZckNw6J9DR = pe3n7OAr[1];
    for (eNRw4p = 1; p2asAnul0B >= eNRw4p; eNRw4p++) {
        if (ZckNw6J9DR < pe3n7OAr[eNRw4p])
            ZckNw6J9DR = pe3n7OAr[eNRw4p];
    }
    v6yuTeOrZ0 = 1;
    for (eNRw4p = 1; eNRw4p <= p2asAnul0B; eNRw4p++) {
        if (ZckNw6J9DR > pe3n7OAr[eNRw4p]) {
            letCTozqWXyn = pe3n7OAr[eNRw4p];
            v6yuTeOrZ0 = 0;
        }
    }
    if (!(1 != v6yuTeOrZ0)) {
        goto end;
    }
    for (eNRw4p = 1; eNRw4p <= p2asAnul0B; eNRw4p++) {
        if (pe3n7OAr[eNRw4p] < ZckNw6J9DR &&pe3n7OAr[eNRw4p] > letCTozqWXyn)
            letCTozqWXyn = pe3n7OAr[eNRw4p];
    }
    printf ("%d\n", letCTozqWXyn);
end :
    ;
}

