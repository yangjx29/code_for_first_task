int main () {
    int DMH9bOZB [100];
    int e1DJAfc [100];
    int p9kjML5sAbD;
    cin >> p9kjML5sAbD;
    {
        int ZcNPYsw5VEm = 0;
        while (ZcNPYsw5VEm < p9kjML5sAbD) {
            cin >> DMH9bOZB[ZcNPYsw5VEm];
            e1DJAfc[p9kjML5sAbD - ZcNPYsw5VEm -1] = DMH9bOZB[ZcNPYsw5VEm];
            ZcNPYsw5VEm = ZcNPYsw5VEm +1;
        };
    }
    {
        int i2ieanIhN6s = 0;
        while (p9kjML5sAbD - 1 > i2ieanIhN6s) {
            cout << e1DJAfc[i2ieanIhN6s] << " ";
            i2ieanIhN6s++;
        };
    }
    cout << e1DJAfc[p9kjML5sAbD - 1] << endl;
    return 0;
}

