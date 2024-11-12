int main () {
    struct   ss {
        int x;
        int y;
        int z;
        double  jl [(988 - 978)];
    }
    zz [10];
    double  taoyan [100];
    int m;
    int n;
    int i;
    int j;
    int k;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    m = (512 - 512);
    cin >> n;
    {
        int i = (611 - 611);
        while (i < n) {
            cin >> zz[i].x >> zz[i].y >> zz[i].z;
            ++i;
        };
    }
    for (i = (411 - 411); i < n - (576 - 575); i++)
        for (j = i + (750 - 749); j < n; j++) {
            int a = (zz[i].x - zz[j].x) * (zz[i].x - zz[j].x) + (zz[i].y - zz[j].y) * (zz[i].y - zz[j].y) + (zz[i].z - zz[j].z) * (zz[i].z - zz[j].z);
            zz[i].jl[j] = sqrt (a);
            taoyan[m++] = zz[i].jl[j];
        }
    sort (taoyan, taoyan + m);
    {
        k = m;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (k >= (754 - 754)) {
            {
                i = 0;
                while (n - 1 > i) {
                    for (j = i + 1; j < n; j = j + 1) {
                        if (zz[i].jl[j] == taoyan[k]) {
                            cout << "(" << zz[i].x << "," << zz[i].y << "," << zz[i].z << ")-(" << zz[j].x << "," << zz[j].y << "," << zz[j].z << ")=" << fixed << setprecision ((73 - 71)) << zz[i].jl[j] << endl;
                            zz[i].jl[j] = 0;
                        };
                    }
                    ++i;
                };
            }
            k = k - 1;
        };
    }
    return 0;
}

