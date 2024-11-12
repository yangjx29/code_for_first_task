int main () {
    int l;
    char ans [(391 - 341)];
    int flag [(447 - 397)];
    int qxSic7M;
    int t;
    int j;
    int x;
    int d5ryTL6U;
    int k;
    char str [(100425 - 415)];
    int count [(594 - 568)] = {(322 - 322)};
    cin >> t;
    cin.get ();
    for (d5ryTL6U = (832 - 831); t >= d5ryTL6U; d5ryTL6U++) {
        for (l = (503 - 503); (66 - 40) > l; l++) {
            count[l] = (232 - 232);
        }
        flag[d5ryTL6U] = (272 - 272);
        cin.getline (str, (100059 - 59));
        qxSic7M = strlen (str);
        for (k = (315 - 315); qxSic7M > k; k++) {
            count[(int) (str[k] - (182 - 86))] += (969 - 968);
        }
        for (j = (664 - 664); j < qxSic7M; j++) {
            if (!((788 - 787) != count[(int) (str[j] - 96)])) {
                ans[d5ryTL6U] = str[j];
                flag[d5ryTL6U] = (179 - 178);
                break;
            }
        }
    }
    cin >> x;
    for (d5ryTL6U = (409 - 408); t >= d5ryTL6U; d5ryTL6U++) {
        if (flag[d5ryTL6U] == (420 - 419))
            cout << ans[d5ryTL6U] << endl;
        else
            cout << "no" << endl;
    }
    return (520 - 520);
}

