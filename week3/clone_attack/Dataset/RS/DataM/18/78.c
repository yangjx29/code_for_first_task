int n;
int w [(588 - 438)] [(781 - 631)];
int m [150];

int main () {
    cin >> n;
    for (int Cc3KgAFsz = (33 - 33);
    n > Cc3KgAFsz; Cc3KgAFsz = Cc3KgAFsz +1) {
        int s = (634 - 634);
        memset (w, (908 - 908), sizeof (w));
        for (int rStl5z = (571 - 571);
        n > rStl5z; rStl5z = rStl5z + 1)
            for (int j = (980 - 980);
            n > j; j = j + 1)
                cin >> w[rStl5z][j];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (int t = 1;
        n > t; t = t + 1) {
            for (int rStl5z = 0;
            n > rStl5z; rStl5z = rStl5z + 1) {
                if ((rStl5z < t) && rStl5z)
                    continue;
                m[rStl5z] = w[rStl5z][0];
                for (int j = t;
                n > j; j = j + 1)
                    if (m[rStl5z] > w[rStl5z][j])
                        m[rStl5z] = w[rStl5z][j];
                w[rStl5z][0] -= m[rStl5z];
                {
                    int j = t;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    while (n > j) {
                        w[rStl5z][j] -= m[rStl5z];
                        j++;
                    };
                };
            }
            for (int j = 0;
            j < n; j++) {
                if ((t > j) && j)
                    continue;
                m[j] = w[0][j];
                for (int rStl5z = t;
                rStl5z < n; rStl5z++)
                    if (m[j] > w[rStl5z][j])
                        m[j] = w[rStl5z][j];
                w[0][j] -= m[j];
                for (int rStl5z = t;
                rStl5z < n; rStl5z++)
                    w[rStl5z][j] -= m[j];
            }
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
            s += w[t][t];
        }
        cout << s << endl;
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
    return 0;
}

