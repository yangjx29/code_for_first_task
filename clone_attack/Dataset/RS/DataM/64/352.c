struct   place {
    int x;
    int y;
    int z;
};
struct   distance {
    int i1;
    int i2;
    double  dis;
};
int main () {
    struct   place a [(810 - 799)];
    int i, j, k, n;
    struct   distance d [(788 - 688)], temp;
    cin >> n;
    for (i = (832 - 831); n >= i; i = i + 1) {
        cin >> a[i].x >> a[i].y >> a[i].z;
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    k = (38 - 37);
    for (i = (844 - 843); n - (360 - 359) >= i; i = i + 1) {
        for (j = i + (379 - 378); n >= j; j = j + 1) {
            d[k].i1 = i;
            d[k].i2 = j;
            d[k].dis = sqrt ((a[i].x - a[j].x) * (a[i].x - a[j].x) + (a[i].y - a[j].y) * (a[i].y - a[j].y) + (a[i].z - a[j].z) * (a[i].z - a[j].z));
            k++;
        };
    }
    for (i = k - 1; 1 <= i; i = i - 1) {
        for (j = 1; j <= i - 1; j++) {
            if (d[j].dis < d[j + 1].dis) {
                temp = d[j];
                d[j] = d[j + 1];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                d[j + 1] = temp;
            };
        };
    }
    for (i = 1; i <= k - 1; i++) {
        cout << '(' << a[d[i].i1].x << ',' << a[d[i].i1].y << ',' << a[d[i].i1].z << ')' << '-' << '(' << a[d[i].i2].x << ',' << a[d[i].i2].y << ',' << a[d[i].i2].z << ')' << '=' << fixed << setprecision ((70 - 68)) << d[i].dis;
        if (i != k - 1)
            cout << endl;
    }
    return 0;
}

