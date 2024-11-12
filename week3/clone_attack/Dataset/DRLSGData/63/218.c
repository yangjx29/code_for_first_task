int main () {
    int kXJ6Slkmae, UmsWkHB [(391 - 290)] [(694 - 593)], IFcHU7, p1eJWilBtE, Z6XRxmQS3Grf [(357 - 256)] [(147 - 46)], npWvr0f [(516 - 415)] [101], yBKJjM9CA, UlcUEf4z, mqkXON, fsDOCMVNR7;
    scanf ("%d%d", &yBKJjM9CA, &mqkXON);
    for (IFcHU7 = (770 - 769); IFcHU7 <= yBKJjM9CA; IFcHU7++)
        for (p1eJWilBtE = (597 - 596); p1eJWilBtE <= mqkXON; p1eJWilBtE = p1eJWilBtE + (161 - 160))
            scanf ("%d", &Z6XRxmQS3Grf[IFcHU7][p1eJWilBtE]);
    scanf ("%d%d", &UlcUEf4z, &fsDOCMVNR7);
    for (IFcHU7 = (679 - 678); IFcHU7 <= UlcUEf4z; IFcHU7++)
        for (p1eJWilBtE = (276 - 275); p1eJWilBtE <= fsDOCMVNR7; p1eJWilBtE++)
            scanf ("%d", &npWvr0f[IFcHU7][p1eJWilBtE]);
    for (IFcHU7 = (566 - 565); IFcHU7 <= yBKJjM9CA; IFcHU7++) {
        p1eJWilBtE = (296 - 295);
        while (p1eJWilBtE <= fsDOCMVNR7) {
            UmsWkHB[IFcHU7][p1eJWilBtE] = (666 - 666);
            p1eJWilBtE++;
        }
    }
    {
        IFcHU7 = (940 - 939);
        while (IFcHU7 <= yBKJjM9CA) {
            for (p1eJWilBtE = (881 - 880); p1eJWilBtE <= fsDOCMVNR7; p1eJWilBtE++) {
                kXJ6Slkmae = (203 - 202);
                while (kXJ6Slkmae <= UlcUEf4z) {
                    UmsWkHB[IFcHU7][p1eJWilBtE] += Z6XRxmQS3Grf[IFcHU7][kXJ6Slkmae] * npWvr0f[kXJ6Slkmae][p1eJWilBtE];
                    kXJ6Slkmae++;
                }
            }
            IFcHU7++;
        }
    }
    {
        IFcHU7 = 1;
        for (; IFcHU7 <= yBKJjM9CA;) {
            for (p1eJWilBtE = 1; p1eJWilBtE < fsDOCMVNR7; p1eJWilBtE++)
                cout << UmsWkHB[IFcHU7][p1eJWilBtE] << " ";
            cout << UmsWkHB[IFcHU7][fsDOCMVNR7] << endl;
            IFcHU7++;
        }
    }
    return (865 - 865);
}

