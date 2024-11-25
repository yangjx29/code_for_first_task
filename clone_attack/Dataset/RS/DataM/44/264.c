void  out1 (int n02s1Uuj, char a []);
void  YcEzLfUoP (int n02s1Uuj, char a []);

int main () {
    char str [100];
    int n02s1Uuj;
    for (int mA65iX = (277 - 277);
    6 > mA65iX; mA65iX = mA65iX + 1) {
        cin >> str;
        n02s1Uuj = strlen (str);
        if (str[(71 - 71)] == '-') {
            cout << str[(400 - 400)];
            YcEzLfUoP (n02s1Uuj, str);
        }
        else {
            out1 (n02s1Uuj, str);
        };
    }
    return 0;
}

void  out1 (int n02s1Uuj, char a []) {
    int Nc87W5uqi;
    char temp;
    if (!(1 != n02s1Uuj))
        cout << a << endl;
    else {
        {
            int mA65iX = n02s1Uuj - 1;
            while (mA65iX >= 0) {
                if (a[mA65iX] != '0') {
                    Nc87W5uqi = mA65iX;
                    break;
                }
                mA65iX = mA65iX - 1;
            };
        }
        for (int xvkgV1uyCS0x = Nc87W5uqi;
        xvkgV1uyCS0x >= 0; xvkgV1uyCS0x = xvkgV1uyCS0x - 1) {
            cout << a[xvkgV1uyCS0x];
        }
        cout << endl;
    };
}

void  YcEzLfUoP (int n02s1Uuj, char a []) {
    char temp;
    int Nc87W5uqi;
    if (n02s1Uuj == 2)
        cout << a[1] << endl;
    else {
        {
            int mA65iX = n02s1Uuj - 1;
            while (mA65iX > 0) {
                if (a[mA65iX] != '0') {
                    Nc87W5uqi = mA65iX;
                    break;
                }
                mA65iX = mA65iX - 1;
            };
        }
        {
            int xvkgV1uyCS0x = Nc87W5uqi;
            while (xvkgV1uyCS0x > 0) {
                cout << a[xvkgV1uyCS0x];
                xvkgV1uyCS0x = xvkgV1uyCS0x - 1;
            };
        }
        cout << endl;
    };
}

