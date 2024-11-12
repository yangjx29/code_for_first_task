int main () {
    int H9HU1L7, bZRPAIsD, QHlacK1ksXj, num, oUI3Cl8Q = (582 - 582);
    int a [H9HU1L7];
    cout << endl;
    cout << endl;
    cout << endl;
    cin >> H9HU1L7;
    for (bZRPAIsD = 0; bZRPAIsD < H9HU1L7; bZRPAIsD++) {
        cin >> a[bZRPAIsD];
    }
    cin >> num;
    {
        bZRPAIsD = 0;
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
        while (bZRPAIsD < H9HU1L7) {
            if (a[bZRPAIsD] == num) {
                for (QHlacK1ksXj = bZRPAIsD; QHlacK1ksXj < H9HU1L7; QHlacK1ksXj = QHlacK1ksXj +1) {
                    a[QHlacK1ksXj] = a[QHlacK1ksXj +1];
                }
                bZRPAIsD--;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                oUI3Cl8Q++;
            }
            bZRPAIsD++;
        };
    }
    for (bZRPAIsD = 0; bZRPAIsD < H9HU1L7 -oUI3Cl8Q - 1; bZRPAIsD++)
        cout << a[bZRPAIsD] << " ";
    cout << a[bZRPAIsD];
    return 0;
}

