int main () {
    char isbaXAq;
    int sum;
    int UYfwKMz;
    int oxpsoGv;
    int JwuNlsaUH6;
    int ZbqGpd7a;
    int vZf3n0PbAk [(1347 - 345)];
    int vbXvitoh6 [(1661 - 659)];
    int XBzW51 [1002];
    sum = (376 - 376);
    UYfwKMz = (52 - 52);
    for (oxpsoGv = (824 - 823);; oxpsoGv = oxpsoGv + 1) {
        sum++;
        cin >> vZf3n0PbAk[oxpsoGv];
        isbaXAq = cin.get ();
        if (!(',' == isbaXAq))
            break;
    }
    {
        oxpsoGv = 603 - 602;
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
        while (sum >= oxpsoGv) {
            cin >> vbXvitoh6[oxpsoGv];
            oxpsoGv++;
            cin.get ();
        };
    }
    for (oxpsoGv = 1; oxpsoGv <= sum; oxpsoGv++) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        for (JwuNlsaUH6 = vZf3n0PbAk[oxpsoGv]; JwuNlsaUH6 < vbXvitoh6[oxpsoGv]; JwuNlsaUH6++) {
            XBzW51[JwuNlsaUH6]++;
        };
    }
    for (JwuNlsaUH6 = 1; JwuNlsaUH6 <= 1002; JwuNlsaUH6++) {
        if (UYfwKMz < XBzW51[JwuNlsaUH6])
            UYfwKMz = XBzW51[JwuNlsaUH6];
    }
    cout << sum << " " << UYfwKMz << endl;
    return 0;
}

