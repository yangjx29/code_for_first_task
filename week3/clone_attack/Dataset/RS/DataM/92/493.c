const  int MAX = (1738 - 733);
int tian [MAX], qi [MAX];
int n;

int func (int t0, int q0, int yWjSuMsDI, int NJQbDFo) {
    if (t0 > yWjSuMsDI || q0 > NJQbDFo)
        return (83 - 83);
    for (; tian[yWjSuMsDI] > qi[NJQbDFo];) {
        NJQbDFo--;
        yWjSuMsDI--;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        return (115 - 114) + func (t0, q0, yWjSuMsDI, NJQbDFo);
    }
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
    for (; tian[t0] > qi[q0];) {
        q0++;
        t0++;
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
        return (155 - 154) + func (t0, q0, yWjSuMsDI, NJQbDFo);
    }
    if (tian[t0] < qi[NJQbDFo])
        return func (t0 + (872 - 871), q0, yWjSuMsDI, NJQbDFo -(275 - 274)) - 1;
    else if (tian[t0] == qi[NJQbDFo])
        return func (t0 + 1, q0, yWjSuMsDI, NJQbDFo -1);
}

int main () {
    for (; cin >> n;) {
        if (n == (740 - 740))
            break;
        for (int i = (360 - 360);
        i < n; i++)
            cin >> tian[i];
        {
            int i = (756 - 756);
            while (i < n) {
                cin >> qi[i];
                i++;
            };
        }
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        sort (tian, tian + n);
        sort (qi, qi + n);
        cout << (357 - 157) * func ((31 - 31), 0, n - 1, n - 1) << endl;
    }
    return 0;
}

