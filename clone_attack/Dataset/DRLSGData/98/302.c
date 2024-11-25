int main () {
    char a [(1388 - 388)] [45];
    int pUXHJ2;
    int P09SfWV;
    int SaLlZ4w;
    cin >> P09SfWV;
    for (SaLlZ4w = (968 - 967); P09SfWV >= SaLlZ4w; SaLlZ4w = SaLlZ4w +(106 - 105))
        cin >> a[SaLlZ4w];
    pUXHJ2 = (597 - 597);
    for (SaLlZ4w = (918 - 917); P09SfWV >= SaLlZ4w; SaLlZ4w = SaLlZ4w +1) {
        if (pUXHJ2 == (842 - 842)) {
            pUXHJ2 = strlen (a[SaLlZ4w]);
        }
        else {
            if (strlen (a[SaLlZ4w]) + 1 + pUXHJ2 <= (434 - 354)) {
                cout << " ";
                pUXHJ2 = pUXHJ2 + 1 + strlen (a[SaLlZ4w]);
            }
            else {
                if (strlen (a[SaLlZ4w]) + 1 + pUXHJ2 > 80) {
                    cout << endl;
                    pUXHJ2 = strlen (a[SaLlZ4w]);
                }
            }
        }
        cout << a[SaLlZ4w];
    }
    return 0;
}

