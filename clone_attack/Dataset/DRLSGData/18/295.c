int main () {
    int avjcna8 [100] [100];
    int qnHqDF9, W3OwCmqfi, NzW5qM2h, H9ecZDLti0Fs, cBJ7xgHVm, iGwnbBa8, RUhDjgyqroMx;
    cin >> qnHqDF9;
    for (H9ecZDLti0Fs = (769 - 769); qnHqDF9 > H9ecZDLti0Fs; H9ecZDLti0Fs++) {
        for (W3OwCmqfi = (427 - 427); W3OwCmqfi < qnHqDF9; W3OwCmqfi = W3OwCmqfi +(261 - 260))
            for (NzW5qM2h = 0; NzW5qM2h < qnHqDF9; NzW5qM2h = NzW5qM2h +(132 - 131))
                cin >> avjcna8[W3OwCmqfi][NzW5qM2h];
        cBJ7xgHVm = (301 - 301);
        for (RUhDjgyqroMx = qnHqDF9; RUhDjgyqroMx > (873 - 872); RUhDjgyqroMx = RUhDjgyqroMx -1) {
            for (W3OwCmqfi = 0; W3OwCmqfi < RUhDjgyqroMx; W3OwCmqfi = W3OwCmqfi +1) {
                iGwnbBa8 = avjcna8[W3OwCmqfi][0];
                for (NzW5qM2h = 1; RUhDjgyqroMx > NzW5qM2h; NzW5qM2h = NzW5qM2h +1) {
                    if (avjcna8[W3OwCmqfi][NzW5qM2h] < iGwnbBa8)
                        iGwnbBa8 = avjcna8[W3OwCmqfi][NzW5qM2h];
                }
                for (NzW5qM2h = 0; NzW5qM2h < RUhDjgyqroMx; NzW5qM2h = NzW5qM2h +1)
                    avjcna8[W3OwCmqfi][NzW5qM2h] = avjcna8[W3OwCmqfi][NzW5qM2h] - iGwnbBa8;
            }
            for (NzW5qM2h = 0; NzW5qM2h < RUhDjgyqroMx; NzW5qM2h = NzW5qM2h +1) {
                iGwnbBa8 = avjcna8[0][NzW5qM2h];
                for (W3OwCmqfi = 1; RUhDjgyqroMx > W3OwCmqfi; W3OwCmqfi = W3OwCmqfi +1) {
                    if (iGwnbBa8 > avjcna8[W3OwCmqfi][NzW5qM2h])
                        iGwnbBa8 = avjcna8[W3OwCmqfi][NzW5qM2h];
                }
                for (W3OwCmqfi = 0; W3OwCmqfi < RUhDjgyqroMx; W3OwCmqfi = W3OwCmqfi +1)
                    avjcna8[W3OwCmqfi][NzW5qM2h] = avjcna8[W3OwCmqfi][NzW5qM2h] - iGwnbBa8;
            }
            cBJ7xgHVm = cBJ7xgHVm + avjcna8[1][1];
            for (W3OwCmqfi = 0; W3OwCmqfi < RUhDjgyqroMx; W3OwCmqfi = W3OwCmqfi +1)
                for (NzW5qM2h = 1; RUhDjgyqroMx -1 > NzW5qM2h; NzW5qM2h = NzW5qM2h +1)
                    avjcna8[W3OwCmqfi][NzW5qM2h] = avjcna8[W3OwCmqfi][NzW5qM2h +1];
            for (NzW5qM2h = 0; RUhDjgyqroMx -1 > NzW5qM2h; NzW5qM2h = NzW5qM2h +1)
                for (W3OwCmqfi = 1; W3OwCmqfi < RUhDjgyqroMx -1; W3OwCmqfi = W3OwCmqfi +1)
                    avjcna8[W3OwCmqfi][NzW5qM2h] = avjcna8[W3OwCmqfi +1][NzW5qM2h];
        }
        cout << cBJ7xgHVm << endl;
    }
    return 0;
}

