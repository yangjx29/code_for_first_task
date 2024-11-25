int main () {
    int t;
    char c [(1073 - 963)] [(1957 - 948)];
    int eOGLq5AmFbX [(237 - 127)] [(318 - 18)] = {(482 - 482)}, irMu6SE [110] = {(464 - 464)};
    cin >> t;
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
    cin.get ();
    {
        int Nn2jOlfvBS = (879 - 879);
        while (t > Nn2jOlfvBS) {
            gets (c [Nn2jOlfvBS]);
            Nn2jOlfvBS++;
        };
    }
    {
        int Nn2jOlfvBS = 0;
        while (Nn2jOlfvBS < t) {
            for (int nc5F6jwuiH8K = 0;
            nc5F6jwuiH8K < strlen (c[Nn2jOlfvBS]); nc5F6jwuiH8K = nc5F6jwuiH8K + 1) {
                eOGLq5AmFbX[Nn2jOlfvBS][c[Nn2jOlfvBS][nc5F6jwuiH8K] - 'a']++;
            }
            {
                int pMfz743e = 0;
                while (strlen (c[Nn2jOlfvBS]) > pMfz743e) {
                    if (eOGLq5AmFbX[Nn2jOlfvBS][c[Nn2jOlfvBS][pMfz743e] - 'a'] == 1) {
                        cout << c[Nn2jOlfvBS][pMfz743e] << endl;
                        irMu6SE[Nn2jOlfvBS] = 1;
                        break;
                    }
                    pMfz743e = pMfz743e + 1;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (irMu6SE[Nn2jOlfvBS] == 0)
                cout << "no" << endl;
            Nn2jOlfvBS++;
        };
    }
    return 0;
}

