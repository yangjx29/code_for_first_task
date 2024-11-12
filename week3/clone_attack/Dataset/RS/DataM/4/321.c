int main () {
    int ajDvEUY;
    int kN3nlf;
    int rzB2blkmi5X9;
    int fx1etofJnd;
    int QI1KM0zv8a;
    ajDvEUY = (476 - 475);
    int qAw6C0L [(934 - 733)] [(1097 - 896)] = {(612 - 612)};
    int BAekoXv0 [(10946 - 945)] = {(985 - 985)};
    {
        fx1etofJnd = 405 - 404;
        while (fx1etofJnd <= 200) {
            {
                QI1KM0zv8a = 193 - 192;
                while (QI1KM0zv8a <= 200) {
                    qAw6C0L[fx1etofJnd][QI1KM0zv8a] = -(257 - 256);
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    QI1KM0zv8a = QI1KM0zv8a +1;
                };
            }
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
            fx1etofJnd = fx1etofJnd + 1;
        };
    }
    cin >> kN3nlf >> rzB2blkmi5X9;
    {
        fx1etofJnd = 429 - 428;
        while (kN3nlf >= fx1etofJnd) {
            {
                QI1KM0zv8a = 635 - 634;
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
                while (QI1KM0zv8a <= rzB2blkmi5X9) {
                    cin >> qAw6C0L[fx1etofJnd][QI1KM0zv8a];
                    QI1KM0zv8a++;
                };
            }
            fx1etofJnd++;
        };
    }
    fx1etofJnd = 1, QI1KM0zv8a = 1;
    while (ajDvEUY <= kN3nlf * rzB2blkmi5X9) {
        if (qAw6C0L[fx1etofJnd][QI1KM0zv8a] != -1)
            BAekoXv0[ajDvEUY++] = qAw6C0L[fx1etofJnd][QI1KM0zv8a];
        if (QI1KM0zv8a == 1 || fx1etofJnd == kN3nlf) {
            QI1KM0zv8a = fx1etofJnd + QI1KM0zv8a;
            fx1etofJnd = 1;
        }
        else {
            fx1etofJnd = fx1etofJnd + 1;
            QI1KM0zv8a = QI1KM0zv8a -1;
        };
    }
    {
        fx1etofJnd = 1;
        while (fx1etofJnd <= kN3nlf * rzB2blkmi5X9) {
            cout << BAekoXv0[fx1etofJnd] << endl;
            fx1etofJnd++;
        };
    }
    return 0;
}

