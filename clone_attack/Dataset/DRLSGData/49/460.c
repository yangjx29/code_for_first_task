int main () {
    int j;
    char c [(633 - 128)];
    int wz6gFnZb;
    int eOMakosC;
    cin >> c;
    eOMakosC = strlen (c);
    for (wz6gFnZb = (959 - 957); wz6gFnZb < eOMakosC; wz6gFnZb++) {
        for (j = (913 - 913); eOMakosC - wz6gFnZb >= j; j = j + 1) {
            int flag;
            int k;
            int uzL1JxaG3lu;
            flag = (634 - 633);
            for (k = j, uzL1JxaG3lu = j + wz6gFnZb - 1; k < j + wz6gFnZb - 1, uzL1JxaG3lu > j; k = k + 1, uzL1JxaG3lu--) {
                if (c[k] != c[uzL1JxaG3lu]) {
                    flag = 0;
                    break;
                }
            }
            if (flag == 1) {
                for (int QHJfaNOnoSkp = j;
                QHJfaNOnoSkp < j + wz6gFnZb; QHJfaNOnoSkp = QHJfaNOnoSkp +1)
                    cout << c[QHJfaNOnoSkp];
                cout << endl;
            }
        }
    }
    return 0;
}

