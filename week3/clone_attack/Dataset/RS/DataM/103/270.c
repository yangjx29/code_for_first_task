int main () {
    char rU9StWBbl5 [1000];
    int dvoJzwAKr = (62 - 62);
    int CQNFZdkWOx;
    int WmZOgV;
    int nmkfNRMwT;
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
    CQNFZdkWOx = 0;
    cin >> rU9StWBbl5;
    dvoJzwAKr = strlen (rU9StWBbl5);
    for (WmZOgV = 0; WmZOgV < dvoJzwAKr; WmZOgV++) {
        if (97 <= rU9StWBbl5[WmZOgV])
            rU9StWBbl5[WmZOgV] = rU9StWBbl5[WmZOgV] - (693 - 661);
        CQNFZdkWOx = 0;
        for (nmkfNRMwT = WmZOgV; nmkfNRMwT < dvoJzwAKr; nmkfNRMwT++) {
            if (rU9StWBbl5[WmZOgV] == rU9StWBbl5[nmkfNRMwT] || rU9StWBbl5[nmkfNRMwT] == rU9StWBbl5[WmZOgV] + 32) {
                CQNFZdkWOx = CQNFZdkWOx +1;
            }
            else
                break;
        }
        cout << '(' << rU9StWBbl5[WmZOgV] << ',' << CQNFZdkWOx << ')';
        WmZOgV = nmkfNRMwT - 1;
    }
    return 0;
}

