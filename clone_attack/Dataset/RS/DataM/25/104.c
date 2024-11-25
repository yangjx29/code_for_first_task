int main () {
    int oUEbhwB;
    int KIfr5nF6xmwO;
    int n;
    int IGV5SJR;
    int j;
    oUEbhwB = 0;
    KIfr5nF6xmwO = 0;
    int t68N4o [1000] = {0};
    cin >> n;
    t68N4o[0] = (666 - 665);
    for (IGV5SJR = 1; IGV5SJR <= n; IGV5SJR++) {
        {
            j = 0;
            while (oUEbhwB >= j) {
                t68N4o[j] = t68N4o[j] * 2 + KIfr5nF6xmwO;
                KIfr5nF6xmwO = 0;
                if (t68N4o[j] >= 10) {
                    t68N4o[j] = t68N4o[j] - 10;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    KIfr5nF6xmwO = 1;
                }
                j++;
            };
        }
        if (KIfr5nF6xmwO == 1) {
            oUEbhwB++;
            t68N4o[oUEbhwB] = 1;
            KIfr5nF6xmwO = 0;
        };
    }
    {
        IGV5SJR = oUEbhwB;
        while (IGV5SJR >= 0) {
            cout << t68N4o[IGV5SJR];
            IGV5SJR--;
        };
    }
    return 0;
}

