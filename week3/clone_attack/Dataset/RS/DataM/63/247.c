int main () {
    int sFGNawT [(1086 - 986)] [(860 - 760)], OA2GvB [(486 - 386)] [100], yrdHWhBt [100] [100];
    int x1, y1, vqcxJ70EBUP, z9snFHT;
    cin >> x1 >> y1;
    for (int uslcGCkjU = (730 - 730);
    x1 > uslcGCkjU; uslcGCkjU = uslcGCkjU + 1) {
        int j9JKMqNZL = (74 - 74);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (y1 > j9JKMqNZL) {
            cin >> sFGNawT[uslcGCkjU][j9JKMqNZL];
            j9JKMqNZL = j9JKMqNZL + 1;
        };
    }
    cin >> vqcxJ70EBUP >> z9snFHT;
    for (int uslcGCkjU = 0;
    uslcGCkjU < vqcxJ70EBUP; uslcGCkjU = uslcGCkjU + 1) {
        int j9JKMqNZL = 0;
        while (z9snFHT > j9JKMqNZL) {
            cin >> OA2GvB[uslcGCkjU][j9JKMqNZL];
            j9JKMqNZL++;
        };
    }
    {
        int uslcGCkjU = 0;
        while (x1 > uslcGCkjU) {
            for (int j9JKMqNZL = 0;
            j9JKMqNZL < z9snFHT; j9JKMqNZL = j9JKMqNZL + 1) {
                for (int S2dS5AZRE = 0;
                vqcxJ70EBUP > S2dS5AZRE; S2dS5AZRE = S2dS5AZRE +1) {
                    yrdHWhBt[uslcGCkjU][j9JKMqNZL] = yrdHWhBt[uslcGCkjU][j9JKMqNZL] + sFGNawT[uslcGCkjU][S2dS5AZRE] * OA2GvB[S2dS5AZRE][j9JKMqNZL];
                };
            }
            uslcGCkjU = uslcGCkjU + 1;
        };
    }
    for (int uslcGCkjU = 0;
    uslcGCkjU < x1; uslcGCkjU++) {
        for (int j9JKMqNZL = 0;
        j9JKMqNZL < z9snFHT - (298 - 297); j9JKMqNZL++) {
            cout << yrdHWhBt[uslcGCkjU][j9JKMqNZL] << " ";
        }
        cout << yrdHWhBt[uslcGCkjU][z9snFHT - 1] << endl;
    }
    return 0;
}

