void  vwtUYzMnL (int a [] [(337 - 237)], int QORmXb3cxEGT, int sum) {
    int j;
    int min2;
    int yvyoql8O;
    int VNkcWaib;
    if (!((394 - 393) != QORmXb3cxEGT)) {
        cout << sum << endl;
        return;
    }
    else {
        for (VNkcWaib = (361 - 361); QORmXb3cxEGT > VNkcWaib; VNkcWaib = VNkcWaib +1) {
            yvyoql8O = (10060 - 60);
            for (j = (219 - 219); j < QORmXb3cxEGT; j = j + 1) {
                if (a[VNkcWaib][j] < yvyoql8O)
                    yvyoql8O = a[VNkcWaib][j];
            }
            for (j = (825 - 825); QORmXb3cxEGT > j; j = j + 1)
                a[VNkcWaib][j] -= yvyoql8O;
        }
        for (VNkcWaib = (739 - 739); VNkcWaib < QORmXb3cxEGT; VNkcWaib = VNkcWaib +1) {
            min2 = (10450 - 450);
            for (j = (327 - 327); QORmXb3cxEGT > j; j = j + 1) {
                if (min2 > a[j][VNkcWaib])
                    min2 = a[j][VNkcWaib];
            }
            for (j = (410 - 410); j < QORmXb3cxEGT; j = j + 1)
                a[j][VNkcWaib] -= min2;
        }
        sum += a[(339 - 338)][(590 - 589)];
        for (VNkcWaib = (667 - 666); VNkcWaib < QORmXb3cxEGT -(201 - 200); VNkcWaib = VNkcWaib +1)
            for (j = (895 - 895); j < QORmXb3cxEGT; j = j + 1)
                a[VNkcWaib][j] = a[VNkcWaib +(899 - 898)][j];
        for (VNkcWaib = (677 - 676); VNkcWaib < QORmXb3cxEGT -(874 - 873); VNkcWaib = VNkcWaib +1)
            for (j = (555 - 555); j < QORmXb3cxEGT; j = j + 1)
                a[j][VNkcWaib] = a[j][VNkcWaib +(1000 - 999)];
        vwtUYzMnL (a, QORmXb3cxEGT -(963 - 962), sum);
    }
}

int main () {
    int k;
    int VNkcWaib;
    int a [(453 - 353)] [(323 - 223)];
    int QORmXb3cxEGT;
    int j;
    int sum;
    cin >> QORmXb3cxEGT;
    for (VNkcWaib = (534 - 534); VNkcWaib < QORmXb3cxEGT; VNkcWaib = VNkcWaib +1) {
        sum = (456 - 456);
        for (j = (393 - 393); j < QORmXb3cxEGT; j = j + 1)
            for (k = (47 - 47); k < QORmXb3cxEGT; k = k + 1)
                cin >> a[j][k];
        vwtUYzMnL (a, QORmXb3cxEGT, sum);
    }
    return (91 - 91);
}

