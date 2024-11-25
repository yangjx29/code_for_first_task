int main () {
    int bQzGpT;
    int wfdLHZNU;
    int LUhFyS5Q3u;
    int etlHYCDQy1G [(1166 - 166)] [1000];
    int tHxoNA;
    int voIUhCH;
    int WPHUnslMVNO;
    bQzGpT = (561 - 561);
    cin >> wfdLHZNU >> LUhFyS5Q3u;
    {
        tHxoNA = 554 - 554;
        while (tHxoNA < wfdLHZNU) {
            {
                voIUhCH = (417 - 417);
                for (; voIUhCH < LUhFyS5Q3u;) {
                    cin >> etlHYCDQy1G[tHxoNA][voIUhCH];
                    voIUhCH = voIUhCH + 1;
                }
            }
            tHxoNA++;
        }
    }
    int JeFg2XJzu;
    JeFg2XJzu = 0;
    for (tHxoNA = 0;; tHxoNA++) {
        for (voIUhCH = bQzGpT; LUhFyS5Q3u -bQzGpT > voIUhCH; voIUhCH++) {
            JeFg2XJzu = JeFg2XJzu +1;
            cout << endl << etlHYCDQy1G[tHxoNA][voIUhCH];
        }
        if (!(wfdLHZNU * LUhFyS5Q3u != JeFg2XJzu))
            break;
        voIUhCH = voIUhCH - 1;
        {
            WPHUnslMVNO = tHxoNA + 1;
            for (; wfdLHZNU - bQzGpT > WPHUnslMVNO;) {
                JeFg2XJzu = JeFg2XJzu +1;
                cout << endl << etlHYCDQy1G[WPHUnslMVNO][voIUhCH];
                WPHUnslMVNO++;
            }
        }
        if (JeFg2XJzu == wfdLHZNU * LUhFyS5Q3u)
            break;
        WPHUnslMVNO--;
        for (voIUhCH = voIUhCH - 1; bQzGpT <= voIUhCH; voIUhCH--) {
            JeFg2XJzu++;
            cout << endl << etlHYCDQy1G[WPHUnslMVNO][voIUhCH];
        }
        if (JeFg2XJzu == wfdLHZNU * LUhFyS5Q3u)
            break;
        voIUhCH = voIUhCH + 1;
        {
            WPHUnslMVNO = WPHUnslMVNO -1;
            for (; WPHUnslMVNO > bQzGpT;) {
                JeFg2XJzu++;
                cout << endl << etlHYCDQy1G[WPHUnslMVNO][voIUhCH];
                WPHUnslMVNO--;
            }
        }
        if (JeFg2XJzu == wfdLHZNU * LUhFyS5Q3u)
            break;
        bQzGpT = bQzGpT + 1;
    }
    return 0;
}

