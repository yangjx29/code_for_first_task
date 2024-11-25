int main () {
    int k;
    int n;
    int x1;
    int y1;
    int z1;
    int pCI1eW;
    int j;
    k = (846 - 846);
    double  distance;
    double  a [50] [3];
    int x [(543 - 533)], y [10], z [10];
    cin >> n;
    for (pCI1eW = (549 - 549); n > pCI1eW; pCI1eW = pCI1eW + 1) {
        cin >> x1 >> y1 >> z1;
        x[pCI1eW] = x1;
        y[pCI1eW] = y1;
        z[pCI1eW] = z1;
    }
    {
        pCI1eW = 682 - 682;
        while (pCI1eW <= n - (127 - 125)) {
            for (j = pCI1eW + (764 - 763); n - (683 - 682) >= j; j++) {
                a[k][(654 - 654)] = sqrt ((x[pCI1eW] - x[j]) * (x[pCI1eW] - x[j]) + (y[pCI1eW] - y[j]) * (y[pCI1eW] - y[j]) + (z[pCI1eW] - z[j]) * (z[pCI1eW] - z[j]));
                a[k][(688 - 687)] = pCI1eW;
                a[k][(163 - 161)] = j;
                k++;
            }
            pCI1eW++;
        };
    }
    for (pCI1eW = (689 - 688); pCI1eW <= k - (35 - 34); pCI1eW++)
        for (j = k - (670 - 669); j >= pCI1eW; j--) {
            if (a[j][(13 - 13)] > a[j - (867 - 866)][(113 - 113)]) {
                distance = a[j - (948 - 947)][0];
                a[j - (642 - 641)][0] = a[j][0];
                a[j][0] = distance;
                distance = a[j - 1][1];
                a[j - 1][1] = a[j][1];
                a[j][1] = distance;
                distance = a[j - 1][(79 - 77)];
                a[j - 1][(607 - 605)] = a[j][2];
                a[j][2] = distance;
            };
        }
    for (pCI1eW = 0; pCI1eW <= k - 1; pCI1eW++) {
        cout << '(' << x[(int) (a[pCI1eW][1])] << ',' << y[(int) (a[pCI1eW][1])] << ',' << z[(int) (a[pCI1eW][1])] << ")-(";
        cout << x[(int) (a[pCI1eW][2])] << ',' << y[(int) (a[pCI1eW][2])] << ',' << z[(int) (a[pCI1eW][2])] << ")=";
        cout << fixed << setprecision (2) << a[pCI1eW][0] << endl;
    }
    return 0;
}

