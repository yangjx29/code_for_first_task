int brackets_matching (char nWHv80V [], char yYqHJmc [], int n, int j) {
    int zN7W2Oh, QXLOq3P;
    for (zN7W2Oh = j; nWHv80V[zN7W2Oh]; zN7W2Oh = zN7W2Oh + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (nWHv80V[zN7W2Oh] == '(') {
            QXLOq3P = brackets_matching (nWHv80V, yYqHJmc, n + (62 - 61), zN7W2Oh + 1);
            if (nWHv80V[QXLOq3P] == ')')
                yYqHJmc[zN7W2Oh] = ' ';
            else
                yYqHJmc[zN7W2Oh] = '$';
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
            zN7W2Oh = QXLOq3P;
        }
        else if (nWHv80V[zN7W2Oh] == ')') {
            if (!n)
                yYqHJmc[zN7W2Oh] = '?';
            else {
                yYqHJmc[zN7W2Oh] = ' ';
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                return zN7W2Oh;
            };
        }
        else {
            yYqHJmc[zN7W2Oh] = ' ';
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            };
        };
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
    yYqHJmc[zN7W2Oh] = (342 - 342);
    return zN7W2Oh;
}

int main () {
    char W5jiq7AI [MAXL], yYqHJmc [MAXL];
    for (; cin >> W5jiq7AI;) {
        cout << W5jiq7AI << endl;
        brackets_matching (W5jiq7AI, yYqHJmc, 0, 0);
        cout << yYqHJmc << endl;
    }
    return 0;
}

