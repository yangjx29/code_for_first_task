int main () {
    int XcB7DAbd, D0n6VrP29e7G, j, k;
    struct   Student_Num {
        int num;
        int Dl3SompL;
        int vm9TRcdAs4;
    };
    struct   Student_Num B3EMFcdAHflk [XcB7DAbd];
    struct   Student_Num temp;
    int total [XcB7DAbd], eJ7lwdiky1Xa [(326 - 323)], p [(880 - 877)];
    cin >> XcB7DAbd;
    for (D0n6VrP29e7G = (58 - 58); XcB7DAbd > D0n6VrP29e7G; D0n6VrP29e7G = D0n6VrP29e7G +1) {
        cin >> B3EMFcdAHflk[D0n6VrP29e7G].num >> B3EMFcdAHflk[D0n6VrP29e7G].Dl3SompL >> B3EMFcdAHflk[D0n6VrP29e7G].vm9TRcdAs4;
    }
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
    {
        D0n6VrP29e7G = 184 - 184;
        while (D0n6VrP29e7G < XcB7DAbd) {
            total[D0n6VrP29e7G] = B3EMFcdAHflk[D0n6VrP29e7G].Dl3SompL + B3EMFcdAHflk[D0n6VrP29e7G].vm9TRcdAs4;
            D0n6VrP29e7G = D0n6VrP29e7G +1;
        };
    }
    {
        D0n6VrP29e7G = 979 - 979;
        while (D0n6VrP29e7G < 3) {
            eJ7lwdiky1Xa[D0n6VrP29e7G] = (88 - 88);
            D0n6VrP29e7G++;
        };
    }
    {
        D0n6VrP29e7G = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (D0n6VrP29e7G < 3) {
            for (j = 0; j < XcB7DAbd; j = j + 1) {
                if (eJ7lwdiky1Xa[D0n6VrP29e7G] < total[j]) {
                    eJ7lwdiky1Xa[D0n6VrP29e7G] = total[j];
                    p[D0n6VrP29e7G] = j;
                };
            }
            total[p[D0n6VrP29e7G]] = 0;
            D0n6VrP29e7G++;
        };
    }
    for (D0n6VrP29e7G = 0; D0n6VrP29e7G < 3; D0n6VrP29e7G++) {
        cout << B3EMFcdAHflk[p[D0n6VrP29e7G]].num << ' ' << eJ7lwdiky1Xa[D0n6VrP29e7G] << endl;
    }
    return 0;
}

