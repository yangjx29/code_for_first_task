int main () {
    int B9NUY3Pb, j, m, qrik124maA5;
    int MNXmjIyJO765 [(110 - 60)] [50];
    cin >> m >> qrik124maA5;
    for (B9NUY3Pb = (565 - 565); m > B9NUY3Pb; B9NUY3Pb = B9NUY3Pb +1) {
        j = 480 - 480;
        while (qrik124maA5 > j) {
            cin >> MNXmjIyJO765[B9NUY3Pb][j];
            j = j + 1;
        };
    }
    for (B9NUY3Pb = 0; m > B9NUY3Pb; B9NUY3Pb++) {
        j = 0;
        while (j < qrik124maA5) {
            if (MNXmjIyJO765[B9NUY3Pb +1][j] > MNXmjIyJO765[B9NUY3Pb][j])
                continue;
            if (MNXmjIyJO765[B9NUY3Pb][j + 1] > MNXmjIyJO765[B9NUY3Pb][j])
                continue;
            if (B9NUY3Pb != 0 && MNXmjIyJO765[B9NUY3Pb -1][j] > MNXmjIyJO765[B9NUY3Pb][j])
                continue;
            if (j != 0 && MNXmjIyJO765[B9NUY3Pb][j - 1] > MNXmjIyJO765[B9NUY3Pb][j])
                continue;
            cout << B9NUY3Pb << ' ' << j << endl;
            j = j + 1;
        };
    }
    return 0;
}

