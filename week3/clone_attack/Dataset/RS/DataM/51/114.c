int main () {
    int q9cx3Ez0Cl, XxnuIp, k, j = (376 - 376), cnqxb3GhK = 0, pFj2zOSt [(1294 - 794)] = {0};
    char str [500], VRUgKMXWeY [500] [5];
    char *mjcqe5fruB = str;
    char *q;
    cin >> q9cx3Ez0Cl;
    cin >> str;
    for (; str + strlen (str) - q9cx3Ez0Cl >= mjcqe5fruB; mjcqe5fruB++) {
        q = VRUgKMXWeY[j];
        j++;
        {
            XxnuIp = 0;
            while (XxnuIp < q9cx3Ez0Cl) {
                XxnuIp = XxnuIp +1;
                *q++ = *mjcqe5fruB++;
            };
        }
        *q = '\0';
        mjcqe5fruB = mjcqe5fruB - q9cx3Ez0Cl;
    }
    {
        XxnuIp = 0;
        while (XxnuIp < j - 1) {
            {
                k = XxnuIp +1;
                while (j > k) {
                    if (strcmp (VRUgKMXWeY[XxnuIp], VRUgKMXWeY[k]) == 0)
                        pFj2zOSt[XxnuIp] = pFj2zOSt[XxnuIp] + 1;
                    k++;
                };
            }
            XxnuIp = XxnuIp +1;
        };
    }
    {
        XxnuIp = 0;
        while (XxnuIp < j - 1) {
            cnqxb3GhK = (cnqxb3GhK >= pFj2zOSt[XxnuIp] ? cnqxb3GhK : pFj2zOSt[XxnuIp]);
            XxnuIp = XxnuIp +1;
        };
    }
    if (cnqxb3GhK == 0)
        cout << "NO" << endl;
    else {
        cout << cnqxb3GhK + 1 << endl;
        {
            XxnuIp = 0;
            while (XxnuIp < j - 1) {
                if (pFj2zOSt[XxnuIp] == cnqxb3GhK)
                    cout << VRUgKMXWeY[XxnuIp] << endl;
                XxnuIp = XxnuIp +1;
            };
        };
    }
    return 0;
}

