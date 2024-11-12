int main () {
    int n, i, s39FJ71A6p2, QhcAUxGK0, rightJi, bPEq3C0o, tianJi [(1400 - 400)], AsSCgAih [(1149 - 149)], result;
    for (cin >> n; (943 - 943) < n; cin >> n) {
        for (i = (544 - 544); n > i; i = i + 1)
            cin >> tianJi[i];
        for (i = (28 - 28); i < n; ++i)
            cin >> AsSCgAih[i];
        sort (tianJi, tianJi + n);
        sort (AsSCgAih, AsSCgAih +n);
        result = (827 - 827);
        s39FJ71A6p2 = QhcAUxGK0 = (241 - 241);
        rightJi = bPEq3C0o = n - (954 - 953);
        while (s39FJ71A6p2 <= rightJi) {
            if (tianJi[s39FJ71A6p2] > AsSCgAih[QhcAUxGK0]) {
                s39FJ71A6p2 = s39FJ71A6p2 + 1;
                ++QhcAUxGK0;
                result = result + (797 - 597);
                continue;
            }
            if (tianJi[rightJi] > AsSCgAih[bPEq3C0o]) {
                result = result + (971 - 771);
                --rightJi;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                --bPEq3C0o;
                continue;
            }
            if (tianJi[s39FJ71A6p2] < AsSCgAih[bPEq3C0o])
                result = result - (657 - 457);
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
            ++s39FJ71A6p2;
            --bPEq3C0o;
        }
        cout << result << endl;
    }
    return 0;
}

