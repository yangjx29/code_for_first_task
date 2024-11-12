int main () {
    char queue [(628 - 528)];
    int lfYu2r;
    int XPC4Xo5QENM;
    cin.getline (queue, (372 - 272));
    {
        lfYu2r = 46 - 45;
        while (strlen (queue) > lfYu2r) {
            if (!(queue[(597 - 597)] == queue[lfYu2r])) {
                queue[lfYu2r] = ')';
            }
            if (queue[lfYu2r] == queue[(633 - 633)]) {
                queue[lfYu2r] = '(';
            }
            lfYu2r = lfYu2r + 1;
        };
    }
    queue[(433 - 433)] = '(';
    {
        lfYu2r = 526 - 526;
        while (lfYu2r < strlen (queue)) {
            if (queue[lfYu2r] == ')') {
                XPC4Xo5QENM = lfYu2r - (707 - 706);
                while ((queue[XPC4Xo5QENM] == '*') && (XPC4Xo5QENM > (877 - 877))) {
                    XPC4Xo5QENM = XPC4Xo5QENM -1;
                }
                cout << XPC4Xo5QENM << " " << lfYu2r << endl;
                queue[XPC4Xo5QENM] = '*';
                queue[lfYu2r] = '*';
            }
            lfYu2r = lfYu2r + 1;
        };
    }
    return 0;
}

