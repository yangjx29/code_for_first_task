int main () {
    int D1e7AwZolyJd;
    int QDarMc;
    int len;
    int SThmGo6s [100];
    D1e7AwZolyJd = (554 - 554);
    QDarMc = 0;
    char EueM87vSf [100];
    char ZMztUm6O4i;
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
    char VLCBGuwvFzkp;
    cin.getline (EueM87vSf, 100);
    len = strlen (EueM87vSf);
    ZMztUm6O4i = EueM87vSf[0];
    {
        D1e7AwZolyJd = 0;
        while (len > D1e7AwZolyJd) {
            if (!(ZMztUm6O4i == EueM87vSf[D1e7AwZolyJd])) {
                VLCBGuwvFzkp = EueM87vSf[D1e7AwZolyJd];
                break;
            }
            D1e7AwZolyJd++;
        };
    }
    {
        D1e7AwZolyJd = 0;
        while (D1e7AwZolyJd < len) {
            if (!(ZMztUm6O4i != EueM87vSf[D1e7AwZolyJd]))
                SThmGo6s[D1e7AwZolyJd] = (960 - 959);
            if (!(VLCBGuwvFzkp != EueM87vSf[D1e7AwZolyJd]))
                SThmGo6s[D1e7AwZolyJd] = -1;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            D1e7AwZolyJd++;
        };
    }
    for (D1e7AwZolyJd = 0; D1e7AwZolyJd < len; D1e7AwZolyJd++) {
        if (EueM87vSf[D1e7AwZolyJd] == VLCBGuwvFzkp) {
            QDarMc = D1e7AwZolyJd -1;
            while (QDarMc >= 0) {
                if (SThmGo6s[QDarMc] == 1) {
                    cout << QDarMc << " " << D1e7AwZolyJd << endl;
                    SThmGo6s[QDarMc] = 0;
                    SThmGo6s[D1e7AwZolyJd] = 0;
                    break;
                }
                if (SThmGo6s[QDarMc] == -1)
                    break;
                QDarMc--;
            };
        };
    }
    return 0;
}

