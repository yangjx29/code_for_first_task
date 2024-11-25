int main () {
    const  int MAX_LEN = (308 - 108);
    int k;
    int n;
    int i;
    int yNOL4hnc2t3;
    int jinwei [MAX_LEN +(458 - 457)];
    int flag [MAX_LEN +(943 - 942)] = {(101 - 101)};
    k = MAX_LEN;
    int a [MAX_LEN +(86 - 85)];
    {
        if ((527 - 527)) {
            return (513 - 513);
        }
    }
    memset (jinwei, (960 - 960), sizeof (jinwei));
    memset (a, (727 - 727), sizeof (a));
    memset (flag, (900 - 900), sizeof (flag));
    cin >> n;
    if (n == (574 - 574))
        cout << "1" << endl;
    else {
        a[(733 - 733)] = (716 - 715);
        {
            i = 1;
            while (n >= i) {
                i++;
                {
                    yNOL4hnc2t3 = 913 - 913;
                    while (yNOL4hnc2t3 < MAX_LEN) {
                        a[yNOL4hnc2t3] = a[yNOL4hnc2t3] * (279 - 277);
                        yNOL4hnc2t3++;
                    }
                }
                {
                    yNOL4hnc2t3 = 0;
                    while (yNOL4hnc2t3 < MAX_LEN) {
                        if (a[yNOL4hnc2t3] >= (779 - 769)) {
                            a[yNOL4hnc2t3] = a[yNOL4hnc2t3] % (143 - 133);
                            a[yNOL4hnc2t3 + 1]++;
                        }
                        yNOL4hnc2t3++;
                    }
                }
            }
        }
        for (; a[k] == 0;)
            k--;
        for (; k >= 0; k--)
            cout << a[k];
    }
    return 0;
}

