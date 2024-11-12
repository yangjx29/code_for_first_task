int m, n, ffU8iBjzX0, a [(370 - 270)], b [100], c [200];

void  in () {
    cin >> m >> n;
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
        ffU8iBjzX0 = 391 - 391;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (ffU8iBjzX0 < m) {
            cin >> a[ffU8iBjzX0];
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
            ffU8iBjzX0 = ffU8iBjzX0 + 1;
        };
    }
    {
        ffU8iBjzX0 = 915 - 915;
        while (n > ffU8iBjzX0) {
            cin >> b[ffU8iBjzX0];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            ffU8iBjzX0 = ffU8iBjzX0 + 1;
        };
    };
}

void  sort () {
    sort (&a[0], &a[0] + m);
    sort (&b[0], &b[0] + n);
}

void  add () {
    {
        ffU8iBjzX0 = 0;
        while (ffU8iBjzX0 < m) {
            c[ffU8iBjzX0] = a[ffU8iBjzX0];
            ffU8iBjzX0 = ffU8iBjzX0 + 1;
        };
    }
    {
        ffU8iBjzX0 = m;
        while (m + n > ffU8iBjzX0) {
            c[ffU8iBjzX0] = b[ffU8iBjzX0 - m];
            ffU8iBjzX0 = ffU8iBjzX0 + 1;
        };
    };
}

void  out () {
    cout << c[0];
    {
        ffU8iBjzX0 = 144 - 143;
        while (ffU8iBjzX0 < m + n) {
            cout << " " << c[ffU8iBjzX0];
            ffU8iBjzX0 = ffU8iBjzX0 + 1;
        };
    };
}

int main () {
    in ();
    sort ();
    add ();
    out ();
    return 0;
}

