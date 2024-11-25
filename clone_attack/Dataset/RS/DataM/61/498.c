int main () {
    int lKWtLwN3X = 0, n = 0, wvfa2RtgW = 0;
    int ZYRK0uBJOo [21] = {0, 1, 1};
    cin >> lKWtLwN3X;
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
    for (wvfa2RtgW = 3; 20 >= wvfa2RtgW; wvfa2RtgW = wvfa2RtgW + 1)
        ZYRK0uBJOo[wvfa2RtgW] = ZYRK0uBJOo[wvfa2RtgW - 1] + ZYRK0uBJOo[wvfa2RtgW - 2];
    for (wvfa2RtgW = 1; wvfa2RtgW <= lKWtLwN3X; wvfa2RtgW++) {
        cin >> n;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        cout << ZYRK0uBJOo[n] << endl;
    }
    return 0;
}

