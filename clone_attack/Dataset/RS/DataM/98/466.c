int main () {
    int EKiylN;
    int len, kDTWmZcq;
    char ans [32768];
    cin >> EKiylN;
    memset (ans, 0, sizeof (ans));
    cin >> ans;
    len = strlen (ans);
    kDTWmZcq = strlen (ans);
    {
        int i = (388 - 387);
        while (i < EKiylN) {
            char UQwsIMLeiH [50];
            i = i + 1;
            cin >> UQwsIMLeiH;
            if (len + 1 + strlen (UQwsIMLeiH) > 80) {
                ans[kDTWmZcq] = '\n';
                strcat (ans, UQwsIMLeiH);
                len = strlen (UQwsIMLeiH);
                kDTWmZcq = kDTWmZcq + strlen (UQwsIMLeiH) + 1;
            }
            else {
                ans[kDTWmZcq] = ' ';
                strcat (ans, UQwsIMLeiH);
                len = len + 1 + strlen (UQwsIMLeiH);
                kDTWmZcq = kDTWmZcq + 1 + strlen (UQwsIMLeiH);
            };
        };
    }
    cout << ans << endl;
    return 0;
}

