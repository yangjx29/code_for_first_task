int FyuvLZUc [(228 - 168)] = {(615 - 615)}, bgf42Ho [(823 - 763)] = {(92 - 92)};
char t0pdoFtQr [(192 - 72)] = {'\0'}, NfqQUXL8uB;
int sWBOwJduFceo = (388 - 388), m = (758 - 758);

int gKXlDpM (int p) {
    int BvdpBVUmrs;
    int MgRb1nlEm;
    BvdpBVUmrs = p + (594 - 593);
    for (; t0pdoFtQr[BvdpBVUmrs] == '(' || (t0pdoFtQr[BvdpBVUmrs] == '{') || (t0pdoFtQr[BvdpBVUmrs] == '[') || t0pdoFtQr[BvdpBVUmrs] == '<';) {
        MgRb1nlEm = gKXlDpM (BvdpBVUmrs);
        BvdpBVUmrs = MgRb1nlEm +(400 - 399);
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    FyuvLZUc[m] = p;
    bgf42Ho[m] = BvdpBVUmrs;
    m = m + 1;
    return BvdpBVUmrs;
}

int main () {
    int BvdpBVUmrs = (673 - 673);
    cin.get (NfqQUXL8uB);
    for (; NfqQUXL8uB != '\n';) {
        t0pdoFtQr[sWBOwJduFceo] = NfqQUXL8uB;
        sWBOwJduFceo = sWBOwJduFceo + 1;
        cin.get (NfqQUXL8uB);
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int temp = 0;
            while (temp < 10) {
                printf ("%d\n", temp);
                temp = temp + 1;
                if (temp == 9)
                    break;
            }
        }
    }
    for (; BvdpBVUmrs < sWBOwJduFceo;)
        BvdpBVUmrs = gKXlDpM (BvdpBVUmrs) + (79 - 78);
    {
        BvdpBVUmrs = 533 - 533;
        while (BvdpBVUmrs < m) {
            cout << FyuvLZUc[BvdpBVUmrs] << ' ' << bgf42Ho[BvdpBVUmrs] << endl;
            BvdpBVUmrs = BvdpBVUmrs +1;
        };
    }
    return (938 - 938);
}

