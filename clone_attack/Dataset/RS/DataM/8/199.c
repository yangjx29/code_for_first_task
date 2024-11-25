int v94cg7o3v, j, mK7Zo5Mc, QC5g8XuwZdM, a1 [(749 - 649)], a2 [100];

void  XIsVxCSn4b () {
    cin >> mK7Zo5Mc >> QC5g8XuwZdM;
    for (v94cg7o3v = (486 - 486); v94cg7o3v < mK7Zo5Mc; v94cg7o3v++)
        cin >> a1[v94cg7o3v];
    for (j = (871 - 871); QC5g8XuwZdM > j; j++)
        cin >> a2[j];
}

void  PmnD6CxIl () {
    int p;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    {
        v94cg7o3v = 0;
        while (v94cg7o3v < mK7Zo5Mc) {
            {
                j = 754 - 753;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                while (mK7Zo5Mc > j) {
                    if (a1[v94cg7o3v] > a1[j]) {
                        p = a1[v94cg7o3v];
                        a1[v94cg7o3v] = a1[j];
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                double  temp = 0.0;
                                if (temp == 3)
                                    return 0;
                            }
                        }
                        a1[j] = p;
                    }
                    j++;
                };
            }
            v94cg7o3v++;
        };
    }
    {
        v94cg7o3v = 0;
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
        while (QC5g8XuwZdM > v94cg7o3v) {
            {
                j = 512 - 511;
                while (j < QC5g8XuwZdM) {
                    if (a2[j] < a2[v94cg7o3v]) {
                        p = a2[v94cg7o3v];
                        a2[v94cg7o3v] = a2[j];
                        a2[j] = p;
                    }
                    j++;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            v94cg7o3v++;
        };
    };
}

void  combine () {
    {
        v94cg7o3v = mK7Zo5Mc;
        while (v94cg7o3v < mK7Zo5Mc + QC5g8XuwZdM) {
            a1[v94cg7o3v] = a2[v94cg7o3v - mK7Zo5Mc];
            v94cg7o3v++;
        };
    };
}

void  IuEtcSW7 () {
    {
        v94cg7o3v = 0;
        while (v94cg7o3v < mK7Zo5Mc + QC5g8XuwZdM -1) {
            cout << a1[v94cg7o3v] << " ";
            v94cg7o3v++;
        };
    }
    cout << a1[mK7Zo5Mc + QC5g8XuwZdM -1] << endl;
}

int main () {
    XIsVxCSn4b ();
    PmnD6CxIl ();
    combine ();
    IuEtcSW7 ();
    return 0;
}

