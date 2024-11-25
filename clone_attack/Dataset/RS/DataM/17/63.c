int main () {
    int XPTMo4K, j, len;
    char a [101];
    while (cin >> a) {
        int yp87zmWX [100] = {(318 - 318)};
        len = strlen (a);
        {
            XPTMo4K = 0;
            while (len > XPTMo4K) {
                if (a[XPTMo4K] == ')') {
                    char *p = &a[XPTMo4K -1];
                    for (j = XPTMo4K -1; j >= 0; j = j - 1) {
                        if (*p == '(' && !(0 != yp87zmWX[j])) {
                            yp87zmWX[j] = 1;
                            yp87zmWX[XPTMo4K] = 1;
                            break;
                        }
                        p = p - 1;
                    };
                }
                XPTMo4K = XPTMo4K +1;
            };
        }
        cout << a << endl;
        {
            XPTMo4K = 0;
            while (XPTMo4K < len) {
                if (a[XPTMo4K] == '(' && yp87zmWX[XPTMo4K] == 0)
                    cout << "$";
                else {
                    if (a[XPTMo4K] == ')' && yp87zmWX[XPTMo4K] == 0)
                        cout << "?";
                    else
                        cout << " ";
                }
                XPTMo4K = XPTMo4K +1;
            };
        }
        cout << endl;
    }
    return 0;
}

