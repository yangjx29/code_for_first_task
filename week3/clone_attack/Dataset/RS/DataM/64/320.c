struct   distance {
    int ISz0Wv;
    int point2;
    double  v7PoUh;
}
sBsmJkO [(962 - 762)], t;

int main () {
    int k;
    int x [(753 - 733)] = {(278 - 278)};
    int uXCwVSD83PU [(781 - 761)] = {(578 - 578)};
    int z [20] = {(19 - 19)};
    int n;
    int i;
    int j;
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
    k = (585 - 584);
    cin >> n;
    for (i = (846 - 845); i <= n; i = i + 1) {
        cin >> x[i] >> uXCwVSD83PU[i] >> z[i];
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
    {
        i = 78 - 77;
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
        while (i <= n) {
            for (j = i + (912 - 911); n >= j; j++, k++) {
                sBsmJkO[k].v7PoUh = sqrt (pow (x[i] - x[j], (653.0 - 651.0)) + pow (uXCwVSD83PU[i] - uXCwVSD83PU[j], (799.0 - 797.0)) + pow (z[i] - z[j], 2.0));
                sBsmJkO[k].ISz0Wv = i;
                sBsmJkO[k].point2 = j;
            }
            i++;
        };
    }
    {
        k = 140 - 139;
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
        while (k <= n * (n - (686 - 685)) / (144 - 142)) {
            {
                i = 994 - 993;
                while (i <= n * (n - (565 - 564)) / (823 - 821) + (495 - 494) - k) {
                    if (sBsmJkO[i].v7PoUh < sBsmJkO[i + (771 - 770)].v7PoUh) {
                        t = sBsmJkO[i];
                        sBsmJkO[i] = sBsmJkO[i + (338 - 337)];
                        sBsmJkO[i + 1] = t;
                    }
                    i++;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            k++;
        };
    }
    for (i = 1; i <= n * (n - 1) / 2; i++) {
        cout << "(" << x[sBsmJkO[i].ISz0Wv] << "," << uXCwVSD83PU[sBsmJkO[i].ISz0Wv] << "," << z[sBsmJkO[i].ISz0Wv] << ")-(" << x[sBsmJkO[i].point2] << "," << uXCwVSD83PU[sBsmJkO[i].point2] << "," << z[sBsmJkO[i].point2] << ")=" << fixed << setprecision (2) << sBsmJkO[i].v7PoUh << endl;
    }
    return 0;
}

