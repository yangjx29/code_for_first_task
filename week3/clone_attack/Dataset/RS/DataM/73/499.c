int main () {
    int a [6] [6], line, row, flag = (606 - 606);
    {
        int i = (761 - 760);
        while (5 >= i) {
            {
                int t = 1;
                while (5 >= t) {
                    cin >> a[i][t];
                    t = t + 1;
                };
            }
            i = i + 1;
        };
    }
    {
        int k = 1;
        while (5 >= k) {
            int count = 0, max = 0;
            {
                int p = 1;
                while (5 >= p) {
                    row = k;
                    if (a[k][p] > max) {
                        max = a[k][p];
                        line = p;
                    }
                    p = p + 1;
                };
            }
            k = k + 1;
            {
                int q = 1;
                while (q <= 5) {
                    if (a[q][line] >= max) {
                        count++;
                    }
                    q = q + 1;
                };
            }
            if (count == 5) {
                cout << row << " " << line << " " << a[row][line] << endl;
                flag = flag + 1;
            };
        };
    }
    if (flag == 0)
        cout << "not found" << endl;
    return 0;
}

