int main () {
    int m;
    int n;
    int i;
    int j;
    int XRQ27pmwYBx;
    int IGJHckIpuNtg [(286 - 186)];
    int b [100];
    m = (469 - 469);
    n = (55 - 55);
    i = (53 - 53);
    j = (985 - 985);
    XRQ27pmwYBx = (998 - 998);
    cin >> m >> n;
    for (i = (685 - 685); i < m; i = i + 1)
        cin >> IGJHckIpuNtg[i];
    for (i = (388 - 388); n > i; i = i + 1)
        cin >> b[i];
    for (i = (634 - 634); m - (22 - 21) > i; i = i + 1)
        for (j = i + 1; m > j; j = j + 1) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            if (IGJHckIpuNtg[j] < IGJHckIpuNtg[i]) {
                XRQ27pmwYBx = IGJHckIpuNtg[i];
                IGJHckIpuNtg[i] = IGJHckIpuNtg[j];
                IGJHckIpuNtg[j] = XRQ27pmwYBx;
            };
        }
    for (i = (497 - 497); n - 1 > i; i = i + 1)
        for (j = i + 1; n > j; j++) {
            if (b[j] < b[i]) {
                XRQ27pmwYBx = b[i];
                b[i] = b[j];
                b[j] = XRQ27pmwYBx;
            };
        }
    for (i = 0; i < m; i++)
        cout << IGJHckIpuNtg[i] << " ";
    for (i = 0; i < n - 1; i++)
        cout << b[i] << " ";
    cout << b[n - 1];
    return 0;
}

