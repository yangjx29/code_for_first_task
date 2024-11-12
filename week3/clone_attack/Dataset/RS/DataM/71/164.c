int main () {
    int EbltyiRprf2, XOBPHXD, MFJVyW0r, CCNxESyM5Q, days = (838 - 838), oAgHN4fsGq8K, TVnRzUKNmQ3f, a;
    cin >> EbltyiRprf2;
    {
        oAgHN4fsGq8K = 1;
        while (oAgHN4fsGq8K <= EbltyiRprf2) {
            oAgHN4fsGq8K = oAgHN4fsGq8K + 1;
            cin >> XOBPHXD >> MFJVyW0r >> CCNxESyM5Q;
            if (MFJVyW0r > CCNxESyM5Q) {
                a = CCNxESyM5Q;
                CCNxESyM5Q = MFJVyW0r;
                MFJVyW0r = a;
            }
            TVnRzUKNmQ3f = CCNxESyM5Q -MFJVyW0r;
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
            for (; TVnRzUKNmQ3f > (821 - 821); MFJVyW0r = MFJVyW0r +1, TVnRzUKNmQ3f = TVnRzUKNmQ3f -1) {
                if (MFJVyW0r == (968 - 964) || MFJVyW0r == 6 || MFJVyW0r == 9 || MFJVyW0r == 11)
                    days = days + 30;
                else if (MFJVyW0r == 2) {
                    if (((XOBPHXD % 4 == 0) && (XOBPHXD % (264 - 164) != 0)) || (XOBPHXD % 400 == 0))
                        days = days + 29;
                    else
                        days = days + 28;
                }
                else
                    days += 31;
            }
            if (days % 7 == 0)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
            days = 0;
        };
    }
    return 0;
}

