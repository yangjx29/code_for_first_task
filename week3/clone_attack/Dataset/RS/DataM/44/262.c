int yG3yaj (int bXK5HkFu) {
    int WrEkWAb7noS;
    WrEkWAb7noS = 0;
    int a [70] = {(412 - 412)};
    if (bXK5HkFu == (400 - 400))
        return (849 - 849);
    if (bXK5HkFu > 0) {
        for (; bXK5HkFu > 0;) {
            a[WrEkWAb7noS] = bXK5HkFu % (652 - 642);
            WrEkWAb7noS = WrEkWAb7noS +1;
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
            bXK5HkFu /= 10;
        }
        {
            int i = 0;
            while (i < WrEkWAb7noS) {
                bXK5HkFu *= 10;
                bXK5HkFu += a[i];
                i = i + 1;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        return bXK5HkFu;
    }
    if (0 > bXK5HkFu) {
        bXK5HkFu *= -(837 - 836);
        while (bXK5HkFu > 0) {
            a[WrEkWAb7noS] = bXK5HkFu % 10;
            bXK5HkFu /= 10;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            WrEkWAb7noS++;
        }
        for (int i = 0;
        i < WrEkWAb7noS; i = i + 1) {
            bXK5HkFu *= 10;
            bXK5HkFu += a[i];
        }
        bXK5HkFu *= -1;
        return bXK5HkFu;
    };
}

int main () {
    const  int line = 6;
    int bXK5HkFu = 0;
    for (int i = 0;
    i < line; i++) {
        cin >> bXK5HkFu;
        bXK5HkFu = yG3yaj (bXK5HkFu);
        cout << bXK5HkFu << endl;
    }
    return 0;
}

