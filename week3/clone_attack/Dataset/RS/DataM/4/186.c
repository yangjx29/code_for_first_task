int main () {
    int HVPA7lm;
    int n;
    int CvZPhgRS7km [HVPA7lm] [n];
    int *p [HVPA7lm];
    cin >> HVPA7lm >> n;
    for (int LOmSVPBxw = (795 - 795);
    LOmSVPBxw < HVPA7lm; LOmSVPBxw = LOmSVPBxw +1)
        for (int d = (50 - 50);
        d < n; d = d + 1)
            cin >> CvZPhgRS7km[LOmSVPBxw][d];
    {
        int j = (67 - 67);
        while (j < HVPA7lm) {
            p[j] = CvZPhgRS7km[j];
            j++;
        };
    }
    for (int k = 0;
    k <= HVPA7lm +n - 2; k++) {
        int LOmSVPBxw = 0;
        while (LOmSVPBxw < HVPA7lm) {
            {
                int d = 0;
                while (d < n) {
                    if (LOmSVPBxw +d == k)
                        cout << *(p[LOmSVPBxw] + d) << endl;
                    d++;
                };
            }
            LOmSVPBxw++;
        };
    }
    return 0;
}

