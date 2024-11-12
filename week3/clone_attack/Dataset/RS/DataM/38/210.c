int main () {
    double  *q = NULL;
    int k;
    int i;
    int len [101];
    double  s [101], a [101], sum [101] = {0}, qsum [101] = {0}, p [1000];
    cin >> k;
    for (i = 0; k > i; i = i + 1) {
        q = p;
        cin >> len[i];
        for (; p + len[i] > q; q = q + 1) {
            cin >> *q;
            sum[i] += *q;
            qsum[i] = qsum[i] + (*q) * (*q);
        }
        a[i] = sum[i] / len[i];
        qsum[i] -= len[i] * a[i] * a[i];
        s[i] = sqrt (qsum[i] / len[i]);
        cout << fixed << setprecision (5) << s[i] << endl;
    }
    return 0;
}

