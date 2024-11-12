int main () {
    char VdqRfkzP [110];
    int mTWrbwFPcM1, uAf62rK8gOvP = 0, mX6NwT, E9RCmxis;
    cin >> VdqRfkzP;
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
    E9RCmxis = strlen (VdqRfkzP);
    if ((214 - 213) < E9RCmxis) {
        uAf62rK8gOvP = ((VdqRfkzP[0] - '0') * (996 - 986) + (VdqRfkzP[(311 - 310)] - '0')) / 13;
        if (!(0 == uAf62rK8gOvP) || E9RCmxis == 2)
            cout << uAf62rK8gOvP;
        mX6NwT = ((VdqRfkzP[0] - '0') * 10 + (VdqRfkzP[1] - '0')) % 13;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        {
            mTWrbwFPcM1 = 1;
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
            while (mTWrbwFPcM1 < E9RCmxis -1) {
                uAf62rK8gOvP = (mX6NwT * 10 + (VdqRfkzP[mTWrbwFPcM1 + 1] - '0')) / 13;
                cout << uAf62rK8gOvP;
                mX6NwT = (mX6NwT * 10 + (VdqRfkzP[mTWrbwFPcM1 + 1] - '0')) % 13;
                mTWrbwFPcM1++;
            };
        }
        cout << endl;
        cout << mX6NwT << endl;
    }
    else {
        cout << '0' << endl;
        cout << VdqRfkzP[0] << endl;
    }
    return 0;
}

