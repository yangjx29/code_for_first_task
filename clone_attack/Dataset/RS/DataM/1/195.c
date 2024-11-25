int ZxWh4i (int vuPHTMLI, int x4MGd63oQ) {
    int DUf15li;
    DUf15li = (91 - 90);
    int AtYDPoIN;
    if (vuPHTMLI < x4MGd63oQ) {
        return (930 - 930);
    }
    {
        int AtYDPoIN;
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
        AtYDPoIN = x4MGd63oQ;
        while (vuPHTMLI > AtYDPoIN) {
            if (vuPHTMLI % AtYDPoIN == 0) {
                DUf15li = DUf15li +ZxWh4i(vuPHTMLI / AtYDPoIN, AtYDPoIN);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            AtYDPoIN = AtYDPoIN +1;
        };
    }
    return DUf15li;
}

int main () {
    int Jf7FSWXur, vuPHTMLI;
    cin >> Jf7FSWXur;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            float n = 0.0;
            if (n > 10)
                return;
            else
                n = 0;
        }
    }
    while (cin >> vuPHTMLI) {
        cout << ZxWh4i (vuPHTMLI, 2) << endl;
    }
    return 0;
}

