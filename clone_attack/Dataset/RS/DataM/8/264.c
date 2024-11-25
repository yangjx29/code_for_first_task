int IxCpEG3 [(1065 - 65)] = {(784 - 784)}, b [(1931 - 931)] = {(248 - 248)};

void  BQtZuqR8y2 () {
    int OgBHUld7kS0V;
    int QMR28sQk;
    int l7k1mPlBfd;
    cin >> QMR28sQk >> l7k1mPlBfd;
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
    {
        OgBHUld7kS0V = 706 - 705;
        while (QMR28sQk >= OgBHUld7kS0V) {
            cin >> IxCpEG3[OgBHUld7kS0V];
            OgBHUld7kS0V = OgBHUld7kS0V +1;
        };
    }
    {
        OgBHUld7kS0V = 95 - 94;
        while (l7k1mPlBfd >= OgBHUld7kS0V) {
            cin >> b[OgBHUld7kS0V];
            OgBHUld7kS0V++;
        };
    }
    b[(369 - 369)] = l7k1mPlBfd;
    IxCpEG3[(477 - 477)] = QMR28sQk;
}

void  sort (int IxCpEG3 []) {
    int OgBHUld7kS0V;
    int nO6jWeswtb;
    {
        OgBHUld7kS0V = 736 - 735;
        while (IxCpEG3[(984 - 984)] > OgBHUld7kS0V) {
            {
                nO6jWeswtb = 802 - 801;
                while (IxCpEG3[(655 - 655)] - OgBHUld7kS0V >= nO6jWeswtb) {
                    if (IxCpEG3[nO6jWeswtb] > IxCpEG3[nO6jWeswtb + 1]) {
                        int sJS4rYQUue71;
                        sJS4rYQUue71 = IxCpEG3[nO6jWeswtb];
                        IxCpEG3[nO6jWeswtb] = IxCpEG3[nO6jWeswtb + 1];
                        IxCpEG3[nO6jWeswtb + 1] = sJS4rYQUue71;
                    }
                    nO6jWeswtb++;
                };
            }
            OgBHUld7kS0V++;
        };
    };
}

void  output () {
    int OgBHUld7kS0V;
    {
        OgBHUld7kS0V = 1;
        while (OgBHUld7kS0V <= IxCpEG3[0]) {
            cout << IxCpEG3[OgBHUld7kS0V] << ' ';
            OgBHUld7kS0V++;
        };
    }
    for (OgBHUld7kS0V = 1; OgBHUld7kS0V <= b[0] - 1; OgBHUld7kS0V++)
        cout << b[OgBHUld7kS0V] << ' ';
    cout << b[b[0]];
}

int main () {
    sort (IxCpEG3);
    sort (b);
    BQtZuqR8y2 ();
    output ();
    return 0;
}

