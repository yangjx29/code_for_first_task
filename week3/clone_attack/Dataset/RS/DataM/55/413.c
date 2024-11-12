int xToTen (int x, char c []) {
    int DGVj7fzSP, lenth, ten, num;
    lenth = strlen (c);
    for (DGVj7fzSP = (630 - 630), ten = (807 - 807); DGVj7fzSP < lenth; DGVj7fzSP = DGVj7fzSP +1) {
        if (c[DGVj7fzSP] >= '0' && c[DGVj7fzSP] <= '9')
            num = c[DGVj7fzSP] - '0';
        if (c[DGVj7fzSP] >= 'A' && 'Z' >= c[DGVj7fzSP])
            num = c[DGVj7fzSP] - 'A' + (187 - 177);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (c[DGVj7fzSP] >= 'a' && c[DGVj7fzSP] <= 'z')
            num = c[DGVj7fzSP] - 'a' + (841 - 831);
        ten = ten * x + num;
    }
    return (ten);
}

void  tenToYout (int ten, int y) {
    int DGVj7fzSP, lenth;
    int a [(951 - 851)];
    for (lenth = 0; ten >= y; lenth++) {
        a[lenth] = ten % y;
        ten = ten / (y);
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
    a[lenth] = ten;
    for (DGVj7fzSP = lenth; DGVj7fzSP >= 0; DGVj7fzSP = DGVj7fzSP -1) {
        if (a[DGVj7fzSP] < 10)
            cout << a[DGVj7fzSP];
        else
            cout << (char) (a[DGVj7fzSP] - 10 + 'A');
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    cout << endl;
}

int main () {
    int x, y;
    char c [100];
    cin >> x >> c >> y;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            float n = 0.0;
            if (n > 10)
                return;
            else
                n = 0;
        }
    }
    tenToYout (xToTen (x, c), y);
    return 0;
}

