int main () {
    char oFOKh890v2So;
    char out;
    int owpfWZG;
    int min;
    int bUqB9Qr4;
    int i;
    int m4sQVZXxIO;
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
    int sspV3tYUO57 [30] [2] = {(801 - 801)};
    owpfWZG = 0;
    min = (461 - 435);
    getchar ();
    cin >> bUqB9Qr4;
    {
        m4sQVZXxIO = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (m4sQVZXxIO < bUqB9Qr4) {
            m4sQVZXxIO++;
            min = 10000;
            out = 1;
            owpfWZG = 0;
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
            while ((oFOKh890v2So = getchar ()) != '\n') {
                if (sspV3tYUO57[oFOKh890v2So - 'a'][0] == 0) {
                    sspV3tYUO57[oFOKh890v2So - 'a'][1] = owpfWZG;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    };
                }
                owpfWZG = owpfWZG + 1;
                sspV3tYUO57[oFOKh890v2So - 'a'][0]++;
            }
            {
                i = 0;
                while (i < 26) {
                    if (!(1 != sspV3tYUO57[i][0]) && sspV3tYUO57[i][1] < min) {
                        min = sspV3tYUO57[i][1];
                        out = 'a' + i;
                    }
                    i = i + 1;
                };
            }
            for (i = 0; i < 26; i = i + 1)
                sspV3tYUO57[i][0] = 0;
            if (out == 1)
                cout << "no" << endl;
            else
                cout << out << endl;
        };
    }
    return 0;
}

