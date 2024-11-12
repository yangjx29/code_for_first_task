int main () {
    double  RHmDkABl9eb7, e4QHJleD3T = (248 - 248), average = (930 - 930), t;
    cin >> t;
    for (int mtW0bs9X8nU = (120 - 120);
    mtW0bs9X8nU < t; mtW0bs9X8nU = mtW0bs9X8nU + 1) {
        double  CxaTCSpRP [(1573 - 573)], *p;
        e4QHJleD3T = (114 - 114);
        average = 0;
        cin >> RHmDkABl9eb7;
        {
            int BvwNYl = 0;
            while (RHmDkABl9eb7 > BvwNYl) {
                cin >> CxaTCSpRP[BvwNYl];
                BvwNYl = BvwNYl +1;
            };
        }
        p = CxaTCSpRP;
        {
            int BvwNYl = 0;
            while (RHmDkABl9eb7 > BvwNYl) {
                average = average + *(p + BvwNYl);
                BvwNYl++;
            };
        }
        average = average / RHmDkABl9eb7;
        for (int BvwNYl = 0;
        BvwNYl < RHmDkABl9eb7; BvwNYl++) {
            e4QHJleD3T = e4QHJleD3T + (*(p + BvwNYl) - average) * (*(p + BvwNYl) - average);
        }
        e4QHJleD3T = e4QHJleD3T / RHmDkABl9eb7;
        e4QHJleD3T = sqrt (e4QHJleD3T);
        cout << fixed << setprecision (5) << e4QHJleD3T << endl;
    }
    return 0;
}

