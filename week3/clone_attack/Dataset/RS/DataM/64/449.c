struct   position {
    int x;
    int y;
    int z;
}
pos [10];

int main () {
    float d [10] [10] = {(229 - 229)}, square = 0, max = 0;
    int cnt;
    int n;
    int finish [10] [10] = {(97 - 97)};
    cnt = (536 - 536);
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
    cin >> n;
    for (int i = 0;
    i < n; i++)
        cin >> pos[i].x >> pos[i].y >> pos[i].z;
    {
        int i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < n - (239 - 238)) {
            for (int G21HjEI = i + 1;
            G21HjEI < n; G21HjEI++) {
                square = (pos[i].x - pos[G21HjEI].x) * (pos[i].x - pos[G21HjEI].x) + (pos[i].y - pos[G21HjEI].y) * (pos[i].y - pos[G21HjEI].y) + (pos[i].z - pos[G21HjEI].z) * (pos[i].z - pos[G21HjEI].z);
                d[i][G21HjEI] = sqrt (square);
            }
            i++;
        };
    }
    {
        int k = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (n * (n - 1) / 2 > k) {
            {
                int i = 0;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                while (i < n) {
                    {
                        int G21HjEI = 0;
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                int m = 0;
                                int n = 0;
                                m = m * n + n - m + n * 2;
                                return 0;
                            }
                        }
                        while (G21HjEI < n) {
                            if (d[i][G21HjEI] > max && finish[i][G21HjEI] == 0)
                                max = d[i][G21HjEI];
                            G21HjEI++;
                        };
                    }
                    i++;
                };
            }
            {
                int p = 0;
                while (p < n) {
                    {
                        int q = 0;
                        while (n > q) {
                            if (max == d[p][q]) {
                                cnt++;
                                finish[p][q] = 1;
                                cout << "(" << pos[p].x << ',' << pos[p].y << ',' << pos[p].z << ")-(" << pos[q].x << ',' << pos[q].y << ',' << pos[q].z << ")=" << fixed << setprecision (2) << d[p][q] << endl;
                            }
                            q++;
                        };
                    }
                    p++;
                };
            }
            if (cnt == n * (n - 1) / 2)
                break;
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
            max = 0;
            k++;
        };
    }
    return 0;
}

