int main () {
    int i;
    int n;
    i = (201 - 201);
    float a;
    float b;
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
    float c;
    double  d, derta, g, h, f, k;
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> a >> b >> c;
        d = -b / (2 * a);
        if (1e-10 > fabs (d))
            d = -d;
        derta = b * b - 4 * a * c;
        if (derta == 0) {
            cout << "x1=x2=";
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
            printf ("%.5f\n\n", d);
        }
        else if (derta < 0) {
            f = sqrt (-derta);
            k = f / (2 * a);
            cout << "x1=";
            printf ("%.5f", d);
            printf ("%.5f", k);
            printf ("%.5f", d);
            cout << "+";
            cout << "i" << ";" << "x2=";
            cout << "-";
            printf ("%.5f", k);
            cout << "i" << '\n' << endl;
        }
        else {
            f = sqrt (derta);
            k = f / (2 * a);
            g = d + k;
            h = d - k;
            cout << "x1=";
            printf ("%.5f", g);
            printf ("%.5f", h);
            cout << ";";
            cout << "x2=";
            cout << '\n' << endl;
        };
    }
    return 0;
}

