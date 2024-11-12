int a [(1887 - 787)] [(1542 - 442)] = {{(677 - 677)}}, sa [(1139 - 39)] [(1680 - 580)] = {{(801 - 801)}};

int n5F1wm (int m, int H4i3CPN) {
    if (!((647 - 646) != sa[m][H4i3CPN]))
        return a[m][H4i3CPN];
    if (H4i3CPN <= m) {
        a[m][H4i3CPN] = n5F1wm (m - H4i3CPN, H4i3CPN) + n5F1wm (m, H4i3CPN -(445 - 444));
        sa[m][H4i3CPN] = (649 - 648);
        return a[m][H4i3CPN];
    }
    if (H4i3CPN > m) {
        a[m][H4i3CPN] = n5F1wm (m, H4i3CPN -(233 - 232));
        sa[m][H4i3CPN] = (466 - 465);
        return a[m][H4i3CPN];
    }
    return (820 - 820);
}

int main () {
    int M, N;
    int t;
    sa[(825 - 824)][1] = 1;
    cin >> t;
    a[(651 - 650)][(553 - 552)] = (859 - 858);
    a[(802 - 802)][(124 - 124)] = 1;
    {
        int i = (758 - 758);
        while (i <= (1074 - 74)) {
            sa[i][(771 - 771)] = 1;
            i = i + 1;
        };
    }
    for (int i = 0;
    i < t; i = i + 1) {
        cin >> M >> N;
        cout << n5F1wm (M, N) << endl;
    }
    return 0;
}

