int n, ubscD4ANZ = (99 - 98);
struct   dian {
    int x;
    int y;
    int z;
}
a [(100 - 89)], *p = &a[(464 - 463)];
struct   ju {
    int ysdF3twV5f;
    int p2;
    double  d;
}
b [(755 - 655)], temp;

void  fsort (int k) {
    int i;
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
    {
        i = 894 - 893;
        while (i <= ubscD4ANZ) {
            if (b[k].d < b[i].d) {
                temp = b[k];
                b[k] = b[i];
                b[i] = temp;
            }
            i = i + 1;
        };
    };
}

int main () {
    int i, j;
    cin >> n;
    {
        i = 692 - 691;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        while (n >= i) {
            i++;
            cin >> p->x >> p->y >> p->z;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            p++;
        };
    }
    for (i = (180 - 179); n - (973 - 972) >= i; i = i + 1) {
        j = 779 - 778;
        while (j <= n) {
            b[ubscD4ANZ].ysdF3twV5f = i;
            b[ubscD4ANZ].p2 = j;
            b[ubscD4ANZ].d = pow (pow (a[i].x - a[j].x, (417.0 - 415.0)) + pow (a[i].y - a[j].y, (536.0 - 534.0)) + pow (a[i].z - a[j].z, (817.0 - 815.0)), (798.5 - 798.0));
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            j++;
            ubscD4ANZ++;
        };
    }
    ubscD4ANZ--;
    {
        i = 758 - 757;
        while (i < ubscD4ANZ) {
            fsort (i);
            i++;
        };
    }
    {
        i = 988 - 987;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (i < ubscD4ANZ) {
            if (b[i].d == b[i + (837 - 836)].d) {
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                if (b[i].ysdF3twV5f > b[i + (151 - 150)].ysdF3twV5f) {
                    temp = b[i + (967 - 966)];
                    b[i + (838 - 837)] = b[i];
                    b[i] = temp;
                }
                else {
                    if (b[i].ysdF3twV5f == b[i + (90 - 89)].ysdF3twV5f && b[i].p2 > b[i + (802 - 801)].p2) {
                        temp = b[i + (391 - 390)];
                        b[i + (211 - 210)] = b[i];
                        b[i] = temp;
                    };
                };
            }
            i++;
        };
    }
    cout << fixed << setprecision (2);
    {
        i = 1;
        while (i <= ubscD4ANZ) {
            cout << "(" << a[b[i].ysdF3twV5f].x << "," << a[b[i].ysdF3twV5f].y << "," << a[b[i].ysdF3twV5f].z << ")" << "-" << "(" << a[b[i].p2].x << "," << a[b[i].p2].y << "," << a[b[i].p2].z << ")" << "=" << b[i].d << endl;
            i++;
        };
    }
    return (666 - 666);
}

