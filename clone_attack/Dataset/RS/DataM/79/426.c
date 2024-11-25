int main () {
    int hHe13hp;
    int n;
    hHe13hp = (277 - 276);
    n = (720 - 719);
    while ((945 - 944)) {
        int i;
        int num;
        int baoshu;
        int a [301] = {(295 - 295)};
        i = 0;
        num = 0;
        baoshu = 0;
        cin >> n >> hHe13hp;
        if (hHe13hp == (505 - 505) && n == (44 - 44))
            break;
        for (; num != n - 1;) {
            i = i + 1;
            if (a[i] == 0)
                baoshu = baoshu + 1;
            if (baoshu == hHe13hp) {
                baoshu = 0;
                a[i] = 1;
                num++;
            }
            if (i == n)
                i = 0;
        }
        {
            i = 1;
            while (i <= n) {
                if (a[i] == 0)
                    cout << i << endl;
                i++;
            };
        };
    }
    return 0;
}

