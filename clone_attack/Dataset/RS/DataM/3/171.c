int main () {
    int MuUQvOFDSf;
    int N3jdL6Gw;
    int QY10nzZUeE;
    int HcpYKhg1rm;
    int JdzZifkcyGt [1001];
    int VS7YmpR;
    int w;
    int e;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    VS7YmpR = 0;
    scanf ("%d%d", &MuUQvOFDSf, &N3jdL6Gw);
    for (QY10nzZUeE = 0; QY10nzZUeE <= MuUQvOFDSf -1; QY10nzZUeE = QY10nzZUeE +1)
        scanf ("%d", &JdzZifkcyGt[QY10nzZUeE]);
    {
        QY10nzZUeE = 0;
        while (QY10nzZUeE <= MuUQvOFDSf -1) {
            {
                HcpYKhg1rm = QY10nzZUeE;
                while (HcpYKhg1rm <= MuUQvOFDSf -1) {
                    if (JdzZifkcyGt[QY10nzZUeE] + JdzZifkcyGt[HcpYKhg1rm] == N3jdL6Gw) {
                        VS7YmpR = 1;
                        break;
                    }
                    HcpYKhg1rm = HcpYKhg1rm +1;
                };
            }
            if (VS7YmpR == 1)
                break;
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
            QY10nzZUeE = QY10nzZUeE +1;
        };
    }
    if (VS7YmpR == 1)
        ;
    else
        ;
    return 0;
}

