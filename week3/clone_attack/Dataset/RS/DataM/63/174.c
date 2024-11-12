int main () {
    int x1;
    int sSnmJ03ijfBP;
    int TuT2zDn;
    int y2;
    int qrNQZjWy;
    int leHX4SzY;
    int m;
    int eqmBMYDS;
    int a [100] [100];
    int WOa7CFuIiz [100] [100];
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
    int c [100] [100];
    memset (c, 0, sizeof (c));
    cin >> x1 >> TuT2zDn;
    {
        qrNQZjWy = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (x1 > qrNQZjWy) {
            for (leHX4SzY = 0; leHX4SzY < TuT2zDn; leHX4SzY = leHX4SzY + 1)
                cin >> a[qrNQZjWy][leHX4SzY];
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
            qrNQZjWy = qrNQZjWy + 1;
        };
    }
    cin >> sSnmJ03ijfBP >> y2;
    for (qrNQZjWy = 0; sSnmJ03ijfBP > qrNQZjWy; qrNQZjWy++)
        for (leHX4SzY = 0; y2 > leHX4SzY; leHX4SzY = leHX4SzY + 1)
            cin >> WOa7CFuIiz[qrNQZjWy][leHX4SzY];
    {
        qrNQZjWy = 0;
        while (x1 > qrNQZjWy) {
            for (leHX4SzY = 0; y2 > leHX4SzY; leHX4SzY++) {
                m = 0;
                for (eqmBMYDS = 0; sSnmJ03ijfBP > eqmBMYDS; eqmBMYDS++)
                    c[qrNQZjWy][leHX4SzY] += a[qrNQZjWy][m++] * WOa7CFuIiz[eqmBMYDS][leHX4SzY];
            }
            qrNQZjWy = qrNQZjWy + 1;
        };
    }
    for (qrNQZjWy = 0; x1 > qrNQZjWy; qrNQZjWy++) {
        for (leHX4SzY = 0; y2 - 1 > leHX4SzY; leHX4SzY++)
            cout << c[qrNQZjWy][leHX4SzY] << ' ';
        cout << c[qrNQZjWy][y2 - 1] << endl;
    }
    return 0;
}

