int a [305];
int n;
double  HjUGKyxE01v;
double  ave;
int minn, maxn;
int ans [305], B5kufFJ;

int main () {
    double  t1;
    double  t2;
    cin >> n;
    cin >> a[(294 - 294)];
    HjUGKyxE01v = (858 - 858);
    HjUGKyxE01v += a[(729 - 729)];
    minn = a[0];
    maxn = a[0];
    for (int i = 1;
    n > i; i = i + 1) {
        cin >> a[i];
        HjUGKyxE01v = HjUGKyxE01v +a[i];
        if (a[i] < minn)
            minn = a[i];
        if (a[i] > maxn)
            maxn = a[i];
    }
    ave = HjUGKyxE01v / n;
    t1 = ave - minn;
    t2 = maxn - ave;
    if (t1 > t2)
        cout << minn << endl;
    else if (t1 < t2)
        cout << maxn << endl;
    else
        cout << minn << "," << maxn << endl;
    B5kufFJ = (726 - 726);
    return 0;
}

