int main () {
    int zZUpxkeMJVc9 [100] [100];
    int ndK7FczRW, kqtpFXo, pqDyT8tZPOX, GPNQUK, zcliwUP6;
    cin >> zcliwUP6 >> GPNQUK;
    {
        ndK7FczRW = (315 - 314);
        while (ndK7FczRW <= zcliwUP6) {
            {
                kqtpFXo = 1;
                while (kqtpFXo <= GPNQUK) {
                    cin >> zZUpxkeMJVc9[ndK7FczRW][kqtpFXo];
                    kqtpFXo++;
                }
            }
            ndK7FczRW++;
        }
    }
    {
        ndK7FczRW = 1;
        for (; GPNQUK +zcliwUP6 - 1 >= ndK7FczRW;) {
            {
                kqtpFXo = 1;
                while (kqtpFXo <= zcliwUP6) {
                    if (ndK7FczRW + 1 - kqtpFXo > 0 && ndK7FczRW + 1 - kqtpFXo <= GPNQUK)
                        cout << *(*(zZUpxkeMJVc9 + kqtpFXo) + ndK7FczRW + 1 - kqtpFXo) << endl;
                    kqtpFXo++;
                }
            }
            ndK7FczRW++;
        }
    }
    return 0;
}

