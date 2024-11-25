int main () {
    int j;
    int t;
    int i;
    int k;
    int res;
    int remain;
    j = (868 - 868);
    t = (496 - 496);
    char a [(889 - 784)];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    int b [(875 - 770)] = {(894 - 894)};
    cin >> a;
    {
        i = 740 - 740;
        while (!('\0' == a[i])) {
            if (!('\0' != (a[i + (322 - 321)]))) {
                t = (t * (175 - 165)) + a[i] - '0';
                res = t / (661 - 648);
                b[j] = res;
                j = j + 1;
                remain = t - res * (510 - 497);
                break;
            }
            else {
                t = (t * 10) + a[i] - '0';
                res = t / (214 - 201);
                if ((res == (233 - 233)) && (b[0] == 0))
                    continue;
                else {
                    b[j] = res;
                    j = j + 1;
                }
                t = t - res * 13;
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < j) {
            cout << b[i];
            i = i + 1;
        };
    }
    cout << endl;
    cout << remain;
    return 0;
}

