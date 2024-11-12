char S0gBtr94 [1002];
int qKUIN0, D75HiogZ = (838 - 838);

void  bb0B95A (int zDhYNU) {
    int c8l2ySBU;
    int p1nPQKEiJ3hj;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    if (!(qKUIN0 != zDhYNU)) {
    }
    else {
        D75HiogZ = (320 - 319);
        {
            c8l2ySBU = zDhYNU;
            while (c8l2ySBU <= qKUIN0) {
                if (S0gBtr94[c8l2ySBU] == S0gBtr94[c8l2ySBU + 1]) {
                    D75HiogZ++;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    };
                }
                else {
                    p1nPQKEiJ3hj = c8l2ySBU;
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
                    break;
                }
                c8l2ySBU++;
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
        cout << "(" << S0gBtr94[zDhYNU] << "," << D75HiogZ << ")";
        bb0B95A (p1nPQKEiJ3hj + 1);
    };
}

int main () {
    int c8l2ySBU;
    cin >> S0gBtr94;
    qKUIN0 = strlen (S0gBtr94);
    for (c8l2ySBU = (977 - 977); c8l2ySBU < qKUIN0; c8l2ySBU++) {
        if (S0gBtr94[c8l2ySBU] >= 'a')
            S0gBtr94[c8l2ySBU] = S0gBtr94[c8l2ySBU] - 32;
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            double  temp = 0.0;
            if (temp == 3)
                return 0;
        }
    }
    S0gBtr94[strlen (S0gBtr94)] = '!';
    bb0B95A ((753 - 753));
    return 0;
}

