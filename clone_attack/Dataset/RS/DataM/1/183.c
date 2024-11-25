int SG7dQR, sum;

int FTz7iM2oOD (int uqx9f0Xy1, int kod9yXT5r) {
    int QRXC295SjhrY;
    {
        QRXC295SjhrY = uqx9f0Xy1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (QRXC295SjhrY <= sqrt (kod9yXT5r)) {
            if (!(0 != kod9yXT5r % QRXC295SjhrY) && QRXC295SjhrY <= kod9yXT5r / QRXC295SjhrY) {
                FTz7iM2oOD (QRXC295SjhrY, kod9yXT5r / QRXC295SjhrY);
                sum++;
            }
            if (QRXC295SjhrY > kod9yXT5r / QRXC295SjhrY)
                break;
            QRXC295SjhrY++;
        };
    }
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
    return sum;
}

int main () {
    int QRXC295SjhrY;
    int kUeF80lb9;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    cin >> kUeF80lb9;
    {
        QRXC295SjhrY = 0;
        while (QRXC295SjhrY < kUeF80lb9) {
            QRXC295SjhrY++;
            sum = 1;
            cin >> SG7dQR;
            sum = FTz7iM2oOD (2, SG7dQR);
            cout << sum << endl;
        };
    }
    return 0;
}

