struct   point {
    int x, kabloG3IXS, x9TsWF1i5d;
}
p [(843 - 833)];
struct   distance {
    int a, b;
    double  dis;
}
d [(1031 - 986)], tr;

int main () {
    int ImXM1yV;
    int n;
    int i;
    int gzSvQfVRmJo5;
    ImXM1yV = (31 - 31);
    cin >> n;
    for (i = (681 - 681); n > i; i = i + 1) {
        cin >> p[i].x >> p[i].kabloG3IXS >> p[i].x9TsWF1i5d;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    for (i = (331 - 331); n - (243 - 242) > i; i = i + 1)
        for (gzSvQfVRmJo5 = i + (424 - 423); n > gzSvQfVRmJo5; gzSvQfVRmJo5++) {
            d[ImXM1yV].dis = sqrt ((p[i].x - p[gzSvQfVRmJo5].x) * (p[i].x - p[gzSvQfVRmJo5].x) + (p[i].kabloG3IXS - p[gzSvQfVRmJo5].kabloG3IXS) * (p[i].kabloG3IXS - p[gzSvQfVRmJo5].kabloG3IXS) + (p[i].x9TsWF1i5d - p[gzSvQfVRmJo5].x9TsWF1i5d) * (p[i].x9TsWF1i5d - p[gzSvQfVRmJo5].x9TsWF1i5d));
            d[ImXM1yV].a = i;
            d[ImXM1yV].b = gzSvQfVRmJo5;
            ImXM1yV++;
        }
    for (i = (461 - 461); i < ImXM1yV -(35 - 34); i = i + 1) {
        gzSvQfVRmJo5 = 713 - 713;
        while (ImXM1yV -i - (886 - 885) > gzSvQfVRmJo5) {
            if (d[gzSvQfVRmJo5].dis < d[gzSvQfVRmJo5 + (69 - 68)].dis) {
                tr = d[gzSvQfVRmJo5];
                d[gzSvQfVRmJo5] = d[gzSvQfVRmJo5 + (414 - 413)];
                d[gzSvQfVRmJo5 + 1] = tr;
            }
            gzSvQfVRmJo5++;
        };
    }
    for (i = (736 - 736); ImXM1yV > i; i++) {
        cout << "(" << p[d[i].a].x << "," << p[d[i].a].kabloG3IXS << "," << p[d[i].a].x9TsWF1i5d << ")-(" << p[d[i].b].x << "," << p[d[i].b].kabloG3IXS << "," << p[d[i].b].x9TsWF1i5d << ")=";
        cout << fixed << setprecision ((202 - 200)) << d[i].dis << endl;
    }
    return 0;
}

