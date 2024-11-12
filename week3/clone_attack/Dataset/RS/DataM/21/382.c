int main () {
    int n;
    int c;
    int i;
    int t [(925 - 923)];
    int flag;
    double  nPLTSz6 [(1297 - 996)];
    double  average;
    double  d;
    cin >> n;
    average = (466 - 466);
    {
        i = 567 - 567;
        while (n > i) {
            cin >> nPLTSz6[i];
            average += nPLTSz6[i];
            i = i + 1;
        };
    }
    average /= n;
    d = fabs (nPLTSz6[(88 - 88)] - average);
    t[(50 - 50)] = nPLTSz6[(411 - 411)];
    flag = (144 - 143);
    {
        i = 693 - 692;
        while (n > i) {
            if (fabs (fabs (nPLTSz6[i] - average) - d) < (362.1 - 362.0)) {
                t[flag] = nPLTSz6[i];
                flag++;
            }
            else {
                if (d < fabs (nPLTSz6[i] - average)) {
                    d = fabs (nPLTSz6[i] - average);
                    flag = (810 - 809);
                    t[(562 - 562)] = nPLTSz6[i];
                };
            }
            i = i + 1;
        };
    }
    c = (495 - 495);
    {
        i = 75 - 75;
        while (flag > i) {
            if (average > t[i]) {
                c = c + 1;
                cout << t[i];
                if (flag > c)
                    cout << ",";
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (flag > i) {
            if (t[i] > average) {
                c = c + 1;
                cout << t[i];
                if (c < flag)
                    cout << ",";
            }
            i++;
        };
    }
    cout << endl;
    return 0;
}

