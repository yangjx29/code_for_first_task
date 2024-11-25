int main () {
    char num [100];
    int WK8c9kXuD;
    int r;
    int i;
    int BUM5vE0R4tH;
    int k;
    int oZ3pdyGVP [100];
    WK8c9kXuD = 0;
    r = 0;
    memset (num, '0', 100);
    cin >> num;
    {
        i = 0;
        while (!('\0' == num[i])) {
            oZ3pdyGVP[i] = (num[i] + r * 10 - '0' - (num[i] + r * 10 - '0') % 13) / 13;
            r = (num[i] - '0' + r * 10) % 13;
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
    {
        BUM5vE0R4tH = 0;
        while (i - 1 >= BUM5vE0R4tH) {
            if (oZ3pdyGVP[BUM5vE0R4tH] != 0) {
                WK8c9kXuD = 1;
                {
                    k = BUM5vE0R4tH;
                    while (k <= i - 1) {
                        cout << oZ3pdyGVP[k];
                        k = k + 1;
                    };
                }
                break;
            }
            BUM5vE0R4tH++;
        };
    }
    if (WK8c9kXuD == 0) {
        cout << "0";
    }
    cout << endl;
    cout << r;
    return 0;
}

