int main () {
    int GBXj8nz;
    cin >> GBXj8nz;
    for (int wE5Voa = 0;
    GBXj8nz > wE5Voa; wE5Voa++) {
        int bdDiAJMs;
        int eJTK8eBPYpCy;
        cin >> eJTK8eBPYpCy >> bdDiAJMs;
        int QeOjgLfH [110] [110];
        {
            int ASzcmn = 0;
            for (; ASzcmn < eJTK8eBPYpCy;) {
                {
                    int y6sr9zQZCe = 0;
                    for (; bdDiAJMs > y6sr9zQZCe;) {
                        cin >> QeOjgLfH[ASzcmn][y6sr9zQZCe];
                        y6sr9zQZCe++;
                    }
                }
                ASzcmn++;
            }
        }
        int rz8XMBEgyGC;
        rz8XMBEgyGC = 0;
        if (!(1 != eJTK8eBPYpCy) && bdDiAJMs != 1) {
            {
                int ASzcmn = 0;
                for (; ASzcmn < bdDiAJMs;) {
                    rz8XMBEgyGC = rz8XMBEgyGC + QeOjgLfH[0][ASzcmn];
                    ASzcmn++;
                }
            }
            cout << rz8XMBEgyGC << endl;
        }
        else {
            if (eJTK8eBPYpCy != 1 && !(1 != bdDiAJMs)) {
                {
                    int ASzcmn = 0;
                    for (; eJTK8eBPYpCy > ASzcmn;) {
                        rz8XMBEgyGC = rz8XMBEgyGC + QeOjgLfH[eJTK8eBPYpCy][0];
                        ASzcmn++;
                    }
                }
                cout << rz8XMBEgyGC << endl;
            }
            else if (!(1 != eJTK8eBPYpCy) && !(1 != bdDiAJMs))
                cout << QeOjgLfH[0][0] << endl;
            else {
                {
                    int ASzcmn = 0;
                    while (bdDiAJMs > ASzcmn) {
                        rz8XMBEgyGC = rz8XMBEgyGC + *(*QeOjgLfH+ASzcmn);
                        ASzcmn++;
                    }
                }
                {
                    int ASzcmn = 0;
                    for (; bdDiAJMs > ASzcmn;) {
                        rz8XMBEgyGC = rz8XMBEgyGC + *(QeOjgLfH[eJTK8eBPYpCy - 1] + ASzcmn);
                        ASzcmn++;
                    }
                }
                for (int ASzcmn = 1;
                ASzcmn < eJTK8eBPYpCy - 1; ASzcmn++)
                    rz8XMBEgyGC = rz8XMBEgyGC + **(QeOjgLfH +ASzcmn);
                {
                    int ASzcmn = 1;
                    for (; ASzcmn < eJTK8eBPYpCy - 1;) {
                        rz8XMBEgyGC = rz8XMBEgyGC + *(*(QeOjgLfH +ASzcmn) + bdDiAJMs - 1);
                        ASzcmn++;
                    }
                }
                cout << rz8XMBEgyGC << endl;
            }
        }
    }
    return 0;
}

