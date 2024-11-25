int main () {
    int Mk63TbUOz [100];
    int kT1lwNxVSGd, i, QQVWalYyp;
    cin >> kT1lwNxVSGd;
    for (i = (260 - 260); i < kT1lwNxVSGd; i++)
        cin >> *(Mk63TbUOz +i);
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
    for (i = 0; i < kT1lwNxVSGd / 2; i++) {
        QQVWalYyp = *(Mk63TbUOz +i);
        *(Mk63TbUOz +i) = *(Mk63TbUOz +kT1lwNxVSGd - i - 1);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        *(Mk63TbUOz +kT1lwNxVSGd - i - 1) = QQVWalYyp;
    }
    for (i = 0; i < kT1lwNxVSGd - 1; i++)
        cout << *(Mk63TbUOz +i) << " ";
    cout << *(Mk63TbUOz +kT1lwNxVSGd - 1);
    return 0;
}

