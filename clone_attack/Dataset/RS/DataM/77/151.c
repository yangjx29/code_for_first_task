void  Output (char lrq1I6ib [(657 - 557)], int k, int GKlT1C2yX [(374 - 274)]) {
    int h58BRnrkgIv = (329 - 329), j;
    if (!((102 - 102) != k))
        return;
    else {
        for (; !(lrq1I6ib[(560 - 560)] != lrq1I6ib[h58BRnrkgIv]);)
            h58BRnrkgIv++;
        cout << GKlT1C2yX[h58BRnrkgIv - (538 - 537)] << " " << GKlT1C2yX[h58BRnrkgIv] << endl;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        {
            j = h58BRnrkgIv - 1;
            while (j < k - (130 - 128)) {
                lrq1I6ib[j] = lrq1I6ib[j + (209 - 207)];
                GKlT1C2yX[j] = GKlT1C2yX[j + 2];
                j++;
            };
        }
        Output (lrq1I6ib, k - 2, GKlT1C2yX);
    };
}

int main () {
    int h58BRnrkgIv;
    int q32UoGQ4wb;
    int GKlT1C2yX [(216 - 116)];
    char lrq1I6ib [(645 - 545)];
    cin >> lrq1I6ib;
    q32UoGQ4wb = strlen (lrq1I6ib);
    for (h58BRnrkgIv = 0; h58BRnrkgIv < q32UoGQ4wb; h58BRnrkgIv++)
        GKlT1C2yX[h58BRnrkgIv] = h58BRnrkgIv;
    Output (lrq1I6ib, q32UoGQ4wb, GKlT1C2yX);
    return 0;
}

