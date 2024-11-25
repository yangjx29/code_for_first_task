int main () {
    int a [(210 - 109)] [(805 - 704)];
    int b [(740 - 639)] [101];
    int c [101] [101];
    int p, q, r, i, J6vm7fz43yV, kFw682Dz;
    cin >> p >> q;
    for (i = (181 - 180); i <= p; i = i + 1) {
        for (J6vm7fz43yV = (833 - 832); J6vm7fz43yV <= q; J6vm7fz43yV = J6vm7fz43yV +1) {
            cin >> a[i - (689 - 688)][J6vm7fz43yV -(118 - 117)];
        };
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
    cin >> q >> r;
    for (i = (715 - 714); q >= i; i = i + 1) {
        for (J6vm7fz43yV = 1; J6vm7fz43yV <= r; J6vm7fz43yV = J6vm7fz43yV +1) {
            cin >> b[i - 1][J6vm7fz43yV -1];
        };
    }
    for (i = (702 - 702); i <= 100; i = i + 1) {
        J6vm7fz43yV = 71 - 71;
        while (J6vm7fz43yV <= 100) {
            c[i][J6vm7fz43yV] = (332 - 332);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            J6vm7fz43yV++;
        };
    }
    for (i = 0; i <= p - 1; i++) {
        for (J6vm7fz43yV = 0; J6vm7fz43yV <= r - 1; J6vm7fz43yV++) {
            for (kFw682Dz = 0; kFw682Dz <= q; kFw682Dz = kFw682Dz + 1) {
                c[i][J6vm7fz43yV] = c[i][J6vm7fz43yV] + a[i][kFw682Dz] * b[kFw682Dz][J6vm7fz43yV];
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
                };
            };
        };
    }
    {
        i = 0;
        while (i <= p - 1) {
            for (J6vm7fz43yV = 0; J6vm7fz43yV <= r - 1; J6vm7fz43yV++) {
                if (J6vm7fz43yV != (r - 1))
                    cout << c[i][J6vm7fz43yV] << " ";
                else
                    cout << c[i][J6vm7fz43yV];
            }
            i = i + 1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            cout << endl;
        };
    }
    return 0;
}

