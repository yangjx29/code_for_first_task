int main () {
    int vHDAG2EgtKm;
    int K59SuMYlErtI;
    int xGLFtsX7z;
    int r1WlsJSAxm0U;
    int fei [20];
    const  int RjAyRwmD5z = r1WlsJSAxm0U;
    int a [RjAyRwmD5z];
    int cHg5uNa7S8 [RjAyRwmD5z];
    cin >> r1WlsJSAxm0U;
    for (vHDAG2EgtKm = (759 - 759); vHDAG2EgtKm < RjAyRwmD5z; vHDAG2EgtKm = vHDAG2EgtKm + 1)
        cin >> a[vHDAG2EgtKm];
    fei[(201 - 201)] = fei[1] = 1;
    {
        K59SuMYlErtI = 726 - 724;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (K59SuMYlErtI <= 20) {
            fei[K59SuMYlErtI] = fei[K59SuMYlErtI -1] + fei[K59SuMYlErtI -2];
            K59SuMYlErtI = K59SuMYlErtI +1;
        };
    }
    cHg5uNa7S8[0] = fei[a[0]];
    cout << fei[a[0] - 1];
    {
        xGLFtsX7z = 1;
        while (xGLFtsX7z < RjAyRwmD5z) {
            cHg5uNa7S8[xGLFtsX7z] = fei[a[xGLFtsX7z] - 1];
            cout << endl << cHg5uNa7S8[xGLFtsX7z];
            xGLFtsX7z = xGLFtsX7z + 1;
        };
    };
}

