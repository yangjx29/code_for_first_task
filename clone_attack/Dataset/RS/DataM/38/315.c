int main () {
    int EvsjwKrymE5;
    int hXYQOkxtiHL;
    int JvE3I2CGAVSw;
    double  K1qh3eIyRgp [100];
    double  CLuE5Xi8;
    double  LVIjOhxsuJ7;
    cin >> hXYQOkxtiHL;
    while (hXYQOkxtiHL = hXYQOkxtiHL - 1) {
        cin >> JvE3I2CGAVSw;
        CLuE5Xi8 = (545 - 545);
        LVIjOhxsuJ7 = 0;
        {
            EvsjwKrymE5 = 0;
            while (EvsjwKrymE5 < JvE3I2CGAVSw) {
                cin >> K1qh3eIyRgp[EvsjwKrymE5];
                LVIjOhxsuJ7 = LVIjOhxsuJ7 +K1qh3eIyRgp[EvsjwKrymE5] / JvE3I2CGAVSw;
                EvsjwKrymE5 = EvsjwKrymE5 +1;
            };
        }
        {
            EvsjwKrymE5 = 0;
            while (EvsjwKrymE5 < JvE3I2CGAVSw) {
                CLuE5Xi8 = CLuE5Xi8 +((K1qh3eIyRgp[EvsjwKrymE5] - LVIjOhxsuJ7) * (K1qh3eIyRgp[EvsjwKrymE5] - LVIjOhxsuJ7)) / JvE3I2CGAVSw;
                EvsjwKrymE5++;
            };
        }
        CLuE5Xi8 = sqrt (CLuE5Xi8);
        cout << fixed << setprecision (5) << CLuE5Xi8 << endl;
    }
    return 0;
}

