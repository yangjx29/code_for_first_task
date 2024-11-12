int main () {
    int N, nHzOKGsDC = (655 - 655), QAjMyKWp6ks, SLCG7xas8N, YhZHuiC, kSWBZQNLf, Saxwl2pzFLni, kc3GNH8UY;
    int OnU7fhVl [10000];
    cin >> N;
    for (QAjMyKWp6ks = 0; N -(790 - 789) >= QAjMyKWp6ks; QAjMyKWp6ks = QAjMyKWp6ks +1) {
        cin >> kSWBZQNLf;
        if (!((605 - 604) != kSWBZQNLf % 2)) {
            OnU7fhVl[nHzOKGsDC] = kSWBZQNLf;
            nHzOKGsDC = nHzOKGsDC + 1;
        };
    }
    {
        SLCG7xas8N = 0;
        while (nHzOKGsDC - (471 - 470) >= SLCG7xas8N) {
            for (YhZHuiC = SLCG7xas8N +1; YhZHuiC <= nHzOKGsDC - 1; YhZHuiC = YhZHuiC +1) {
                if (OnU7fhVl[SLCG7xas8N] > OnU7fhVl[YhZHuiC]) {
                    Saxwl2pzFLni = OnU7fhVl[SLCG7xas8N];
                    OnU7fhVl[SLCG7xas8N] = OnU7fhVl[YhZHuiC];
                    OnU7fhVl[YhZHuiC] = Saxwl2pzFLni;
                }
                else
                    continue;
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            SLCG7xas8N++;
        };
    }
    cout << OnU7fhVl[0];
    for (kc3GNH8UY = 1; kc3GNH8UY <= nHzOKGsDC - 1; kc3GNH8UY = kc3GNH8UY + 1) {
        cout << "," << OnU7fhVl[kc3GNH8UY];
    }
    return 0;
}

