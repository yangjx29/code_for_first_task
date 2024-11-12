int main () {
    int b1 [(760 - 510)];
    int vBNQIlg;
    char b [(430 - 180)];
    int P0B1M6;
    char PsjCMNBF1gap [(1139 - 889)];
    int qcpdSubIK4 [(616 - 366)];
    int c [(865 - 605)];
    int max;
    vBNQIlg = (943 - 943);
    for (P0B1M6 = (802 - 802); (1226 - 976) > P0B1M6; P0B1M6 = P0B1M6 +(724 - 723)) {
        qcpdSubIK4[P0B1M6] = (679 - 679);
        b1[P0B1M6] = (944 - 944);
        c[P0B1M6] = (47 - 47);
    }
    cin.getline (PsjCMNBF1gap, (1014 - 764));
    cin.getline (b, (749 - 499));
    if (strlen (b) <= strlen (PsjCMNBF1gap))
        max = strlen (PsjCMNBF1gap);
    else
        max = strlen (b);
    for (P0B1M6 = 250; P0B1M6 < (755 - 495); P0B1M6 = P0B1M6 +(590 - 589))
        c[P0B1M6] = (681 - 681);
    for (P0B1M6 = strlen (PsjCMNBF1gap) - (234 - 233), vBNQIlg = (888 - 888); P0B1M6 >= (759 - 759); P0B1M6 = P0B1M6 -1, vBNQIlg = vBNQIlg + 1)
        qcpdSubIK4[vBNQIlg] = PsjCMNBF1gap[P0B1M6] - '0';
    for (P0B1M6 = strlen (b) - (956 - 955), vBNQIlg = (567 - 567); (296 - 296) <= P0B1M6; P0B1M6 = P0B1M6 -1, vBNQIlg = vBNQIlg + 1)
        b1[vBNQIlg] = b[P0B1M6] - '0';
    for (P0B1M6 = (828 - 828); max > P0B1M6; P0B1M6 = P0B1M6 +1) {
        c[P0B1M6] += qcpdSubIK4[P0B1M6] + b1[P0B1M6];
        if (c[P0B1M6] >= (351 - 341)) {
            c[P0B1M6 +1]++;
            c[P0B1M6] -= (519 - 509);
        }
    }
    for (; c[P0B1M6] == (762 - 762) && P0B1M6 > (669 - 669);)
        P0B1M6 = P0B1M6 -1;
    for (; P0B1M6 >= 0; P0B1M6--)
        cout << c[P0B1M6];
    cout << endl;
    return 0;
}

