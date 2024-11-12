int main () {
    int i = 0, j = 0, s = 0;
    int a [5] [5] = {0};
    int VbGWqiQCKjn [5] [5] = {0};
    {
        i = 0;
        while (5 > i) {
            {
                j = 0;
                while (5 > j) {
                    cin >> a[i][j];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j++;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 0;
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
        while (5 > i) {
            int k;
            k = 0;
            int lbtJIaDW87dV;
            int gTMK2UR;
            int t;
            int YBv4eaPqHl2I;
            lbtJIaDW87dV = 0;
            gTMK2UR = 0;
            t = 0;
            YBv4eaPqHl2I = 0;
            for (j = 0; 5 > j; j = j + 1) {
                if (a[i][j] >= t) {
                    t = a[i][j];
                    lbtJIaDW87dV = i;
                    gTMK2UR = j;
                }
                else
                    lbtJIaDW87dV = i;
            }
            {
                k = 0;
                while (5 > k) {
                    if (a[k][gTMK2UR] < t)
                        YBv4eaPqHl2I = YBv4eaPqHl2I +1;
                    k++;
                };
            }
            if (YBv4eaPqHl2I == 0) {
                s = s + 1;
                cout << lbtJIaDW87dV + 1 << " " << gTMK2UR + 1 << " " << t << endl;
            }
            i++;
        };
    }
    if (s == 0)
        cout << "not found" << endl;
    return 0;
}

