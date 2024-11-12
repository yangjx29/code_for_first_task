int main () {
    int HXGkLMVrbO8R = 0;
    int gUo0sZtfyLR, OHlfzm3B = 0;
    int PRo36TPMZ5 [100], ymHUfa3 [100];
    for (gUo0sZtfyLR = 0; 100 > gUo0sZtfyLR; gUo0sZtfyLR = gUo0sZtfyLR + 1) {
        cin >> PRo36TPMZ5[gUo0sZtfyLR] >> ymHUfa3[gUo0sZtfyLR];
        if (!(0 != PRo36TPMZ5[gUo0sZtfyLR]) && !(0 != ymHUfa3[gUo0sZtfyLR])) {
            break;
        }
        OHlfzm3B = OHlfzm3B +1;
    }
    for (HXGkLMVrbO8R;
    HXGkLMVrbO8R < OHlfzm3B; HXGkLMVrbO8R++) {
        int IvLPI3X8kW = 0;
        cout << IvLPI3X8kW +1 << endl;
        for (int a7hEbWw = 2;
        a7hEbWw <= PRo36TPMZ5[HXGkLMVrbO8R]; a7hEbWw = a7hEbWw + 1) {
            IvLPI3X8kW = (IvLPI3X8kW +ymHUfa3[HXGkLMVrbO8R]) % a7hEbWw;
        };
    }
    return 0;
}

