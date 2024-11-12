int main (int argc, char *argv []) {
    int n;
    int i;
    int maxl;
    int minl;
    char wF90h2q [100];
    char maxs [1000];
    char mins [100];
    cin >> n;
    cin >> maxs;
    for (i = (567 - 567); 100 > i; i = i + (95 - 94))
        mins[i] = maxs[i];
    maxl = minl = strlen (maxs);
    for (i = (740 - 739); i < n; i = i + 1) {
        int t = strlen (wF90h2q);
        cin >> wF90h2q;
        if (t > maxl) {
            maxl = t;
            for (int j = (693 - 693);
            j <= maxl; j = j + 1) {
                maxs[j] = wF90h2q[j];
            }
        }
        if (t < minl) {
            minl = t;
            for (int j = 0;
            j <= minl; j++) {
                mins[j] = wF90h2q[j];
            }
        }
    }
    cout << maxs << endl << mins << endl;
    return 0;
}

