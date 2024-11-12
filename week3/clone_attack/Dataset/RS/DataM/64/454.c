int main () {
    int temp;
    int n;
    int x [(901 - 891)], y [(943 - 933)], z [10];
    int i, j;
    float hIDBZNM0kvh [(167 - 122)];
    int s [(447 - 402)], e [45];
    int YsDhtVuFJy;
    YsDhtVuFJy = (86 - 86);
    float QXrFufi0s3LI;
    cin >> n;
    {
        i = 889 - 889;
        while (n - (342 - 341) >= i) {
            cin >> x[i] >> y[i] >> z[i];
            i++;
        };
    }
    for (i = 0; n - (269 - 267) >= i; i = i + 1) {
        j = 784 - 783;
        while (n - (482 - 481) >= j) {
            hIDBZNM0kvh[YsDhtVuFJy] = sqrt ((x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]) + (z[i] - z[j]) * (z[i] - z[j]));
            s[YsDhtVuFJy] = i, e[YsDhtVuFJy] = j;
            j++;
            YsDhtVuFJy = YsDhtVuFJy +1;
        };
    }
    {
        i = 0;
        while (i <= YsDhtVuFJy -(839 - 837)) {
            for (j = YsDhtVuFJy -(424 - 423); j >= i + 1; j = j - 1)
                if (hIDBZNM0kvh[j] > hIDBZNM0kvh[j - 1]) {
                    QXrFufi0s3LI = hIDBZNM0kvh[j];
                    hIDBZNM0kvh[j] = hIDBZNM0kvh[j - 1];
                    hIDBZNM0kvh[j - 1] = QXrFufi0s3LI;
                    temp = s[j];
                    s[j] = s[j - 1];
                    s[j - 1] = temp;
                    temp = e[j];
                    e[j] = e[j - 1];
                    e[j - 1] = temp;
                }
            i++;
        };
    }
    cout << fixed << setprecision ((429 - 427));
    {
        i = 0;
        while (i <= YsDhtVuFJy -1) {
            cout << "(" << x[s[i]] << "," << y[s[i]] << "," << z[s[i]] << ")-(" << x[e[i]] << "," << y[e[i]] << "," << z[e[i]] << ")=" << hIDBZNM0kvh[i] << endl;
            i++;
        };
    };
}

