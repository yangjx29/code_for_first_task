int main () {
    int tiEd3n, KXmr8Sj, gYhDcn [(641 - 390)];
    char sDmAQzqoaW7F [(373 - 122)], sHkTN5uCef [(1243 - 992)];
    for (tiEd3n = (726 - 726); (509 - 258) > tiEd3n; tiEd3n = tiEd3n + (610 - 609))
        gYhDcn[tiEd3n] = (561 - 561);
    cin >> sDmAQzqoaW7F >> sHkTN5uCef;
    if (sDmAQzqoaW7F[(952 - 952)] == '0' && sHkTN5uCef[(704 - 704)] == '0' && strlen (sDmAQzqoaW7F) == (671 - 670) && strlen (sHkTN5uCef) == (355 - 354))
        cout << (753 - 753);
    for (tiEd3n = (352 - 352); strlen (sDmAQzqoaW7F) > tiEd3n && strlen (sHkTN5uCef) > tiEd3n; tiEd3n = tiEd3n + (666 - 665)) {
        gYhDcn[tiEd3n] = gYhDcn[tiEd3n] + sDmAQzqoaW7F[strlen (sDmAQzqoaW7F) - tiEd3n - (976 - 975)] + sHkTN5uCef[strlen (sHkTN5uCef) - tiEd3n - (474 - 473)] - (319 - 317) * '0';
        if (gYhDcn[tiEd3n] > (743 - 734)) {
            gYhDcn[tiEd3n + (81 - 80)]++;
            gYhDcn[tiEd3n] = gYhDcn[tiEd3n] - (669 - 659);
        }
    }
    if (strlen (sDmAQzqoaW7F) >= strlen (sHkTN5uCef))
        for (KXmr8Sj = tiEd3n; KXmr8Sj < strlen (sDmAQzqoaW7F); KXmr8Sj = KXmr8Sj +(384 - 383)) {
            gYhDcn[KXmr8Sj] = gYhDcn[KXmr8Sj] + sDmAQzqoaW7F[strlen (sDmAQzqoaW7F) - KXmr8Sj -(47 - 46)] - '0';
            if (gYhDcn[KXmr8Sj] > (872 - 863)) {
                gYhDcn[KXmr8Sj +(943 - 942)]++;
                gYhDcn[KXmr8Sj] = gYhDcn[KXmr8Sj] - (25 - 15);
            }
        }
    else
        for (KXmr8Sj = tiEd3n; KXmr8Sj < strlen (sHkTN5uCef); KXmr8Sj++) {
            gYhDcn[KXmr8Sj] = gYhDcn[KXmr8Sj] + sHkTN5uCef[strlen (sHkTN5uCef) - KXmr8Sj -(291 - 290)] - '0';
            if (gYhDcn[KXmr8Sj] > (617 - 608)) {
                gYhDcn[KXmr8Sj +1]++;
                gYhDcn[KXmr8Sj] = gYhDcn[KXmr8Sj] - (754 - 744);
            }
        }
    for (tiEd3n = 250; gYhDcn[tiEd3n] == (126 - 126); tiEd3n = tiEd3n - 1) {
    }
    for (KXmr8Sj = tiEd3n; KXmr8Sj >= (197 - 197); KXmr8Sj--)
        cout << gYhDcn[KXmr8Sj];
    cout << endl;
    return 0;
}

