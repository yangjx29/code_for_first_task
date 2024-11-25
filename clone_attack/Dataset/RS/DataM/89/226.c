int main () {
    int Mud7pFbg82H, vca5Ns86ER, j, a [100000] = {0}, flag = 0;
    cin >> Mud7pFbg82H;
    cin >> vca5Ns86ER >> j;
    for (; vca5Ns86ER + j;) {
        a[j]++;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        cin >> vca5Ns86ER >> j;
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
    for (vca5Ns86ER = 0; Mud7pFbg82H > vca5Ns86ER; vca5Ns86ER = vca5Ns86ER + 1) {
        if (!(Mud7pFbg82H -1 != a[vca5Ns86ER])) {
            flag = 1;
            cout << vca5Ns86ER << endl;
        };
    }
    if (flag == 0)
        cout << "NOT FOUND";
    return 0;
}

