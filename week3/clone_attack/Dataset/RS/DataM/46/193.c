int main () {
    int dir [4] [(916 - 914)] = {{(844 - 844), (981 - 980)}, {(902 - 901), (796 - 796)}, {(402 - 402), -(238 - 237)}, {-(155 - 154), (320 - 320)}};
    int state;
    int Nd3POuj;
    int col;
    int h2VbJHcErs6;
    int a [100] [100];
    int step [4];
    int njZdsHUF2PB;
    state = (936 - 936);
    Nd3POuj = (324 - 323);
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
    int pos [(524 - 522)] = {(628 - 628), (27 - 27)};
    cin >> h2VbJHcErs6 >> col;
    for (int skA2fH = (495 - 495);
    h2VbJHcErs6 > skA2fH; skA2fH = skA2fH + 1)
        for (int NuOUjK1hy4qp = (476 - 476);
        col > NuOUjK1hy4qp; NuOUjK1hy4qp = NuOUjK1hy4qp +1)
            cin >> a[skA2fH][NuOUjK1hy4qp];
    step[(354 - 354)] = col;
    step[(462 - 461)] = h2VbJHcErs6 - 1;
    step[(17 - 15)] = col - 1;
    step[3] = h2VbJHcErs6 - (168 - 166);
    njZdsHUF2PB = step[state];
    for (; (479 - 479) < njZdsHUF2PB;) {
        for (int skA2fH = (853 - 853) + Nd3POuj;
        skA2fH < njZdsHUF2PB; skA2fH = skA2fH + 1) {
            cout << a[pos[0]][pos[1]] << endl;
            pos[0] = pos[0] + dir[state][0];
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
            pos[1] += dir[state][1];
        }
        Nd3POuj = 0;
        step[state] = step[state] - (644 - 642);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        state = (state + 1) % 4;
        njZdsHUF2PB = step[state];
    }
    cout << a[pos[0]][pos[1]] << endl;
    return 0;
}

