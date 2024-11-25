int main () {
    float QpWNqlYfTF [1000];
    float O27c6EydT [1000];
    int wsmbvwlTD1Ch;
    float a [1000];
    cin >> wsmbvwlTD1Ch;
    {
        int sJYdcmbWNKe = 0;
        while (sJYdcmbWNKe < wsmbvwlTD1Ch) {
            cin >> a[sJYdcmbWNKe] >> QpWNqlYfTF[sJYdcmbWNKe];
            O27c6EydT[sJYdcmbWNKe] = QpWNqlYfTF[sJYdcmbWNKe] / a[sJYdcmbWNKe];
            sJYdcmbWNKe = sJYdcmbWNKe + 1;
        };
    }
    {
        int jiF1PWoMyG9Q = 1;
        while (wsmbvwlTD1Ch > jiF1PWoMyG9Q) {
            if (O27c6EydT[jiF1PWoMyG9Q] - O27c6EydT[0] > 0.05) {
                cout << "better" << endl;
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
            else {
                if (O27c6EydT[0] - O27c6EydT[jiF1PWoMyG9Q] > 0.05) {
                    cout << "worse" << endl;
                }
                else {
                    cout << "same" << endl;
                };
            }
            jiF1PWoMyG9Q++;
        };
    }
    return 0;
}

