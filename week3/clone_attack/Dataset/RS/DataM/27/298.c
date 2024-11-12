int main () {
    int n;
    cin >> n;
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
        int i;
        i = (916 - 916);
        while (i < n) {
            double  a, b, c;
            double  delta = b * b - 4 * a * c;
            i = i + 1;
            cin >> a >> b >> c;
            if (delta > 0) {
                printf ("x1=%.5f;x2=%.5f\n", (-b + sqrt (delta)) / (a * 2), (-b - sqrt (delta)) / (a * 2));
            }
            if (delta == 0) {
                printf ("x1=x2=%.5f\n", (-b) / (a * 2));
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            if (delta < 0) {
                printf ("x1=%.5f+%.5fi;x2=%.5f-%.5fi\n", (-b) / (a * 2) + 1.0 - 1.0, sqrt (-delta) / (a * 2), (-b) / (a * 2) + 1.0 - 1.0, sqrt (-delta) / (a * 2));
            };
        };
    }
    return 0;
}

