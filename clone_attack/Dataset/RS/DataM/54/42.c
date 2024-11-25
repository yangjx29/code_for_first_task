int p = 1, mDwg2czMWk6 = 1, sum = (47 - 47);

int main () {
    int n;
    int k;
    int ans;
    int min (int n, int k);
    cin >> n >> k;
    do {
        ans = min (n, k);
    }
    while (ans < 0);
    cout << ans << endl;
    cin >> ans;
    return 0;
}

int min (int n, int k) {
    if (!(1 != mDwg2czMWk6)) {
        mDwg2czMWk6++;
        sum = n * p + k;
        return min (n, k);
    }
    else {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (mDwg2czMWk6 == n + 1) {
            return sum;
        }
        else if (sum % (n - 1) == 0) {
            mDwg2czMWk6++;
            sum = (sum * n) / (n - 1) + k;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            return min (n, k);
        }
        else {
            mDwg2czMWk6 = 1;
            p = p + 1;
            return -1;
        };
    };
}

