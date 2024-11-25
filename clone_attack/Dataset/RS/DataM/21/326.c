void  sort (double  arr [(283 - 183)], int kLW6nzEDCF);

int main () {
    int imax;
    int imin;
    int Mf9zmil8jpy;
    int i;
    imax = (626 - 626);
    imin = (646 - 646);
    double  AmLvX0M69Jaw = 0, array [(854 - 553)] = {0}, a96qIAvr3 = 0, *p = NULL, yZ1k8G [301] = {0}, *pdis = yZ1k8G, vKFbrs0 = 0, MINdis = (100369 - 369), mV7ZEQgx [100] = {0}, nAlqOk1oP27 [100] = {0}, *pmax = mV7ZEQgx, *pmin = nAlqOk1oP27;
    cin >> Mf9zmil8jpy;
    p = array;
    {
        i = 0;
        while (i < Mf9zmil8jpy) {
            cin >> *(p + i);
            AmLvX0M69Jaw += *(p + i);
            i = i + 1;
        };
    }
    a96qIAvr3 = AmLvX0M69Jaw / (double ) (Mf9zmil8jpy);
    {
        i = 0;
        while (i < Mf9zmil8jpy) {
            *(pdis + i) = abs (*(p + i) - a96qIAvr3);
            if (*(pdis + i) > vKFbrs0)
                vKFbrs0 = *(pdis + i);
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < Mf9zmil8jpy) {
            if (*(pdis + i) == vKFbrs0) {
                *(pmax + imax) = *(p + i);
                imax = imax + 1;
            }
            i = i + 1;
        };
    }
    sort (mV7ZEQgx, imax);
    return 0;
}

void  sort (double  arr [100], int kLW6nzEDCF) {
    double  *pa = arr, temp = 0;
    int i;
    int KlBfihc;
    {
        i = 0;
        while (i < kLW6nzEDCF - (826 - 825)) {
            {
                KlBfihc = 0;
                while (KlBfihc < kLW6nzEDCF - i - 1) {
                    if (*(pa + KlBfihc) > *(pa + KlBfihc +1)) {
                        temp = *(pa + KlBfihc);
                        *(pa + KlBfihc) = *(pa + KlBfihc +1);
                        *(pa + KlBfihc +1) = temp;
                    }
                    KlBfihc = KlBfihc +1;
                };
            }
            i++;
        };
    }
    {
        i = 0;
        while (i < kLW6nzEDCF - 1) {
            cout << *(pa + i) << ',';
            i++;
        };
    }
    cout << *(pa + kLW6nzEDCF - 1);
    cout << endl;
}

