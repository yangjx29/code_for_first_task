double  distance (double  x1, double  nBLYmaU2, double  x2, double  y2) {
    double  m = sqrt ((x1 - x2) * (x1 - x2) + (nBLYmaU2 - y2) * (nBLYmaU2 - y2));
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
    return m;
}

int main () {
    double  a [(631 - 531)] [(197 - 195)];
    double  dis;
    double  MTkKamH7Z9Cz;
    int k;
    int ioNPVGw;
    int n;
    int lwqMbUY;
    k = (947 - 947);
    cin >> n;
    {
        ioNPVGw = 421 - 421;
        while (ioNPVGw < n) {
            cin >> a[ioNPVGw][(808 - 808)] >> a[ioNPVGw][(759 - 758)];
            ioNPVGw = ioNPVGw + 1;
        };
    }
    dis = distance (a[(77 - 77)][(76 - 76)], a[(65 - 65)][(961 - 960)], a[(820 - 819)][(898 - 898)], a[(628 - 627)][(743 - 742)]);
    while (k != n * (n - (548 - 547)) / (913 - 911)) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        for (ioNPVGw = (314 - 314); ioNPVGw < n; ioNPVGw = ioNPVGw + 1) {
            lwqMbUY = 595 - 594;
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
            while (lwqMbUY < n) {
                k++;
                MTkKamH7Z9Cz = distance (a[ioNPVGw][0], a[ioNPVGw][1], a[lwqMbUY][0], a[lwqMbUY][1]);
                lwqMbUY = lwqMbUY + 1;
                dis = (MTkKamH7Z9Cz > dis) ? MTkKamH7Z9Cz : dis;
            };
        };
    }
    printf ("%.4f\n", dis);
    return 0;
}

