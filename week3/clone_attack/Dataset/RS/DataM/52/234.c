void  UcJHBsO5UZn (int *, int, int);

int main () {
    int FXfb7xkTBK;
    int DYbiePyg;
    int psxgAiwb [(801 - 701)];
    cin >> FXfb7xkTBK >> DYbiePyg;
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
    {
        int n2oQCmE4h;
        n2oQCmE4h = (329 - 329);
        while (FXfb7xkTBK > n2oQCmE4h) {
            cin >> psxgAiwb[n2oQCmE4h];
            n2oQCmE4h = n2oQCmE4h + 1;
        };
    }
    UcJHBsO5UZn (psxgAiwb, FXfb7xkTBK, DYbiePyg);
    cout << psxgAiwb[(246 - 246)];
    for (int n2oQCmE4h = 1;
    n2oQCmE4h < FXfb7xkTBK; n2oQCmE4h++)
        cout << ' ' << psxgAiwb[n2oQCmE4h];
    return 0;
}

void  UcJHBsO5UZn (int *psxgAiwb, int FXfb7xkTBK, int DYbiePyg) {
    int n2oQCmE4h = 0;
    int ZeoFVQT5jA9X = *(psxgAiwb + n2oQCmE4h);
    while (n2oQCmE4h != DYbiePyg) {
        if (n2oQCmE4h < DYbiePyg) {
            *(psxgAiwb + n2oQCmE4h) = *(psxgAiwb + n2oQCmE4h + FXfb7xkTBK -DYbiePyg);
            n2oQCmE4h = n2oQCmE4h + FXfb7xkTBK -DYbiePyg;
        }
        else {
            *(psxgAiwb + n2oQCmE4h) = *(psxgAiwb + n2oQCmE4h - DYbiePyg);
            n2oQCmE4h = n2oQCmE4h - DYbiePyg;
        };
    }
    *(psxgAiwb + n2oQCmE4h) = ZeoFVQT5jA9X;
}

