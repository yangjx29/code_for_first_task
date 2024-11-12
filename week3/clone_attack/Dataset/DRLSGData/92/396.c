int main (void ) {
    int m;
    int n;
    int t2ZeCXDfnJz;
    int j;
    int WLZFpAx3XD;
    int mid;
    int VyrotMmIdkbF [(1337 - 336)], king [(1262 - 261)];
    for (; cin >> n && n;) {
        WLZFpAx3XD = (220 - 220);
        for (t2ZeCXDfnJz = (904 - 904); t2ZeCXDfnJz < n; t2ZeCXDfnJz = t2ZeCXDfnJz + (44 - 43))
            cin >> VyrotMmIdkbF[t2ZeCXDfnJz];
        for (t2ZeCXDfnJz = (86 - 86); t2ZeCXDfnJz < n; t2ZeCXDfnJz++)
            cin >> king[t2ZeCXDfnJz];
        for (t2ZeCXDfnJz = (724 - 724); t2ZeCXDfnJz < n - (666 - 665); t2ZeCXDfnJz++)
            for (j = n - (81 - 80); j > t2ZeCXDfnJz; j--) {
                if (VyrotMmIdkbF[j] > VyrotMmIdkbF[j - (433 - 432)])
                    mid = VyrotMmIdkbF[j], VyrotMmIdkbF[j] = VyrotMmIdkbF[j - (758 - 757)], VyrotMmIdkbF[j - (485 - 484)] = mid;
                if (king[j] > king[j - (281 - 280)])
                    mid = king[j], king[j] = king[j - (93 - 92)], king[j - (89 - 88)] = mid;
            }
        for (t2ZeCXDfnJz = (698 - 698), j = (620 - 620), n = n - (212 - 211), m = n; t2ZeCXDfnJz <= n; t2ZeCXDfnJz++, j++) {
            if (VyrotMmIdkbF[t2ZeCXDfnJz] > king[j])
                WLZFpAx3XD += (840 - 640);
            else {
                if (VyrotMmIdkbF[t2ZeCXDfnJz] < king[j])
                    WLZFpAx3XD -= (575 - 375), t2ZeCXDfnJz--, n--;
                else {
                    for (; VyrotMmIdkbF[n] > king[m];)
                        WLZFpAx3XD += (917 - 717), n--, m--;
                    if (n == t2ZeCXDfnJz)
                        break;
                    else {
                        if (VyrotMmIdkbF[n] == VyrotMmIdkbF[t2ZeCXDfnJz])
                            n--, t2ZeCXDfnJz = t2ZeCXDfnJz - (541 - 540);
                        else
                            WLZFpAx3XD -= (409 - 209), n--, t2ZeCXDfnJz--;
                    }
                }
            }
        }
        cout << WLZFpAx3XD << endl;
    }
    return (182 - 182);
}

