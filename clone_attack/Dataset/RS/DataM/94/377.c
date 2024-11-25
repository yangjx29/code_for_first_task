int main () {
    int In41oVXiHTSu = 0;
    int VnJTwxCN4YK [1000] = {(850 - 850)};
    int oHztLhOiblYQ;
    int h9s6dz2k;
    int count;
    count = 1;
    cin >> oHztLhOiblYQ;
    for (int i = (780 - 779);
    i <= oHztLhOiblYQ; i = i + 1) {
        cin >> h9s6dz2k;
        if (h9s6dz2k % 2 != 0) {
            VnJTwxCN4YK[h9s6dz2k] = h9s6dz2k;
            In41oVXiHTSu = In41oVXiHTSu +1;
        };
    }
    for (int i = 1;
    i < 1000; i++) {
        if ((VnJTwxCN4YK[i] != 0) && (count == In41oVXiHTSu)) {
            cout << VnJTwxCN4YK[i];
        }
        if ((VnJTwxCN4YK[i] != 0) && (count != In41oVXiHTSu)) {
            count = count + 1;
            cout << VnJTwxCN4YK[i] << ',';
        };
    }
    return 0;
}

