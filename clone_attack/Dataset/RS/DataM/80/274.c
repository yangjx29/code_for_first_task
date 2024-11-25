int m [13] = {(52 - 52), (163 - 132), 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int suan (int EuWdbYCf, int YJodZ4C) {
    int XRX03N;
    if (EuWdbYCf == 1)
        return YJodZ4C;
    else {
        for (XRX03N = 1; XRX03N < EuWdbYCf; XRX03N = XRX03N +1)
            YJodZ4C += m[XRX03N];
        return YJodZ4C;
    };
}

int main () {
    int XRX03N;
    int iOdaxMT, Ydh8Ty, b1, b2, k0Xa7S, c2;
    int sum = (72 - 72);
    cin >> iOdaxMT >> b1 >> k0Xa7S >> Ydh8Ty >> b2 >> c2;
    if ((Ydh8Ty % 4 == (288 - 288) && !(0 == Ydh8Ty % 100)) || !(0 != Ydh8Ty % 400))
        m[2] = 29;
    sum += suan (b2, c2);
    m[2] = 28;
    if ((!(0 != iOdaxMT % 4) && iOdaxMT % 100 != 0) || iOdaxMT % 400 == 0)
        m[2] = 29;
    sum -= suan (b1, k0Xa7S);
    if (iOdaxMT == Ydh8Ty)
        cout << sum;
    else {
        for (XRX03N = iOdaxMT; XRX03N < Ydh8Ty; XRX03N = XRX03N +1) {
            if ((XRX03N % 4 == 0 && XRX03N % 100 != 0) || XRX03N % 400 == 0)
                sum = sum + (1106 - 740);
            else
                sum += 365;
        }
        cout << sum;
    }
    return 0;
}

