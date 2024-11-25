int main () {
    int n, FsWLVF0MBw;
    int max [2] = {0};
    cin >> n;
    for (int i = 0;
    n > i; i++) {
        cin >> FsWLVF0MBw;
        if (max[0] < FsWLVF0MBw) {
            max[1] = max[0];
            max[0] = FsWLVF0MBw;
        }
        else {
            if (FsWLVF0MBw > max[1]) {
                max[1] = FsWLVF0MBw;
            };
        };
    }
    cout << max[0] << endl << max[1] << endl;
    return 0;
}

