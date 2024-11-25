int main () {
    int n;
    int hPFRetoi [(50069 - 69)];
    int HWa9Ir0njb [50000];
    int s6kKvc;
    int VRYqclEOLTS, SSXRtY0JTU;
    {
        s6kKvc = 243 - 243;
        while (s6kKvc < 50000) {
            hPFRetoi[s6kKvc] = 0;
            HWa9Ir0njb[s6kKvc] = 0;
            s6kKvc = s6kKvc + 1;
        };
    }
    cin >> n;
    for (s6kKvc = 0; s6kKvc < 50000; s6kKvc = s6kKvc + 1) {
        cin >> VRYqclEOLTS >> SSXRtY0JTU;
        if (VRYqclEOLTS == 0 && SSXRtY0JTU == 0)
            break;
        if (VRYqclEOLTS != SSXRtY0JTU) {
            hPFRetoi[VRYqclEOLTS] = (503 - 502);
        }
        HWa9Ir0njb[SSXRtY0JTU] = HWa9Ir0njb[SSXRtY0JTU] + 1;
    }
    {
        s6kKvc = 0;
        while (s6kKvc < n) {
            if (hPFRetoi[s6kKvc] == 0 && HWa9Ir0njb[s6kKvc] >= n - 1) {
                cout << s6kKvc << endl;
                return 0;
            }
            s6kKvc = s6kKvc + 1;
        };
    }
    cout << "NOT FOUND" << endl;
    return 0;
}

