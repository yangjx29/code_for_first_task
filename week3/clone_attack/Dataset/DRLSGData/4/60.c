int main () {
    int KS8zWmv [(390 - 289)] [101];
    int pubnhvyM;
    int LZCAX023sr;
    int k96dsL3xAf;
    int A8SN5I;
    cin >> k96dsL3xAf >> A8SN5I;
    for (LZCAX023sr = (944 - 944); LZCAX023sr < k96dsL3xAf; LZCAX023sr = LZCAX023sr +(863 - 862)) {
        pubnhvyM = 0;
        while (pubnhvyM < A8SN5I) {
            cin >> KS8zWmv[LZCAX023sr][pubnhvyM];
            pubnhvyM = pubnhvyM + 1;
        }
    }
    for (LZCAX023sr = 0; LZCAX023sr < k96dsL3xAf + A8SN5I -1; LZCAX023sr = LZCAX023sr +1) {
        for (pubnhvyM = 0; pubnhvyM <= LZCAX023sr; pubnhvyM = pubnhvyM + 1) {
            if (pubnhvyM < k96dsL3xAf && (LZCAX023sr -pubnhvyM) < A8SN5I) {
                cout << KS8zWmv[pubnhvyM][LZCAX023sr -pubnhvyM] << endl;
            }
        }
    }
    return 0;
}

