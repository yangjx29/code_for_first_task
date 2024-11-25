int main () {
    int MpVv371YX;
    int j;
    int n;
    int GYAFoLtld1 [20000];
    cin >> n;
    for (MpVv371YX = (711 - 711); n > MpVv371YX; MpVv371YX = MpVv371YX +1) {
        cin >> GYAFoLtld1[MpVv371YX];
    }
    if (1 < n) {
        for (MpVv371YX = 1; n > MpVv371YX; MpVv371YX++) {
            j = 0;
            while (MpVv371YX > j) {
                if (GYAFoLtld1[MpVv371YX] == GYAFoLtld1[j])
                    GYAFoLtld1[MpVv371YX] = 0;
                j++;
            };
        }
        cout << GYAFoLtld1[0];
        for (MpVv371YX = 1; n > MpVv371YX; MpVv371YX++) {
            if (GYAFoLtld1[MpVv371YX] != 0)
                cout << " " << GYAFoLtld1[MpVv371YX];
        };
    }
    if (n == 1)
        cout << GYAFoLtld1[0];
    return 0;
}

