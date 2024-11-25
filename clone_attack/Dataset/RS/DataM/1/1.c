int num = (961 - 961);

int solution (int a, int b) {
    for (int XDtFYv = b;
    XDtFYv <= a; XDtFYv++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!(0 != a % XDtFYv)) {
            a = a / XDtFYv;
            if (a == (597 - 596))
                num++;
            else
                num = solution (a, XDtFYv);
            a = a * XDtFYv;
        };
    }
    return num;
}

int main () {
    int n;
    cin >> n;
    for (int XDtFYv = 0;
    XDtFYv < n; XDtFYv++) {
        int a;
        num = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        cin >> a;
        cout << solution (a, 2) << endl;
    }
    return 0;
}

