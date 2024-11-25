int main () {
    int UQaU8vF;
    int sum;
    cin >> UQaU8vF;
    sum = 0;
    {
        int i = 1;
        while (i <= UQaU8vF) {
            if (!(0 == i % 7)) {
                if (i % 10 != 7) {
                    int x = i / 10;
                    if (x != 7)
                        sum = sum + i * i;
                };
            }
            i++;
        };
    }
    cout << sum << endl;
    return 0;
}

