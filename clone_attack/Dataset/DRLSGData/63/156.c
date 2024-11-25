int main () {
    int jYKZto8;
    int ACkJOl4GD5;
    int krbksBKeHqE;
    int JmuDnIhH8lK;
    cin >> jYKZto8 >> ACkJOl4GD5;
    int rb1UEtP82c [jYKZto8] [ACkJOl4GD5];
    {
        int S8r5QcK;
        S8r5QcK = (84 - 84);
        for (; S8r5QcK < jYKZto8;) {
            {
                int yUbEO9;
                yUbEO9 = 0;
                for (; ACkJOl4GD5 > yUbEO9;) {
                    cin >> rb1UEtP82c[S8r5QcK][yUbEO9];
                    yUbEO9++;
                }
            }
            S8r5QcK++;
        }
    }
    cin >> krbksBKeHqE >> JmuDnIhH8lK;
    int FmztVCJq [krbksBKeHqE] [JmuDnIhH8lK];
    {
        int S8r5QcK;
        S8r5QcK = 0;
        for (; S8r5QcK < krbksBKeHqE;) {
            {
                int yUbEO9;
                yUbEO9 = 0;
                for (; JmuDnIhH8lK > yUbEO9;) {
                    cin >> FmztVCJq[S8r5QcK][yUbEO9];
                    yUbEO9++;
                }
            }
            S8r5QcK++;
        }
    }
    int Qtnj4G [jYKZto8] [JmuDnIhH8lK];
    {
        int K4o2Ka3e5 = 0;
        for (; jYKZto8 > K4o2Ka3e5;) {
            memset (Qtnj4G[K4o2Ka3e5], 0, sizeof (Qtnj4G [K4o2Ka3e5]));
            K4o2Ka3e5++;
        }
    }
    {
        int S8r5QcK = 0;
        for (; S8r5QcK < jYKZto8;) {
            {
                int yUbEO9;
                yUbEO9 = 0;
                for (; yUbEO9 < JmuDnIhH8lK;) {
                    {
                        int K4o2Ka3e5;
                        K4o2Ka3e5 = 0;
                        for (; ACkJOl4GD5 > K4o2Ka3e5;) {
                            Qtnj4G[S8r5QcK][yUbEO9] += rb1UEtP82c[S8r5QcK][K4o2Ka3e5] * FmztVCJq[K4o2Ka3e5][yUbEO9];
                            K4o2Ka3e5++;
                        }
                    }
                    yUbEO9++;
                }
            }
            S8r5QcK++;
        }
    }
    {
        int S8r5QcK;
        S8r5QcK = 0;
        for (; S8r5QcK < jYKZto8;) {
            {
                int yUbEO9;
                yUbEO9 = 0;
                for (; yUbEO9 < JmuDnIhH8lK -1;) {
                    cout << Qtnj4G[S8r5QcK][yUbEO9] << " ";
                    yUbEO9++;
                }
            }
            cout << Qtnj4G[S8r5QcK][JmuDnIhH8lK -1] << endl;
            S8r5QcK++;
        }
    }
    return 0;
}

