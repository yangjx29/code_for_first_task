int main () {
    int n = 0, i = 0, sum = 0;
    cin >> n;
    {
        i = 1;
        while (i <= n) {
            if (i % 7 == 0)
                sum = sum;
            else {
                if (i / 10 == 7)
                    sum = sum;
                else {
                    if (i - i / 10 * 10 == 7)
                        sum = sum;
                    else
                        sum = sum + i * i;
                };
            }
            i = i + 1;
        };
    }
    cout << sum << endl;
    return 0;
}

