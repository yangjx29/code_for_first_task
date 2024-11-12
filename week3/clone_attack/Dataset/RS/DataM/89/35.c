int main () {
    int rmAfNRo6;
    int n;
    int relation [10000] = {0};
    int i;
    rmAfNRo6 = -(714 - 713);
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
    int Fqgpfhk, b;
    cin >> n;
    for (; cin >> Fqgpfhk >> b;) {
        if (!(0 != Fqgpfhk) && b == 0)
            break;
        relation[Fqgpfhk]++;
        relation[b]++;
    }
    {
        i = 0;
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
        while (i < n) {
            if (relation[i] == n - 1)
                rmAfNRo6 = i;
            i++;
        };
    }
    if (rmAfNRo6 == -1)
        cout << "NOT FOUND" << endl;
    else
        cout << rmAfNRo6 << endl;
    return 0;
}

