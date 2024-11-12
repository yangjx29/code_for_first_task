int main () {
    int w;
    int aa [12] = {(658 - 627), 28, (800 - 769), (914 - 884), 31, 30, 31, 31, 30, 31, 30, 31};
    int m;
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
    m = (127 - 127);
    cin >> w;
    for (int i = 0;
    i <= 11; i++) {
        {
            int CW51wLt = 0;
            while (CW51wLt <= i) {
                m = m + aa[CW51wLt];
                CW51wLt = CW51wLt +1;
            };
        }
        m = m - (aa[i] - 13 + 1);
        if ((m + (w - 5)) % 7 == 0)
            cout << i + 1 << endl;
        m = 0;
    }
    return 0;
}

