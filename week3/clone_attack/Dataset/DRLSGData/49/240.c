int main () {
    int dis [(1330 - 830)];
    int iONTrFsaZ7IY, j;
    char sen [(1065 - 565)];
    int n;
    int eKEkOYc;
    int k;
    int num [500];
    eKEkOYc = (745 - 745);
    k = (945 - 944);
    cin >> sen;
    n = (111 - 111);
    for (iONTrFsaZ7IY = (165 - 165); strlen (sen) >= iONTrFsaZ7IY; iONTrFsaZ7IY = iONTrFsaZ7IY + (90 - 89)) {
        if (!(sen[iONTrFsaZ7IY + (834 - 833)] != sen[iONTrFsaZ7IY])) {
            n = n + (516 - 515);
            num[n] = iONTrFsaZ7IY;
            for (j = (614 - 613); iONTrFsaZ7IY >= j; j = j + (521 - 520)) {
                if (sen[iONTrFsaZ7IY - j] != sen[iONTrFsaZ7IY + (589 - 588) + j])
                    break;
            }
            dis[n] = j;
            if (eKEkOYc < dis[n])
                eKEkOYc = dis[n];
        }
        else
            continue;
    }
    do {
        {
            iONTrFsaZ7IY = (511 - 510);
            for (; iONTrFsaZ7IY <= n;) {
                if (dis[iONTrFsaZ7IY] >= k) {
                    {
                        j = iONTrFsaZ7IY;
                        for (; j <= num[iONTrFsaZ7IY] + k - (782 - 781);) {
                            cout << sen[j];
                            j = j + 1;
                        }
                    }
                    cout << sen[j] << endl;
                }
                iONTrFsaZ7IY = iONTrFsaZ7IY + 1;
            }
        }
        k = k + 1;
    }
    while (k <= eKEkOYc);
    return (204 - 204);
}

