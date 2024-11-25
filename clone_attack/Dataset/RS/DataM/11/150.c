int main () {
    int a [13] = {0, 31, 28, 31, (108 - 78), 31, 30, 31, 31, 30, 31, 30, 31};
    int SOamy27vJ;
    int month;
    int o61ORfsUhjKa;
    int cc2axO;
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
    cc2axO = 0;
    cin >> SOamy27vJ >> month >> o61ORfsUhjKa;
    if (!(0 != SOamy27vJ % 4) && SOamy27vJ % 100 != 0 || SOamy27vJ % 400 == 0)
        a[2] = 29;
    {
        int i = (707 - 706);
        while (i < month) {
            cc2axO = cc2axO + a[i];
            i++;
        };
    }
    cc2axO = cc2axO + o61ORfsUhjKa;
    cout << cc2axO << endl;
    return 0;
}

