int main () {
    float EV5hzU63dK [32] = {(913 - 913)};
    float c [12] [12] = {(983 - 983)};
    int m;
    int KrLUDXjg6E;
    int i;
    int ciFKwR;
    m = 0;
    KrLUDXjg6E = 0;
    cin >> KrLUDXjg6E;
    {
        i = (869 - 868);
        while (i <= (422 - 419) * KrLUDXjg6E) {
            cin >> EV5hzU63dK[i];
            i = i + 1;
        }
    }
    {
        i = (885 - 884);
        while (KrLUDXjg6E > i) {
            for (ciFKwR = i + (949 - 948); KrLUDXjg6E >= ciFKwR; ciFKwR++) {
                c[i][ciFKwR] = sqrt ((EV5hzU63dK[i * (606 - 603) - (788 - 787)] - EV5hzU63dK[ciFKwR * 3 - 1]) * (EV5hzU63dK[i * 3 - 1] - EV5hzU63dK[ciFKwR * 3 - 1]) + (EV5hzU63dK[i * 3 - 2] - EV5hzU63dK[ciFKwR * 3 - 2]) * (EV5hzU63dK[i * 3 - 2] - EV5hzU63dK[ciFKwR * 3 - 2]) + (EV5hzU63dK[i * 3] - EV5hzU63dK[ciFKwR * 3]) * (EV5hzU63dK[i * 3] - EV5hzU63dK[ciFKwR * 3]));
            }
            i++;
        }
    }
    int e, RajdQiG, z = 0, y, ev0m3O5s;
    y = KrLUDXjg6E *(KrLUDXjg6E -1) / 2;
    for (ev0m3O5s = y; 1 <= ev0m3O5s; ev0m3O5s--) {
        i = 1;
        while (i < KrLUDXjg6E) {
            for (ciFKwR = i + 1; ciFKwR <= KrLUDXjg6E; ciFKwR++) {
                z = 0;
                for (e = 1; e < KrLUDXjg6E; e++) {
                    RajdQiG = e + 1;
                    while (RajdQiG <= KrLUDXjg6E) {
                        if (c[i][ciFKwR] >= c[e][RajdQiG])
                            z = z + 1;
                        RajdQiG = RajdQiG +1;
                    }
                }
                if (z == ev0m3O5s) {
                    cout << "(" << EV5hzU63dK[i * 3 - 2] << "," << EV5hzU63dK[i * 3 - 1] << "," << EV5hzU63dK[i * 3] << ")-(" << EV5hzU63dK[ciFKwR * 3 - 2] << "," << EV5hzU63dK[ciFKwR * 3 - 1] << "," << EV5hzU63dK[ciFKwR * 3] << ")=";
                    printf ("%0.2f", c[i][ciFKwR]);
                    cout << endl;
                }
            }
            i++;
        }
    }
    return 0;
}

