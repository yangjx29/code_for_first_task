int main () {
    char a [(352 - 252)];
    signed  int uB9P0Oiyv8 = (996 - 995), zKhcWIgUSGlF [100], OFUYdvEXk = (680 - 680);
    {
        int wb5R0hM = (355 - 355);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (wb5R0hM < 100) {
            cin.get (a[wb5R0hM]);
            if (a[wb5R0hM] == '\n')
                break;
            if (a[wb5R0hM] == ' ') {
                zKhcWIgUSGlF[uB9P0Oiyv8] = wb5R0hM;
                uB9P0Oiyv8 = uB9P0Oiyv8 + 1;
            }
            wb5R0hM++;
            OFUYdvEXk = OFUYdvEXk +1;
        };
    }
    zKhcWIgUSGlF[0] = -1;
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
    zKhcWIgUSGlF[uB9P0Oiyv8] = OFUYdvEXk;
    for (int wb5R0hM = uB9P0Oiyv8 - 1;
    wb5R0hM >= 0; wb5R0hM = wb5R0hM - 1) {
        for (int dCEvzVdlP = zKhcWIgUSGlF[wb5R0hM] + 1;
        dCEvzVdlP < zKhcWIgUSGlF[wb5R0hM + 1]; dCEvzVdlP++) {
            cout << a[dCEvzVdlP];
        }
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (wb5R0hM != 0)
            cout << " ";
    }
    return 0;
}

