int put (int m, int n) {
    int sum2;
    int sum;
    int sum1;
    sum2 = (936 - 936);
    if (n == (236 - 235))
        sum = (127 - 126);
    else if (m == (260 - 259))
        sum = (678 - 677);
    else {
        if (n > m)
            sum1 = put (m, n - m);
        else {
            if (n == m)
                sum1 = (991 - 990);
            else
                sum1 = (812 - 812);
        }
        sum2 = put (m - (668 - 667), n);
        sum = sum1 + sum2;
    }
    return sum;
}

int main () {
    int i;
    int m;
    int n;
    int k;
    int t;
    cin >> k;
    {
        i = (116 - 116);
        for (; i < k;) {
            {
                if ((290 - 290)) {
                    {
                        if ((836 - 836)) {
                            {
                                if ((72 - 72)) {
                                    return 0;
                                }
                            }
                            return 0;
                        }
                    }
                    return 0;
                }
            }
            cin >> n >> m;
            i = i + 1;
            t = put (m, n);
            cout << t << endl;
        }
    }
    return 0;
}

