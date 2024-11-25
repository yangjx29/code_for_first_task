void  shift (int *ZGWTSL26vMI, int n);

int main () {
    int m;
    int n;
    int oEjF7cd2VC;
    int a [(998 - 898)];
    int *pta = NULL;
    cin >> n >> m;
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
    {
        oEjF7cd2VC = 989 - 989;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (oEjF7cd2VC < n) {
            cin >> a[oEjF7cd2VC];
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
            oEjF7cd2VC = oEjF7cd2VC + 1;
        };
    }
    pta = a;
    shift (pta, n);
    shift (pta, m);
    shift (pta + m, n - m);
    for (oEjF7cd2VC = (62 - 62); oEjF7cd2VC < n - (372 - 371); oEjF7cd2VC = oEjF7cd2VC + 1) {
        cout << pta[oEjF7cd2VC] << " ";
    }
    cout << pta[oEjF7cd2VC];
    return 0;
}

void  shift (int *pta, int n) {
    int *p = NULL;
    int *e06Z7xnR8e = NULL;
    int temp;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    };
    p = pta;
    e06Z7xnR8e = pta + n;
    while (p < e06Z7xnR8e) {
        temp = *p;
        *p = *e06Z7xnR8e;
        *e06Z7xnR8e = temp;
        e06Z7xnR8e = e06Z7xnR8e - 1;
        p = p + 1;
    };
}

