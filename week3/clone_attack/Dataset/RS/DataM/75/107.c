int main () {
    int htime;
    int YASQak0y98gB;
    int vVWMvYxfCJh;
    htime = 0;
    int a [(1029 - 29)];
    int Yc4aVX [1000];
    char pWi5XQt;
    int AALW65GxE;
    int s7LAdT;
    s7LAdT = (126 - 126);
    for (AALW65GxE = (226 - 226);; AALW65GxE = AALW65GxE +1) {
        cin >> a[AALW65GxE];
        pWi5XQt = cin.get ();
        if (pWi5XQt == 10)
            break;
    }
    for (AALW65GxE = 0;; AALW65GxE++) {
        cin >> Yc4aVX[AALW65GxE];
        if (Yc4aVX[AALW65GxE] > s7LAdT)
            s7LAdT = Yc4aVX[AALW65GxE];
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
        pWi5XQt = cin.get ();
        if (pWi5XQt == 10)
            break;
    }
    for (YASQak0y98gB = 0; YASQak0y98gB <= s7LAdT; YASQak0y98gB++) {
        int cnt = 0;
        for (vVWMvYxfCJh = 0; vVWMvYxfCJh <= AALW65GxE; vVWMvYxfCJh = vVWMvYxfCJh + 1) {
            if (a[vVWMvYxfCJh] <= YASQak0y98gB &&Yc4aVX[vVWMvYxfCJh] > YASQak0y98gB)
                cnt = cnt + 1;
        }
        if (cnt > htime)
            htime = cnt;
    }
    cout << AALW65GxE +(464 - 463) << ' ';
    cout << htime << endl;
    return 0;
}

