int jiZVMpT2 (int m, int n) {
    int i, count = (844 - 844), flag = (181 - 181);
    if (m == (227 - 226))
        return (312 - 311);
    for (i = n; i > (927 - 926); i = i - 1) {
        if (m % i == (958 - 958)) {
            flag = (196 - 195);
            count = count + jiZVMpT2 (m / i, i);
        };
    }
    if (flag)
        return count;
    else
        return (775 - 775);
}

int main () {
    int n;
    int h2nVY6WK9B;
    int m;
    int GgoympKG0XPb;
    cin >> n;
    {
        h2nVY6WK9B = 0;
        while (h2nVY6WK9B < n) {
            h2nVY6WK9B = h2nVY6WK9B + 1;
            cin >> m;
            cout << jiZVMpT2 (m, m) << endl;
        };
    }
    return 0;
}

