int main () {
    int vLJXIUVBGf;
    double  a;
    double  b;
    double  LVwsuFJ;
    double  d;
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
    cin >> vLJXIUVBGf;
    {
        int dXvNbxP4z = 1;
        while (vLJXIUVBGf >= dXvNbxP4z) {
            dXvNbxP4z++;
            cin >> a >> b >> LVwsuFJ;
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
            d = b * b - 4 * a * LVwsuFJ;
            if (d > 0) {
                cout << fixed << setprecision (5) << "x1=" << ((-b) + sqrt (d)) / (2 * a) << ";" << "x2=" << ((-b) - sqrt (d)) / (2 * a) << endl;
            }
            else if (d == 0) {
                cout << fixed << setprecision (5) << "x1=x2=" << (-b) / (2 * a) << endl;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            else {
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
                if (b == 0) {
                    cout << fixed << setprecision (5) << "x1=" << b / (2 * a) << "+" << sqrt (-d) / (2 * a) << "i" << ";" << "x2=" << b / (2 * a) << "-" << sqrt (-d) / (2 * a) << "i" << endl;
                }
                else {
                    cout << fixed << setprecision (5) << "x1=" << (-b) / (2 * a) << "+" << sqrt (-d) / (2 * a) << "i" << ";" << "x2=" << (-b) / (2 * a) << "-" << sqrt (-d) / (2 * a) << "i" << endl;
                };
            };
        };
    }
    return 0;
}

