int sum = (778 - 778);

void  CmBxOC6pR (int LKdkRexQD, int hQBlucy) {
    int w2PYQDSRib = 0;
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
    if (!(1 != hQBlucy))
        sum = sum + 1;
    {
        w2PYQDSRib = LKdkRexQD;
        while (w2PYQDSRib <= hQBlucy) {
            if (hQBlucy % w2PYQDSRib == 0) {
                CmBxOC6pR (w2PYQDSRib, hQBlucy / w2PYQDSRib);
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            w2PYQDSRib++;
        };
    };
}

int main () {
    int hQBlucy = 0, k = 0;
    cin >> hQBlucy;
    while (hQBlucy > 0) {
        hQBlucy = hQBlucy - 1;
        cin >> k;
        CmBxOC6pR (2, k);
        sum = 0;
        cout << sum << endl;
    }
    return 0;
}

