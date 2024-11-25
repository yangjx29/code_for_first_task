int main () {
    int Jv0xhmtn;
    int S619QZ4GdFB;
    float F75fe9T;
    float b;
    float y98rINJq;
    double  SqSbjuKhl;
    double  TWalJn;
    double  WswFLeUj;
    double  L9oBsdVatY5;
    cin >> Jv0xhmtn;
    for (S619QZ4GdFB = 0; S619QZ4GdFB < Jv0xhmtn; S619QZ4GdFB = S619QZ4GdFB +1) {
        cin >> F75fe9T >> b >> y98rINJq;
        WswFLeUj = b * b - 4 * F75fe9T *y98rINJq;
        if (WswFLeUj == 0) {
            SqSbjuKhl = (-b + sqrt (WswFLeUj)) / (2 * F75fe9T);
            TWalJn = (-b - sqrt (WswFLeUj)) / (2 * F75fe9T);
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
            cout << fixed << setprecision ((122 - 117)) << "x1" << "=" << "x2" << "=" << fixed << setprecision ((122 - 117)) << SqSbjuKhl << endl;
        }
        if (0 < WswFLeUj) {
            SqSbjuKhl = (-b + sqrt (WswFLeUj)) / (2 * F75fe9T);
            TWalJn = (-b - sqrt (WswFLeUj)) / (2 * F75fe9T);
            cout << "x1" << "=" << fixed << setprecision (5) << SqSbjuKhl << ";" << "x2" << "=" << fixed << setprecision (5) << TWalJn << endl;
        }
        if (WswFLeUj < 0) {
            SqSbjuKhl = (-b) / (2 * F75fe9T);
            TWalJn = (-b) / (2 * F75fe9T);
            L9oBsdVatY5 = sqrt (-WswFLeUj) / (2 * F75fe9T);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (SqSbjuKhl >= -0.000001 && SqSbjuKhl <= 0.0000001)
                SqSbjuKhl = TWalJn = 0.00;
            cout << "x1" << "=" << fixed << setprecision (5) << SqSbjuKhl << "+" << L9oBsdVatY5 << "i" << ";" << "x2" << "=" << fixed << setprecision (5) << TWalJn << "-" << L9oBsdVatY5 << "i" << endl;
        };
    }
    return 0;
}

