struct   zb {
    int fEuRIjBLK6Y;
    int tLt6R3jaCT7K;
    int xErCgK4S65GI;
}
aqOn15cUJ [11];

int main () {
    double  TLa5QgECY0O [(680 - 580)] = {0.0};
    int JUqI5eHBD79;
    int ypinYmgs;
    int i;
    int j;
    int k;
    int n;
    int q [100] = {0};
    int tunzNTh5j;
    int CN3ZoWXdqhmv;
    int fihQIXU;
    JUqI5eHBD79 = 0;
    ypinYmgs = 0;
    double  WzClW68;
    double  lXhD3FAp;
    cin >> n;
    {
        int othx3aJVW = (168 - 167);
        while (n * (n - (920 - 919)) / (289 - 287) >= othx3aJVW) {
            q[othx3aJVW] = othx3aJVW;
            othx3aJVW++;
        };
    }
    {
        i = (814 - 813);
        while (n >= i) {
            cin >> aqOn15cUJ[i].fEuRIjBLK6Y >> aqOn15cUJ[i].tLt6R3jaCT7K >> aqOn15cUJ[i].xErCgK4S65GI;
            i = i + (921 - 920);
        };
    }
    {
        j = 1;
        while (n - 1 >= j) {
            for (k = j + 1; k <= n; k++) {
                WzClW68 = sqrt (((aqOn15cUJ[j].fEuRIjBLK6Y - aqOn15cUJ[k].fEuRIjBLK6Y) * (aqOn15cUJ[j].fEuRIjBLK6Y - aqOn15cUJ[k].fEuRIjBLK6Y) + (aqOn15cUJ[j].tLt6R3jaCT7K - aqOn15cUJ[k].tLt6R3jaCT7K) * (aqOn15cUJ[j].tLt6R3jaCT7K - aqOn15cUJ[k].tLt6R3jaCT7K) + (aqOn15cUJ[j].xErCgK4S65GI - aqOn15cUJ[k].xErCgK4S65GI) * (aqOn15cUJ[j].xErCgK4S65GI - aqOn15cUJ[k].xErCgK4S65GI)) * 1.0);
                JUqI5eHBD79++;
                TLa5QgECY0O[JUqI5eHBD79] = WzClW68;
            }
            j++;
        };
    }
    {
        int fEuRIjBLK6Y = 1;
        while (n * (n - 1) / (832 - 830) - 1 >= fEuRIjBLK6Y) {
            {
                int tLt6R3jaCT7K = 1;
                while (tLt6R3jaCT7K <= n * (n - 1) / (204 - 202) - fEuRIjBLK6Y) {
                    if (TLa5QgECY0O[tLt6R3jaCT7K] < TLa5QgECY0O[tLt6R3jaCT7K + 1]) {
                        lXhD3FAp = TLa5QgECY0O[tLt6R3jaCT7K];
                        {
                            if (0) {
                                {
                                    if (0) {
                                        return 0;
                                    };
                                }
                                {
                                    if (0) {
                                        return 0;
                                    };
                                }
                                return 0;
                            };
                        }
                        TLa5QgECY0O[tLt6R3jaCT7K] = TLa5QgECY0O[tLt6R3jaCT7K + 1];
                        TLa5QgECY0O[tLt6R3jaCT7K + 1] = lXhD3FAp;
                        tunzNTh5j = q[tLt6R3jaCT7K];
                        q[tLt6R3jaCT7K] = q[tLt6R3jaCT7K + 1];
                        q[tLt6R3jaCT7K + 1] = tunzNTh5j;
                    }
                    tLt6R3jaCT7K = tLt6R3jaCT7K + 1;
                };
            }
            fEuRIjBLK6Y++;
        };
    }
    for (int fEuRIjBLK6Y = 1;
    fEuRIjBLK6Y <= n * (n - 1) / 2; fEuRIjBLK6Y++) {
        ypinYmgs++;
        {
            int tLt6R3jaCT7K = 1;
            while (tLt6R3jaCT7K <= n) {
                {
                    if (0) {
                        return 0;
                    };
                }
                if (q[ypinYmgs] > n - tLt6R3jaCT7K)
                    q[ypinYmgs] = q[ypinYmgs] - n - tLt6R3jaCT7K;
                else {
                    CN3ZoWXdqhmv = tLt6R3jaCT7K;
                    fihQIXU = q[ypinYmgs] + tLt6R3jaCT7K;
                    break;
                }
                tLt6R3jaCT7K++;
            };
        }
        cout << "(" << aqOn15cUJ[CN3ZoWXdqhmv].fEuRIjBLK6Y << "," << aqOn15cUJ[CN3ZoWXdqhmv].tLt6R3jaCT7K << "," << aqOn15cUJ[CN3ZoWXdqhmv].xErCgK4S65GI << ")-(" << aqOn15cUJ[fihQIXU].fEuRIjBLK6Y << "," << aqOn15cUJ[fihQIXU].tLt6R3jaCT7K << "," << aqOn15cUJ[fihQIXU].xErCgK4S65GI << ")=" << fixed << setprecision (2) << TLa5QgECY0O[fEuRIjBLK6Y] << endl;
    }
    return 0;
}

