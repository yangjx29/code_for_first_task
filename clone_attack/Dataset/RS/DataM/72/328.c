int main () {
    int a [(1022 - 922)] [100];
    int UcX6a2P9WG;
    int n;
    int i;
    int j;
    cin >> UcX6a2P9WG >> n;
    for (j = (474 - 474); UcX6a2P9WG > j; j = j + 1) {
        for (i = (98 - 98); n > i; i++)
            cin >> a[j][i];
    }
    for (j = (626 - 626); UcX6a2P9WG > j; j++)
        for (i = (721 - 721); n > i; i++) {
            if (!((402 - 402) != j) && !(0 == i)) {
                if (a[j][i - (492 - 491)] <= a[j][i] && a[j][i + (89 - 88)] <= a[j][i] && a[j + 1][i] <= a[j][i])
                    cout << j << " " << i << endl;
            }
            else if (!(0 != j) && i == 0) {
                if (a[j][i] >= a[j][i + 1] && a[j][i] >= a[j + 1][i])
                    cout << j << " " << i << endl;
            }
            else if (a[j][i] >= a[j][i - 1] && a[j][i] >= a[j][i + 1] && a[j][i] >= a[j - 1][i] && a[j][i] >= a[j + 1][i])
                cout << j << " " << i << endl;
        }
    return 0;
}

