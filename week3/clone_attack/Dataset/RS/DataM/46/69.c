int main () {
    int OvmNTsoOt, m, GNzl08IQmn, f04OfC38q, a [101] [101], ZQ1Zywpud8DT, HXaMvF3kgZ;
    cin >> OvmNTsoOt >> m;
    {
        GNzl08IQmn = 483 - 482;
        while (OvmNTsoOt >= GNzl08IQmn) {
            for (f04OfC38q = (28 - 27); m >= f04OfC38q; f04OfC38q++)
                cin >> a[GNzl08IQmn][f04OfC38q];
            GNzl08IQmn = GNzl08IQmn +1;
        };
    }
    GNzl08IQmn = 1;
    f04OfC38q = 1;
    ZQ1Zywpud8DT = (335 - 335);
    HXaMvF3kgZ = (252 - 252);
    for (; OvmNTsoOt *m > HXaMvF3kgZ;) {
        for (; f04OfC38q <= m - ZQ1Zywpud8DT;) {
            cout << a[GNzl08IQmn][f04OfC38q] << endl;
            HXaMvF3kgZ = HXaMvF3kgZ +1;
            f04OfC38q = f04OfC38q + 1;
        }
        if (OvmNTsoOt *m <= HXaMvF3kgZ)
            break;
        f04OfC38q = f04OfC38q - 1;
        GNzl08IQmn = GNzl08IQmn +1;
        for (; OvmNTsoOt -ZQ1Zywpud8DT >= GNzl08IQmn;) {
            cout << a[GNzl08IQmn][f04OfC38q] << endl;
            HXaMvF3kgZ = HXaMvF3kgZ +1;
            GNzl08IQmn++;
        }
        if (HXaMvF3kgZ >= OvmNTsoOt *m)
            break;
        GNzl08IQmn = GNzl08IQmn -1;
        f04OfC38q = f04OfC38q - 1;
        while (f04OfC38q >= ZQ1Zywpud8DT +1) {
            HXaMvF3kgZ = HXaMvF3kgZ +1;
            cout << a[GNzl08IQmn][f04OfC38q] << endl;
            f04OfC38q--;
        }
        if (HXaMvF3kgZ >= OvmNTsoOt *m)
            break;
        f04OfC38q = f04OfC38q + 1;
        GNzl08IQmn = GNzl08IQmn -1;
        while (GNzl08IQmn >= ZQ1Zywpud8DT +2) {
            HXaMvF3kgZ++;
            cout << a[GNzl08IQmn][f04OfC38q] << endl;
            GNzl08IQmn--;
        }
        if (HXaMvF3kgZ >= OvmNTsoOt *m)
            break;
        GNzl08IQmn++;
        f04OfC38q++;
        ZQ1Zywpud8DT++;
    }
    return 0;
}

