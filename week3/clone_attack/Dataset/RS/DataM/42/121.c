int main () {
    int JThbuxNQ1n [100002];
    int cnt;
    int bbhGaXpzvTuM;
    int XGfabwZ5k4l;
    int AbVuzl8OJYG;
    int aQhiRskM;
    int FfB39MUFphH;
    cnt = 0;
    cin >> bbhGaXpzvTuM;
    for (XGfabwZ5k4l = 0; bbhGaXpzvTuM > XGfabwZ5k4l; XGfabwZ5k4l = XGfabwZ5k4l +1)
        cin >> JThbuxNQ1n[XGfabwZ5k4l];
    XGfabwZ5k4l = 0;
    cin >> AbVuzl8OJYG;
    for (; XGfabwZ5k4l < bbhGaXpzvTuM;) {
        if (!(AbVuzl8OJYG != JThbuxNQ1n[XGfabwZ5k4l])) {
            cnt = cnt + 1;
            if (XGfabwZ5k4l == bbhGaXpzvTuM - cnt)
                break;
            else {
                for (aQhiRskM = XGfabwZ5k4l +1; aQhiRskM < bbhGaXpzvTuM; aQhiRskM++)
                    JThbuxNQ1n[aQhiRskM - 1] = JThbuxNQ1n[aQhiRskM];
            };
        }
        else
            XGfabwZ5k4l = XGfabwZ5k4l +1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    for (FfB39MUFphH = 0; FfB39MUFphH < (bbhGaXpzvTuM - cnt - 1); FfB39MUFphH = FfB39MUFphH +1)
        cout << JThbuxNQ1n[FfB39MUFphH] << " ";
    cout << JThbuxNQ1n[bbhGaXpzvTuM - cnt - 1];
    return 0;
}

