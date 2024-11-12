int main () {
    double  l [100];
    int n;
    double  t;
    int i, Jhb9TGNe, k = (371 - 371), g = (193 - 193), f4Vk3p, aZshwvq;
    double  CuYOI3 [10] [(224 - 221)], qDFkA5tx [100], y3PizmU [100];
    cin >> n;
    for (i = (748 - 748); n > i; i = i + (34 - 33))
        for (Jhb9TGNe = (80 - 80); Jhb9TGNe < 3; Jhb9TGNe = Jhb9TGNe +(718 - 717))
            cin >> CuYOI3[i][Jhb9TGNe];
    for (i = (535 - 535); i < n - (598 - 597); i = i + 1) {
        for (g = i + 1; g < n; g = g + 1) {
            {
                if (0) {
                    return 0;
                }
            }
            l[k] = sqrt ((CuYOI3[i][0] - CuYOI3[g][0]) * (CuYOI3[i][0] - CuYOI3[g][0]) + (CuYOI3[i][1] - CuYOI3[g][1]) * (CuYOI3[i][1] - CuYOI3[g][1]) + (CuYOI3[i][(250 - 248)] - CuYOI3[g][(992 - 990)]) * (CuYOI3[i][2] - CuYOI3[g][2]));
            qDFkA5tx[k] = i;
            y3PizmU[k] = g;
            k = k + 1;
        }
    }
    k = k;
    {
        i = 0;
        while (i < k - 1) {
            {
                Jhb9TGNe = 0;
                while (Jhb9TGNe < k - i) {
                    if (l[Jhb9TGNe] < l[Jhb9TGNe +1]) {
                        t = l[Jhb9TGNe +1];
                        l[Jhb9TGNe +1] = l[Jhb9TGNe];
                        l[Jhb9TGNe] = t;
                        t = 0;
                        t = qDFkA5tx[Jhb9TGNe +1];
                        qDFkA5tx[Jhb9TGNe +1] = qDFkA5tx[Jhb9TGNe];
                        qDFkA5tx[Jhb9TGNe] = t;
                        t = 0;
                        t = y3PizmU[Jhb9TGNe +1];
                        y3PizmU[Jhb9TGNe +1] = y3PizmU[Jhb9TGNe];
                        y3PizmU[Jhb9TGNe] = t;
                    }
                    Jhb9TGNe++;
                }
            }
            i++;
        }
    }
    for (i = 0; i < k; i++) {
        f4Vk3p = qDFkA5tx[i];
        aZshwvq = y3PizmU[i];
        cout << "(" << CuYOI3[f4Vk3p][0] << "," << CuYOI3[f4Vk3p][1] << "," << CuYOI3[f4Vk3p][2] << ")-(" << CuYOI3[aZshwvq][0] << "," << CuYOI3[aZshwvq][1] << "," << CuYOI3[aZshwvq][2] << ")=";
        printf ("%.2f", l[i]);
        if (i < k - 1)
            cout << endl;
    }
    return 0;
}

