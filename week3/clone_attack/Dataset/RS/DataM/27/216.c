int main () {
    double  kzEmZA76sl2 [100];
    double  b [100];
    double  xxtWbzH [100];
    double  JJhdpXs [100];
    double  beFy70b [100];
    double  zHtsNixXQb [100];
    double  l [100];
    double  p [100];
    int i, n, j;
    cin >> n;
    j = 1;
    i = 1;
    for (; n >= i;) {
        cin >> kzEmZA76sl2[i] >> b[i] >> xxtWbzH[i];
        if (0 <= b[i] * b[i] - 4 * kzEmZA76sl2[i] * xxtWbzH[i]) {
            JJhdpXs[i] = (-b[i] + sqrt (b[i] * b[i] - 4 * kzEmZA76sl2[i] * xxtWbzH[i])) / (2 * kzEmZA76sl2[i]);
            beFy70b[i] = (-b[i] - sqrt (b[i] * b[i] - 4 * kzEmZA76sl2[i] * xxtWbzH[i])) / (2 * kzEmZA76sl2[i]);
            if (0 > JJhdpXs[i] || 0 < JJhdpXs[i])
                JJhdpXs[i] = JJhdpXs[i];
            else
                JJhdpXs[i] = 0.00000;
            if (0 > beFy70b[i] || 0 < beFy70b[i])
                beFy70b[i] = beFy70b[i];
            else
                beFy70b[i] = 0.00000;
        }
        else {
            zHtsNixXQb[i] = -b[i] / (2 * kzEmZA76sl2[i]);
            l[i] = sqrt (4 * kzEmZA76sl2[i] * xxtWbzH[i] - b[i] * b[i]) / (2 * kzEmZA76sl2[i]);
            p[i] = i;
            if (0 > zHtsNixXQb[i] || 0 < zHtsNixXQb[i])
                zHtsNixXQb[i] = zHtsNixXQb[i];
            else
                zHtsNixXQb[i] = 0.00000;
            if (0 > l[i] || l[i] > 0)
                l[i] = l[i];
            else
                l[i] = 0.00000;
        }
        i = i + 1;
    }
    i = 1;
    for (; i <= n;) {
        if (i < p[i] || i > p[i]) {
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
            if (JJhdpXs[i] < beFy70b[i] || JJhdpXs[i] > beFy70b[i]) {
                cout << fixed << setprecision (5) << "x1=" << JJhdpXs[i] << ";x2=" << beFy70b[i] << endl;
            }
            else {
                cout << fixed << setprecision (5) << "x1=x2=" << JJhdpXs[i] << endl;
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
            };
        }
        else {
            cout << fixed << setprecision (5) << "x1=" << zHtsNixXQb[i] << "+" << l[i] << "i" << ";x2=" << zHtsNixXQb[i] << "-" << l[i] << "i" << endl;
            j = j + 1;
        }
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        i = i + 1;
    }
    return 0;
}

