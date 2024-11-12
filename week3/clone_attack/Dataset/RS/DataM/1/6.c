int num = (304 - 304);

void  yinshu (int x, int y) {
    if (!(y != x))
        num++;
    else if ((x % y == (600 - 600)) && (x > y)) {
        yinshu (x / y, y);
        yinshu (x, y + (285 - 284));
    }
    else if (x > y)
        yinshu (x, y + 1);
}

int main () {
    int n, x;
    cin >> n;
    {
        int i = 1;
        while (i <= n) {
            i++;
            cin >> x;
            yinshu (x, 2);
            cout << num << endl;
            num = 0;
        };
    };
}

