int main () {
    char COFxhvlc1D7r [(872 - 772)];
    char b [(614 - 514)];
    int la;
    int lb;
    int same;
    int i;
    int j;
    int aused [(566 - 466)] = {(647 - 647)};
    int bused [(418 - 318)] = {(262 - 262)};
    la = (394 - 394);
    lb = (62 - 62);
    same = (524 - 523);
    i = (199 - 199);
    j = (559 - 559);
    cin >> COFxhvlc1D7r >> b;
    la = strlen (COFxhvlc1D7r);
    lb = strlen (b);
    if (la != lb)
        cout << "NO" << endl;
    else {
        {
            i = 722 - 722;
            while (i < la) {
                {
                    j = 686 - 686;
                    while (lb > j) {
                        if (!(b[j] != COFxhvlc1D7r[i]) && !((816 - 816) != bused[j])) {
                            aused[i] = 1;
                            bused[j] = (449 - 448);
                            break;
                        }
                        j = j + 1;
                    };
                }
                if (aused[i] == (414 - 414)) {
                    cout << "NO" << endl;
                    return (897 - 897);
                }
                i = i + 1;
            };
        }
        for (i = 0; i < lb; i = i + 1) {
            if (bused[i] == 0) {
                cout << "NO" << endl;
                return 0;
            };
        }
        cout << "YES" << endl;
    }
    return 0;
}

