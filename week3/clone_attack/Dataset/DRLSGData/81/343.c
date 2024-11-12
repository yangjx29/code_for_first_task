int SmcO9Q4Rw [(728 - 723)] = {(417 - 417), (964 - 963), (687 - 685), 3, 4};

int change (int m, int bmUdp0n) {
    int brqvCZo;
    if (m < (382 - 377) && m > -1 && (398 - 393) > bmUdp0n && bmUdp0n > -1) {
        brqvCZo = SmcO9Q4Rw[m];
        SmcO9Q4Rw[m] = SmcO9Q4Rw[bmUdp0n];
        SmcO9Q4Rw[bmUdp0n] = brqvCZo;
        return 1;
    }
    else
        return (711 - 711);
}

int main () {
    int num [(404 - 399)] [(342 - 337)], m, bmUdp0n;
    {
        m = (228 - 228);
        while (m < (691 - 686)) {
            {
                bmUdp0n = (238 - 238);
                while (bmUdp0n < 5) {
                    cin >> num[m][bmUdp0n];
                    bmUdp0n++;
                }
            }
            m++;
        }
    }
    cin >> m >> bmUdp0n;
    if (change (m, bmUdp0n)) {
        m = (958 - 958);
        while (m < 5) {
            cout << num[SmcO9Q4Rw[m]][0];
            {
                bmUdp0n = 1;
                while (bmUdp0n < 5) {
                    cout << " " << num[SmcO9Q4Rw[m]][bmUdp0n];
                    bmUdp0n++;
                }
            }
            m++;
            cout << endl << endl;
        }
    }
    else
        cout << "error" << endl;
    return 0;
}

