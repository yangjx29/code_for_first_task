int main () {
    int ho3l7m [201];
    int XhQLa2sF0 [201];
    int kv1MBgYD [201];
    char SsndWZhbOXz0 [(1019 - 818)], TTCikWvSQoRz [201];
    int Z9YxAj0;
    int s9nOdWKhfys2;
    int j;
    int F1GnzbaiMWp;
    int la;
    int Z4s3BmQ9fGo8;
    cin >> Z9YxAj0;
    for (; (966 - 966) < Z9YxAj0; Z9YxAj0--) {
        memset (ho3l7m, (739 - 739), sizeof (ho3l7m));
        memset (XhQLa2sF0, 0, sizeof (XhQLa2sF0));
        F1GnzbaiMWp = (329 - 329);
        cin.ignore ();
        cin.getline (SsndWZhbOXz0, 201);
        cin.getline (TTCikWvSQoRz, 201);
        la = strlen (SsndWZhbOXz0);
        Z4s3BmQ9fGo8 = strlen (TTCikWvSQoRz);
        for (j = 0; j < Z4s3BmQ9fGo8; j++) {
            XhQLa2sF0[j] = TTCikWvSQoRz[j] - '0';
        }
        memset (kv1MBgYD, 0, sizeof (kv1MBgYD));
        for (s9nOdWKhfys2 = 0; la > s9nOdWKhfys2; s9nOdWKhfys2++) {
            ho3l7m[s9nOdWKhfys2] = SsndWZhbOXz0[s9nOdWKhfys2] - '0';
        }
        {
            j = Z4s3BmQ9fGo8 -1;
            s9nOdWKhfys2 = la - 1;
            while (0 <= s9nOdWKhfys2) {
                if (XhQLa2sF0[j] > ho3l7m[s9nOdWKhfys2]) {
                    XhQLa2sF0[j - 1]++;
                    kv1MBgYD[s9nOdWKhfys2] = (831 - 821) + ho3l7m[s9nOdWKhfys2] - XhQLa2sF0[j];
                }
                else
                    kv1MBgYD[s9nOdWKhfys2] = ho3l7m[s9nOdWKhfys2] - XhQLa2sF0[j];
                j--;
                s9nOdWKhfys2--;
            };
        }
        while (kv1MBgYD[F1GnzbaiMWp] == 0)
            F1GnzbaiMWp++;
        for (s9nOdWKhfys2 = F1GnzbaiMWp; s9nOdWKhfys2 < la; s9nOdWKhfys2++)
            cout << kv1MBgYD[s9nOdWKhfys2];
        cout << endl;
    }
    return 0;
}

