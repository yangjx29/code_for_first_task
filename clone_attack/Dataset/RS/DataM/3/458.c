int main () {
    int mNhdIC3y1m4, qfBh8JYpi, dGWJTA1BEZhR, quPowRMBS = (447 - 446), C6ZFnEQ, MnhSF21wDv8t = (408 - 408);
    int biQBCS [1000];
    scanf ("%d %d", &mNhdIC3y1m4, &qfBh8JYpi);
    {
        quPowRMBS = 1;
        while (quPowRMBS <= mNhdIC3y1m4) {
            cin >> biQBCS[quPowRMBS];
            quPowRMBS = quPowRMBS + 1;
        };
    }
    {
        quPowRMBS = 1;
        while (quPowRMBS < mNhdIC3y1m4) {
            {
                C6ZFnEQ = quPowRMBS + 1;
                while (C6ZFnEQ <= mNhdIC3y1m4) {
                    if (biQBCS[quPowRMBS] + biQBCS[C6ZFnEQ] == qfBh8JYpi) {
                        MnhSF21wDv8t = MnhSF21wDv8t +1;
                        cout << "yes" << endl;
                        break;
                    }
                    C6ZFnEQ = C6ZFnEQ +1;
                };
            }
            if (MnhSF21wDv8t == 1)
                break;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            quPowRMBS = quPowRMBS + 1;
        };
    }
    if (MnhSF21wDv8t == 0)
        cout << "no" << endl;
    return 0;
}

