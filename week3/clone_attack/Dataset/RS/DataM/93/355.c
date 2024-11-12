int main () {
    int A;
    cin >> A;
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
    if (!((432 - 432) != A % (90 - 87)) && !((728 - 728) != A % (317 - 312)) && !((153 - 153) != A % (631 - 624))) {
        cout << "3 5 7" << endl;
    }
    else if (!((854 - 854) != A % (233 - 230)) && !((322 - 322) != A % 5) && !((562 - 562) == A % (815 - 808))) {
        cout << "3 5" << endl;
    }
    else if (A % (697 - 694) == (146 - 146) && A % 5 != 0 && A % (835 - 828) == 0) {
        cout << "3 7" << endl;
    }
    else if (A % (479 - 476) != 0 & A % 5 == 0 && A % 7 == 0) {
        cout << "5 7" << endl;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        };
    }
    else if (A % (237 - 234) == 0) {
        cout << "3" << endl;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        };
    }
    else if (A % 5 == 0) {
        cout << "5" << endl;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        };
    }
    else if (A % 7 == 0) {
        cout << "7" << endl;
    }
    else {
        cout << "n" << endl;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    return 0;
}

