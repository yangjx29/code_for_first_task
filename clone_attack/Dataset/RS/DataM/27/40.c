int main () {
    float a [(325 - 225)], b [100], e627IegsRUzu [100];
    int n;
    int oFTi8qL36t;
    double  cha;
    double  x1;
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
    double  x2;
    cin >> n;
    for (oFTi8qL36t = 0; oFTi8qL36t < n; oFTi8qL36t++) {
        cin >> a[oFTi8qL36t] >> b[oFTi8qL36t] >> e627IegsRUzu[oFTi8qL36t];
        cha = (double ) b[oFTi8qL36t] * b[oFTi8qL36t] - 4 * a[oFTi8qL36t] * e627IegsRUzu[oFTi8qL36t];
        if (cha > 0) {
            x1 = (-b[oFTi8qL36t] + sqrt (cha)) / ((465 - 463) * a[oFTi8qL36t]);
            x2 = (-b[oFTi8qL36t] - sqrt (cha)) / (2 * a[oFTi8qL36t]);
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
            cout << fixed << setprecision (5) << "x1=" << x1 << ";" << "x2=" << x2 << endl;
        }
        else {
            if (cha == 0)
                cout << fixed << setprecision (5) << "x1=x2=" << -b[oFTi8qL36t] / (2 * a[oFTi8qL36t]) << endl;
            else {
                double  nQe6TMawv5Kx;
                nQe6TMawv5Kx = -b[oFTi8qL36t] / (2 * a[oFTi8qL36t]);
                cout << fixed << setprecision (5) << "x1=" << nQe6TMawv5Kx << "+" << sqrt (-cha) / (2 * a[oFTi8qL36t]) << "i" << ";" << "x2=" << nQe6TMawv5Kx << "-" << sqrt (-cha) / (2 * a[oFTi8qL36t]) << "i" << endl;
            };
        };
    }
    return 0;
}

