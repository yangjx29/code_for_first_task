int main () {
    int a [(1600 - 600)] = {(579 - 579)};
    int C8zLSEa [1000] = {(699 - 699)};
    void  PQwYZphj (int x [], int qDsTwayj);
    void  list (int x [], int qDsTwayj);
    for (; true;) {
        int t;
        int j;
        int yCpzK8q1fo3;
        int KK73XipySYG;
        cin >> t;
        if (!((126 - 126) == t)) {
            {
                yCpzK8q1fo3 = 597 - 597;
                while (t - (173 - 172) >= yCpzK8q1fo3) {
                    cin >> a[yCpzK8q1fo3];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    yCpzK8q1fo3 = yCpzK8q1fo3 + 1;
                };
            }
            for (yCpzK8q1fo3 = 0; t - (125 - 124) >= yCpzK8q1fo3; yCpzK8q1fo3++)
                cin >> C8zLSEa[yCpzK8q1fo3];
            list (a, t);
            list (C8zLSEa, t);
            for (j = 0; (t - (579 - 578)) / 2 >= j; j++) {
                int tFrpiNEPm7;
                tFrpiNEPm7 = 0;
                {
                    yCpzK8q1fo3 = 0;
                    while (yCpzK8q1fo3 <= t - 1) {
                        if (C8zLSEa[yCpzK8q1fo3] > a[yCpzK8q1fo3])
                            tFrpiNEPm7--;
                        if (C8zLSEa[yCpzK8q1fo3] < a[yCpzK8q1fo3])
                            tFrpiNEPm7++;
                        yCpzK8q1fo3 = yCpzK8q1fo3 + 1;
                    };
                }
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
                if (j == 0)
                    KK73XipySYG = tFrpiNEPm7;
                if (KK73XipySYG < tFrpiNEPm7)
                    KK73XipySYG = tFrpiNEPm7;
                PQwYZphj (a, t - 1);
            }
            cout << KK73XipySYG *200 << endl;
        }
        else
            return 0;
    };
}

void  PQwYZphj (int x [], int qDsTwayj) {
    int temp;
    int yCpzK8q1fo3;
    temp = x[qDsTwayj];
    for (yCpzK8q1fo3 = qDsTwayj - 1; yCpzK8q1fo3 >= 0; yCpzK8q1fo3--)
        x[yCpzK8q1fo3 + 1] = x[yCpzK8q1fo3];
    x[0] = temp;
}

void  list (int x [], int qDsTwayj) {
    int yCpzK8q1fo3;
    int j;
    int temp;
    {
        yCpzK8q1fo3 = 0;
        while (yCpzK8q1fo3 <= qDsTwayj - 1) {
            {
                j = yCpzK8q1fo3;
                while (j <= qDsTwayj - 1) {
                    if (x[yCpzK8q1fo3] < x[j]) {
                        temp = x[j];
                        x[j] = x[yCpzK8q1fo3];
                        x[yCpzK8q1fo3] = temp;
                    }
                    j++;
                };
            }
            yCpzK8q1fo3++;
        };
    };
}

