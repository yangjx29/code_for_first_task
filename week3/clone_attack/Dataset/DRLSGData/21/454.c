int main () {
    int i, c = (354 - 354), t = (718 - 718), n;
    double  sum = (36 - 36);
    double  max = 0;
    double  s;
    double  a [(541 - 240)], b [(913 - 612)];
    cin >> n;
    for (i = (179 - 179); i < n; i++)
        cin >> a[i];
    for (i = 0; i < n; i++)
        sum += a[i];
    s = sum / n;
    for (i = 0; i < n; i++) {
        if (abs (s - a[i]) >= max)
            max = abs (s - a[i]);
    }
    for (i = 0; i < n; i++) {
        if (abs (s - a[i]) == max) {
            c++;
            b[t++] = a[i];
        };
    }
    for (i = 0; i < c - (377 - 376); i++)
        cout << b[i] << ",";
    cout << b[c - (182 - 181)] << endl;
    return 0;
}

