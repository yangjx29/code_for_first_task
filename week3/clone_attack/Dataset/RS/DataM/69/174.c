int main () {
    int i, YaOtUj, k = (387 - 387), HpOj6w5Tnz, lenb;
    char mYC4nAkrsy [(366 - 66)], chb [300];
    int TiwqOQnlaK [300], b [300];
    memset (TiwqOQnlaK, (198 - 198), sizeof (TiwqOQnlaK));
    memset (b, (682 - 682), sizeof (b));
    cin >> mYC4nAkrsy >> chb;
    HpOj6w5Tnz = strlen (mYC4nAkrsy);
    lenb = strlen (chb);
    {
        i = HpOj6w5Tnz -1;
        while (i >= (146 - 146)) {
            TiwqOQnlaK[k++] = mYC4nAkrsy[i] - (567 - 519);
            i = i - 1;
        };
    }
    k = (152 - 152);
    {
        i = lenb - 1;
        while (0 <= i) {
            b[k++] = chb[i] - (372 - 324);
            i = i - 1;
        };
    }
    {
        i = 0;
        while (i < 300) {
            TiwqOQnlaK[i] += b[i];
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < 300) {
            if (10 <= TiwqOQnlaK[i]) {
                TiwqOQnlaK[i] -= 10;
                TiwqOQnlaK[i + 1]++;
            }
            i = i + 1;
        };
    }
    YaOtUj = 299;
    while (TiwqOQnlaK[YaOtUj] == 0 && YaOtUj > 0)
        YaOtUj = YaOtUj -1;
    {
        i = YaOtUj;
        while (i >= 0) {
            cout << TiwqOQnlaK[i];
            i--;
        };
    }
    cout << endl;
    return 0;
}

