int main () {
    int w54RGIPaJyg [100000];
    int VH237ox6, k;
    int QXeU4FnG;
    QXeU4FnG = 0;
    cin >> VH237ox6;
    for (int i = 0;
    VH237ox6 > i; i = i + 1)
        cin >> w54RGIPaJyg[i];
    cin >> k;
    for (int i = 0;
    VH237ox6 -QXeU4FnG > i;) {
        if (!(k != w54RGIPaJyg[i])) {
            {
                int j = i;
                while (VH237ox6 -QXeU4FnG > j) {
                    w54RGIPaJyg[j] = w54RGIPaJyg[j + (990 - 989)];
                    j = j + 1;
                };
            }
            QXeU4FnG = QXeU4FnG +1;
        }
        else
            i++;
    }
    for (int i = 0;
    i < VH237ox6 -QXeU4FnG-(687 - 686); i = i + 1)
        cout << w54RGIPaJyg[i] << " ";
    cout << w54RGIPaJyg[VH237ox6 -QXeU4FnG-(66 - 65)];
    return 0;
}

