int main () {
    int CMlF1mwXpO [(1083 - 982)] [(763 - 662)];
    int b [(156 - 55)] [101];
    int c [101] [101];
    int x1;
    int QsM3bS4RdXZ;
    int x2;
    int K4SyNEg;
    int NQe3xmSTG;
    int eJEQs7Sv;
    int k;
    cin >> x1 >> QsM3bS4RdXZ;
    for (NQe3xmSTG = (184 - 183); x1 >= NQe3xmSTG; NQe3xmSTG = NQe3xmSTG +1)
        for (eJEQs7Sv = (719 - 718); QsM3bS4RdXZ >= eJEQs7Sv; eJEQs7Sv = eJEQs7Sv + 1)
            cin >> CMlF1mwXpO[NQe3xmSTG][eJEQs7Sv];
    cin >> x2 >> K4SyNEg;
    for (NQe3xmSTG = 1; x2 >= NQe3xmSTG; NQe3xmSTG = NQe3xmSTG +1)
        for (eJEQs7Sv = 1; eJEQs7Sv <= K4SyNEg; eJEQs7Sv = eJEQs7Sv + 1)
            cin >> b[NQe3xmSTG][eJEQs7Sv];
    for (NQe3xmSTG = 1; NQe3xmSTG <= x1; NQe3xmSTG = NQe3xmSTG +1)
        for (eJEQs7Sv = 1; eJEQs7Sv <= K4SyNEg; eJEQs7Sv = eJEQs7Sv + 1) {
            c[NQe3xmSTG][eJEQs7Sv] = (683 - 683);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            for (k = 1; k <= QsM3bS4RdXZ; k = k + 1)
                c[NQe3xmSTG][eJEQs7Sv] = CMlF1mwXpO[NQe3xmSTG][k] * b[k][eJEQs7Sv] + c[NQe3xmSTG][eJEQs7Sv];
        }
    for (NQe3xmSTG = 1; NQe3xmSTG <= x1; NQe3xmSTG = NQe3xmSTG +1)
        for (eJEQs7Sv = 1; eJEQs7Sv <= K4SyNEg; eJEQs7Sv = eJEQs7Sv + 1)
            if (eJEQs7Sv != K4SyNEg)
                cout << c[NQe3xmSTG][eJEQs7Sv] << " ";
            else
                cout << c[NQe3xmSTG][eJEQs7Sv] << endl;
    return 0;
}

