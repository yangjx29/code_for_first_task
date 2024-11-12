int main () {
    int n;
    int uqwgYvRGL9J [(70 - 64)] [6];
    int a [6];
    int b [6];
    int jkJhL7smfEv;
    int HdEDusSyZ;
    n = (420 - 420);
    for (jkJhL7smfEv = (252 - 251); 5 >= jkJhL7smfEv; jkJhL7smfEv = jkJhL7smfEv + 1)
        for (HdEDusSyZ = 1; 5 >= HdEDusSyZ; HdEDusSyZ = HdEDusSyZ +1)
            cin >> uqwgYvRGL9J[jkJhL7smfEv][HdEDusSyZ];
    for (jkJhL7smfEv = 1; jkJhL7smfEv <= 5; jkJhL7smfEv = jkJhL7smfEv + 1) {
        a[jkJhL7smfEv] = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        b[jkJhL7smfEv] = 1;
        for (HdEDusSyZ = 2; HdEDusSyZ <= 5; HdEDusSyZ++) {
            if (uqwgYvRGL9J[jkJhL7smfEv][HdEDusSyZ] > uqwgYvRGL9J[jkJhL7smfEv][a[jkJhL7smfEv]])
                a[jkJhL7smfEv] = HdEDusSyZ;
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
            if (uqwgYvRGL9J[HdEDusSyZ][jkJhL7smfEv] < uqwgYvRGL9J[b[jkJhL7smfEv]][jkJhL7smfEv])
                b[jkJhL7smfEv] = HdEDusSyZ;
        };
    }
    for (jkJhL7smfEv = 1; jkJhL7smfEv <= 5; jkJhL7smfEv = jkJhL7smfEv + 1)
        if (b[a[jkJhL7smfEv]] == jkJhL7smfEv) {
            cout << jkJhL7smfEv << ' ' << a[jkJhL7smfEv] << ' ' << uqwgYvRGL9J[jkJhL7smfEv][a[jkJhL7smfEv]] << endl;
            n++;
        }
    if (n == 0)
        cout << "not found";
    return (0);
}

