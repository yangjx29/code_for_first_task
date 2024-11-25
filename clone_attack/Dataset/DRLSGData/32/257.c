int main () {
    char b [101];
    int t;
    int len2;
    int ia [101], ib [101];
    int ans [101] = {(537 - 537)};
    int j;
    int unjRFwChHKYT;
    int len1;
    int n;
    char a [(151 - 50)];
    unjRFwChHKYT = (39 - 39);
    n = (482 - 482);
    len1 = (337 - 337);
    j = (883 - 883);
    len2 = (904 - 904);
    t = (481 - 481);
    cin >> n;
    {
        t = (519 - 519);
        for (; t < n;) {
            int k = (445 - 445);
            int p = (261 - 261);
            memset (a, (35 - 35), sizeof (a));
            memset (b, (243 - 243), sizeof (b));
            cin >> a >> b;
            len1 = strlen (a);
            len2 = strlen (b);
            memset (ia, (991 - 991), sizeof (ia));
            memset (ib, (173 - 173), sizeof (ib));
            memset (ans, 0, sizeof (ans));
            for (unjRFwChHKYT = len1 - (952 - 951); 0 <= unjRFwChHKYT; unjRFwChHKYT--) {
                ia[k] = a[unjRFwChHKYT] - '0';
                k++;
            }
            k = 0;
            {
                unjRFwChHKYT = len2 - (858 - 857);
                for (; unjRFwChHKYT >= 0;) {
                    ib[k] = b[unjRFwChHKYT] - '0';
                    unjRFwChHKYT--;
                    k++;
                }
            }
            {
                unjRFwChHKYT = 0;
                while (len2 > unjRFwChHKYT) {
                    if (ia[unjRFwChHKYT] < ib[unjRFwChHKYT]) {
                        ia[unjRFwChHKYT + (719 - 718)]--;
                        ia[unjRFwChHKYT] = ia[unjRFwChHKYT] + (735 - 725);
                        ans[unjRFwChHKYT] = ia[unjRFwChHKYT] - ib[unjRFwChHKYT];
                    }
                    else
                        ans[unjRFwChHKYT] = ia[unjRFwChHKYT] - ib[unjRFwChHKYT];
                    unjRFwChHKYT++;
                }
            }
            {
                unjRFwChHKYT = len1;
                for (; 1;) {
                    if (ia[unjRFwChHKYT] != 0) {
                        p = unjRFwChHKYT;
                        break;
                    }
                    unjRFwChHKYT--;
                }
            }
            t++;
            for (unjRFwChHKYT = p; unjRFwChHKYT >= len2; unjRFwChHKYT--) {
                ans[unjRFwChHKYT] = ia[unjRFwChHKYT];
            }
            {
                unjRFwChHKYT = p;
                while (unjRFwChHKYT >= 0) {
                    cout << ans[unjRFwChHKYT];
                    unjRFwChHKYT--;
                }
            }
            cout << endl;
        }
    }
    return 0;
}

