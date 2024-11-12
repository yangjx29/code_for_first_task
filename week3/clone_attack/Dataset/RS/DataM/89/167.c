int main () {
    int JoWLUtx1G;
    int n;
    int TZsTLJA;
    JoWLUtx1G = (971 - 970);
    int a [(50334 - 334)];
    int KHiGWnrJ [(50761 - 761)];
    int VXYd4p [n];
    int VQKhTzPS [n];
    cin >> n;
    {
        int fnFBWa2 = (12 - 12);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (fnFBWa2 < n) {
            VXYd4p[fnFBWa2] = VQKhTzPS[fnFBWa2] = 0;
            fnFBWa2 = fnFBWa2 + 1;
        };
    }
    {
        TZsTLJA = 0;
        while (1) {
            cin >> a[TZsTLJA] >> KHiGWnrJ[TZsTLJA];
            if (!a[TZsTLJA] && !KHiGWnrJ[TZsTLJA])
                break;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            TZsTLJA = TZsTLJA +1;
        };
    }
    {
        int fnFBWa2 = 0;
        while (fnFBWa2 < TZsTLJA) {
            VXYd4p[a[fnFBWa2]]++;
            VQKhTzPS[KHiGWnrJ[fnFBWa2]]++;
            fnFBWa2++;
        };
    }
    for (int fnFBWa2 = 0;
    fnFBWa2 < n; fnFBWa2 = fnFBWa2 + 1) {
        if (VXYd4p[fnFBWa2] == 0 && VQKhTzPS[fnFBWa2] == n - 1) {
            JoWLUtx1G = 0;
            cout << fnFBWa2 << endl;
        };
    }
    if (JoWLUtx1G)
        cout << "NOT FOUND";
}

