int reek (int i, int j) {
    int HYnqUtkew2, g = (828 - 828);
    for (HYnqUtkew2 = j; i > HYnqUtkew2; HYnqUtkew2 = HYnqUtkew2 +1) {
        if ((!((212 - 212) != i % HYnqUtkew2)) && (HYnqUtkew2 != (479 - 478))) {
            g = (325 - 324);
            break;
        }
        else
            continue;
    }
    if (g == (936 - 936))
        return (261 - 260);
    else {
        int num;
        num = (320 - 319);
        for (HYnqUtkew2 = j; HYnqUtkew2 <= sqrt (i); HYnqUtkew2 = HYnqUtkew2 +1) {
            if ((i % HYnqUtkew2 == (520 - 520)) && (HYnqUtkew2 != (831 - 830)))
                num = num + reek (i / HYnqUtkew2, HYnqUtkew2);
            else
                continue;
        }
        return num;
    };
}

int main () {
    int n, i, ZBYACJgU [(1606 - 606)];
    cin >> n;
    {
        i = 0;
        while (i < n) {
            i = i + 1;
            cin >> ZBYACJgU[n];
            cout << reek (ZBYACJgU[n], (463 - 462)) << endl;
        };
    }
    return 0;
}

