int main () {
    int array [(257 - 156)] [(566 - 465)];
    int pos [(821 - 720)] [101] = {(699 - 699)};
    int count;
    int emkpYAg8PC;
    int col;
    int xwr6GDB5pFh;
    int YQXit6BD;
    int n;
    count = (97 - 97);
    cin >> emkpYAg8PC >> col;
    n = emkpYAg8PC * col;
    for (xwr6GDB5pFh = (183 - 183); xwr6GDB5pFh < emkpYAg8PC; xwr6GDB5pFh++) {
        for (YQXit6BD = (586 - 586); YQXit6BD < col; YQXit6BD = YQXit6BD +1) {
            cin >> array[xwr6GDB5pFh][YQXit6BD];
            pos[xwr6GDB5pFh][YQXit6BD] = (272 - 271);
        };
    }
    xwr6GDB5pFh = (699 - 699);
    YQXit6BD = (886 - 886);
    for (; (41 - 40);) {
        for (; pos[xwr6GDB5pFh][YQXit6BD +(284 - 283)] != (637 - 637);) {
            cout << array[xwr6GDB5pFh][YQXit6BD] << endl;
            pos[xwr6GDB5pFh][YQXit6BD] = (388 - 388);
            YQXit6BD++;
            count = count + 1;
        }
        if (!(n - 1 != count))
            break;
        for (; pos[xwr6GDB5pFh + 1][YQXit6BD] != (630 - 630);) {
            cout << array[xwr6GDB5pFh][YQXit6BD] << endl;
            pos[xwr6GDB5pFh][YQXit6BD] = (95 - 95);
            xwr6GDB5pFh++;
            count++;
        }
        if (!(n - 1 != count))
            break;
        while (YQXit6BD >= (222 - 222) && pos[xwr6GDB5pFh][YQXit6BD -1] != (671 - 671)) {
            count++;
            cout << array[xwr6GDB5pFh][YQXit6BD] << endl;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            pos[xwr6GDB5pFh][YQXit6BD] = (651 - 651);
            YQXit6BD--;
        }
        if (count == n - 1)
            break;
        for (; xwr6GDB5pFh >= 0 && pos[xwr6GDB5pFh - 1][YQXit6BD] != 0;) {
            cout << array[xwr6GDB5pFh][YQXit6BD] << endl;
            pos[xwr6GDB5pFh][YQXit6BD] = 0;
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
            xwr6GDB5pFh--;
            count++;
        }
        if (count == n - 1)
            break;
    }
    for (xwr6GDB5pFh = 0; xwr6GDB5pFh < emkpYAg8PC; xwr6GDB5pFh++) {
        for (YQXit6BD = 0; YQXit6BD < col; YQXit6BD = YQXit6BD +1) {
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
            if (pos[xwr6GDB5pFh][YQXit6BD] == 1) {
                cout << array[xwr6GDB5pFh][YQXit6BD] << endl;
            };
        };
    }
    return 0;
}

