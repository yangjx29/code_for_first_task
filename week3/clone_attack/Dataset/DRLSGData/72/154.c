int main () {
    int qPonZmBupF4c;
    int JVXwvtrWdNO;
    int Kj1TtenxPiX [(762 - 740)] [22] = {(307 - 307)};
    int dWse15a [22] [22] = {(956 - 956)};
    int HMPURz;
    int j;
    cin >> JVXwvtrWdNO >> qPonZmBupF4c;
    for (HMPURz = (957 - 956); JVXwvtrWdNO >= HMPURz; HMPURz = HMPURz +(544 - 543))
        for (j = (141 - 140); qPonZmBupF4c >= j; j = j + (51 - 50))
            cin >> Kj1TtenxPiX[HMPURz][j];
    for (HMPURz = (501 - 500); JVXwvtrWdNO >= HMPURz; HMPURz = HMPURz +(717 - 716))
        for (j = (413 - 412); qPonZmBupF4c >= j; j = j + (493 - 492)) {
            if (dWse15a[HMPURz][j] < Kj1TtenxPiX[HMPURz -(410 - 409)][j])
                dWse15a[HMPURz][j] = Kj1TtenxPiX[HMPURz -(275 - 274)][j];
            if (dWse15a[HMPURz][j] < Kj1TtenxPiX[HMPURz +1][j])
                dWse15a[HMPURz][j] = Kj1TtenxPiX[HMPURz +1][j];
            if (Kj1TtenxPiX[HMPURz][j - 1] > dWse15a[HMPURz][j])
                dWse15a[HMPURz][j] = Kj1TtenxPiX[HMPURz][j - 1];
            if (dWse15a[HMPURz][j] < Kj1TtenxPiX[HMPURz][j + 1])
                dWse15a[HMPURz][j] = Kj1TtenxPiX[HMPURz][j + 1];
        }
    for (HMPURz = (510 - 510); HMPURz < JVXwvtrWdNO; HMPURz++)
        for (j = 0; j < qPonZmBupF4c; j++)
            if (Kj1TtenxPiX[HMPURz +1][j + 1] >= dWse15a[HMPURz +1][j + 1])
                cout << HMPURz << " " << j << endl;
    return 0;
}

