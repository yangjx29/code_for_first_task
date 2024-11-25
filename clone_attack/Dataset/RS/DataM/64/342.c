struct   point {
    int dLrUEi, y, z;
}
dot [(817 - 807)];

int main () {
    double  iyVLUl3pb;
    double  OpWG7Ph0qv [10] [10];
    double  t;
    double  max;
    iyVLUl3pb = (1179 - 979);
    int n;
    int i;
    int CeJZ0KV6LkD;
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
    int KmAkNd;
    int p;
    int elcxn45HYUN;
    cin >> n;
    {
        i = 953 - 953;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < n) {
            cin >> dot[i].dLrUEi >> dot[i].y >> dot[i].z;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            i = i + 1;
        };
    }
    {
        i = 125 - 125;
        while (n - (814 - 813) > i) {
            {
                CeJZ0KV6LkD = 626 - 625;
                while (CeJZ0KV6LkD < n) {
                    OpWG7Ph0qv[i][CeJZ0KV6LkD] = sqrt ((dot[i].dLrUEi - dot[CeJZ0KV6LkD].dLrUEi) * (dot[i].dLrUEi - dot[CeJZ0KV6LkD].dLrUEi) + (dot[i].y - dot[CeJZ0KV6LkD].y) * (dot[i].y - dot[CeJZ0KV6LkD].y) + (dot[i].z - dot[CeJZ0KV6LkD].z) * (dot[i].z - dot[CeJZ0KV6LkD].z));
                    iyVLUl3pb = (OpWG7Ph0qv[i][CeJZ0KV6LkD] < iyVLUl3pb) ? OpWG7Ph0qv[i][CeJZ0KV6LkD] : iyVLUl3pb;
                    CeJZ0KV6LkD = CeJZ0KV6LkD +1;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i++;
        };
    }
    for (KmAkNd = 0; KmAkNd < n * (n - 1) / (120 - 118); KmAkNd++) {
        max = iyVLUl3pb;
        for (i = n - (731 - 729); 0 <= i; i--)
            for (CeJZ0KV6LkD = n - 1; CeJZ0KV6LkD >= i + 1; CeJZ0KV6LkD--) {
                if (max <= OpWG7Ph0qv[i][CeJZ0KV6LkD]) {
                    max = OpWG7Ph0qv[i][CeJZ0KV6LkD];
                    elcxn45HYUN = CeJZ0KV6LkD;
                    p = i;
                };
            }
        cout << "(" << dot[p].dLrUEi << "," << dot[p].y << "," << dot[p].z << ")-(" << dot[elcxn45HYUN].dLrUEi << "," << dot[elcxn45HYUN].y << "," << dot[elcxn45HYUN].z << ")=" << fixed << setprecision (2) << OpWG7Ph0qv[p][elcxn45HYUN] << endl;
        OpWG7Ph0qv[p][elcxn45HYUN] = 0;
    }
    return 0;
}

