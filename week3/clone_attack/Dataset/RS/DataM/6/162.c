int main () {
    int t;
    int m;
    int n;
    int i;
    int hNxj71OLKd;
    int V8psfOv2P;
    int eVy61lAbFodX [101] [101];
    cin >> t;
    for (; t > 0; t = t - 1) {
        cin >> m >> n;
        for (i = 0; i < m; i = i + 1) {
            hNxj71OLKd = 0;
            while (hNxj71OLKd < n) {
                cin >> *(*(eVy61lAbFodX + i) + hNxj71OLKd);
                hNxj71OLKd++;
            };
        }
        V8psfOv2P = 0;
        for (i = 0; i < m; i++)
            V8psfOv2P += *(*(eVy61lAbFodX + i));
        {
            i = 0;
            while (i < m) {
                V8psfOv2P += *(*(eVy61lAbFodX + i) + n - 1);
                i++;
            };
        }
        for (hNxj71OLKd = 1; hNxj71OLKd < n - 1; hNxj71OLKd++)
            V8psfOv2P = V8psfOv2P +*(*(eVy61lAbFodX)+hNxj71OLKd);
        {
            hNxj71OLKd = 1;
            while (hNxj71OLKd < n - 1) {
                V8psfOv2P = V8psfOv2P +*(*(eVy61lAbFodX + m - 1) + hNxj71OLKd);
                hNxj71OLKd++;
            };
        }
        cout << V8psfOv2P << endl;
    }
    return 0;
}

