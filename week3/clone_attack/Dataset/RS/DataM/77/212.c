int dg (int l);
char fnhczOpKxrD4, st [1000];

int main () {
    int h;
    int z [100];
    h = 0;
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
    cin >> st;
    fnhczOpKxrD4 = st[0];
    {
        int i = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= strlen (st)) {
            if (st[i - 1] == fnhczOpKxrD4) {
                h = h + 1;
                z[h] = i;
            }
            else {
                cout << z[h] - 1 << ' ' << i - 1 << endl;
                z[h] = 0;
                h--;
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
            i++;
        };
    }
    return 0;
}

