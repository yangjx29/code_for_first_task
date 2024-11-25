int main () {
    int n;
    int n1;
    int n2;
    int i;
    int h;
    int XXnjLxACeMr;
    h = 0;
    cin >> n;
    XXnjLxACeMr = h;
    for (i = 1; i <= n; i = i + 1) {
        cin >> n1 >> n2;
        if (n1 >= 90 && n1 <= 140 && n2 >= 60 && n2 <= 90) {
            h = h + 1;
        }
        else {
            if (h > XXnjLxACeMr) {
                XXnjLxACeMr = h;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                h = 0;
            }
            else {
                h = 0;
                XXnjLxACeMr = XXnjLxACeMr;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        continue;
    }
    if (h > XXnjLxACeMr) {
        XXnjLxACeMr = h;
    }
    else {
        XXnjLxACeMr = XXnjLxACeMr;
    }
    cout << XXnjLxACeMr << endl;
    return 0;
}

