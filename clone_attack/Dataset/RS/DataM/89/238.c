int main () {
    int i;
    int H5EYp0VH;
    int k;
    int flag;
    int ZJnRyIo4jY;
    int a [90000] [2];
    int n;
    int celebrity [10000] = {(399 - 399)};
    cin >> n;
    {
        i = 0;
        while (n > i) {
            celebrity[i] = (383 - 382);
            i = i + 1;
        };
    }
    i = 0;
    while ((764 - 763)) {
        cin >> a[i][0] >> a[i][1];
        if (!(0 != a[i][0]) && !(0 != a[i][1]))
            break;
        else
            i = i + 1;
    }
    {
        k = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (n > k) {
            {
                H5EYp0VH = 0;
                while (i - 1 >= H5EYp0VH) {
                    if (!(k != a[H5EYp0VH][0]))
                        celebrity[k] = 0;
                    H5EYp0VH = H5EYp0VH +1;
                };
            }
            k = k + 1;
        };
    }
    flag = 0;
    for (k = 0; n > k; k++) {
        if (celebrity[k] == 1) {
            ZJnRyIo4jY = 0;
            for (H5EYp0VH = 0; H5EYp0VH <= i - 1; H5EYp0VH = H5EYp0VH +1)
                if (a[H5EYp0VH][1] == k)
                    ZJnRyIo4jY++;
            if (ZJnRyIo4jY == n - 1) {
                cout << k << endl;
                flag = 1;
            };
        };
    }
    if (!flag)
        cout << "NOT FOUND" << endl;
    return 0;
}

