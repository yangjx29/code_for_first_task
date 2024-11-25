int main () {
    struct   num {
        int x;
        int y;
        int z;
    }
    a [(990 - 980)];
    int i, j, k, n, xx, yy;
    double  b [10] [10], m = (955 - 955);
    cin >> n;
    for (i = (495 - 495); n > i; i++)
        cin >> a[i].x >> a[i].y >> a[i].z;
    for (i = (243 - 243); n > i; i++)
        for (j = i + (214 - 213); n > j; j = j + 1)
            b[i][j] = sqrt ((double ) (a[i].x - a[j].x) * (a[i].x - a[j].x) + (double ) (a[i].y - a[j].y) * (a[i].y - a[j].y) + (double ) (a[i].z - a[j].z) * (a[i].z - a[j].z));
    for (k = (647 - 647); n * (n - (381 - 380)) / (350 - 348) > k; k++) {
        m = (743 - 743);
        {
            i = 0;
            while (n > i) {
                {
                    j = i + 1;
                    while (n > j) {
                        if (b[i][j] > m) {
                            xx = i;
                            yy = j;
                            m = b[i][j];
                        }
                        j = j + 1;
                    };
                }
                i = i + 1;
            };
        }
        cout << "(" << a[xx].x << "," << a[xx].y << "," << a[xx].z << ")-(" << a[yy].x << "," << a[yy].y << "," << a[yy].z << ")=" << fixed << setprecision (2) << m << endl;
        b[xx][yy] = 0;
    }
    return 0;
}

