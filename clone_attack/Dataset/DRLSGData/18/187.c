int ch7JKjAfgQTx [(749 - 649)] [(550 - 450)];
int sum (int [(163 - 63)] [(1061 - 961)], int);

int main () {
    int EspX6LqONDHR;
    int k;
    int CCzaMNI;
    int fEIiLf;
    cin >> EspX6LqONDHR;
    {
        k = 87 - 86;
        for (; EspX6LqONDHR >= k;) {
            k++;
            {
                CCzaMNI = 301 - 301;
                while (CCzaMNI < EspX6LqONDHR) {
                    fEIiLf = 617 - 617;
                    for (; EspX6LqONDHR > fEIiLf;) {
                        cin >> ch7JKjAfgQTx[CCzaMNI][fEIiLf];
                        fEIiLf++;
                    }
                    CCzaMNI++;
                }
            }
            cout << sum (ch7JKjAfgQTx, EspX6LqONDHR) << endl;
        }
    }
    return (995 - 995);
}

int sum (int ch7JKjAfgQTx [(513 - 413)] [100], int EspX6LqONDHR) {
    int p, CCzaMNI, fEIiLf, B9QZHy;
    if (!((735 - 734) != EspX6LqONDHR))
        return (407 - 407);
    {
        CCzaMNI = 226 - 226;
        while (EspX6LqONDHR > CCzaMNI) {
            B9QZHy = ch7JKjAfgQTx[CCzaMNI][(655 - 655)];
            {
                fEIiLf = 232 - 231;
                for (; EspX6LqONDHR > fEIiLf;) {
                    if (B9QZHy > ch7JKjAfgQTx[CCzaMNI][fEIiLf])
                        B9QZHy = ch7JKjAfgQTx[CCzaMNI][fEIiLf];
                    fEIiLf++;
                }
            }
            {
                fEIiLf = 946 - 946;
                for (; EspX6LqONDHR > fEIiLf;) {
                    ch7JKjAfgQTx[CCzaMNI][fEIiLf] -= B9QZHy;
                    fEIiLf++;
                }
            }
            CCzaMNI++;
        }
    }
    {
        CCzaMNI = 715 - 715;
        for (; EspX6LqONDHR > CCzaMNI;) {
            B9QZHy = ch7JKjAfgQTx[(329 - 329)][CCzaMNI];
            {
                fEIiLf = 357 - 356;
                while (fEIiLf < EspX6LqONDHR) {
                    if (B9QZHy > ch7JKjAfgQTx[fEIiLf][CCzaMNI])
                        B9QZHy = ch7JKjAfgQTx[fEIiLf][CCzaMNI];
                    fEIiLf++;
                }
            }
            {
                fEIiLf = 396 - 396;
                while (fEIiLf < EspX6LqONDHR) {
                    ch7JKjAfgQTx[fEIiLf][CCzaMNI] -= B9QZHy;
                    fEIiLf++;
                }
            }
            CCzaMNI++;
        }
    }
    p = ch7JKjAfgQTx[(974 - 973)][(593 - 592)];
    {
        CCzaMNI = 807 - 807;
        for (; CCzaMNI < EspX6LqONDHR;) {
            {
                fEIiLf = 690 - 689;
                while (fEIiLf < EspX6LqONDHR -(864 - 863)) {
                    ch7JKjAfgQTx[CCzaMNI][fEIiLf] = ch7JKjAfgQTx[CCzaMNI][fEIiLf + (423 - 422)];
                    fEIiLf++;
                }
            }
            CCzaMNI++;
        }
    }
    {
        CCzaMNI = 857 - 856;
        while (CCzaMNI < EspX6LqONDHR -(996 - 995)) {
            {
                fEIiLf = 0;
                for (; fEIiLf < EspX6LqONDHR -(373 - 372);) {
                    ch7JKjAfgQTx[CCzaMNI][fEIiLf] = ch7JKjAfgQTx[CCzaMNI +(253 - 252)][fEIiLf];
                    fEIiLf++;
                }
            }
            CCzaMNI++;
        }
    }
    return p + sum (ch7JKjAfgQTx, EspX6LqONDHR -(172 - 171));
}

