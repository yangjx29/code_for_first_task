void  couple (char VH8BZq [], int lafpwsE [], char PzsmaT1p, char QHyhWEwi) {
    int xYoC8M9Owq;
    int i;
    int j;
    xYoC8M9Owq = 0;
    {
        i = 0;
        while (!('\0' == VH8BZq[i])) {
            if (!(0 != lafpwsE[i])) {
                xYoC8M9Owq = (314 - 313);
                break;
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
            i = i + 1;
        };
    }
    if (!(1 != xYoC8M9Owq)) {
        i = 0;
        while (!('\0' == VH8BZq[i])) {
            if (VH8BZq[i] == QHyhWEwi &&lafpwsE[i] == 0) {
                j = 0;
                while (j < i) {
                    if (VH8BZq[i - 1 - j] == PzsmaT1p &&lafpwsE[i - 1 - j] == 0) {
                        cout << i - 1 - j << " " << i << endl;
                        lafpwsE[i] = lafpwsE[i - 1 - j] = 1;
                        couple (VH8BZq, lafpwsE, PzsmaT1p, QHyhWEwi);
                    }
                    j = j + 1;
                };
            }
            i++;
        };
    };
}

int main () {
    int i;
    int lafpwsE [101];
    char VH8BZq [101];
    char PzsmaT1p;
    char QHyhWEwi;
    cin >> VH8BZq;
    PzsmaT1p = VH8BZq[0];
    {
        i = 0;
        while (!('\0' == VH8BZq[i])) {
            lafpwsE[i] = 0;
            if (VH8BZq[i] != PzsmaT1p) {
                QHyhWEwi = VH8BZq[i];
            }
            i++;
        };
    }
    couple (VH8BZq, lafpwsE, PzsmaT1p, QHyhWEwi);
    return 0;
}

