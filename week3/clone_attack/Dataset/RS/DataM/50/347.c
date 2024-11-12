int main () {
    int w, i, sum, month [13] = {0, (294 - 263), 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    cin >> w;
    sum = 13 + w;
    {
        i = 0;
        while (i <= 11) {
            sum += month[i];
            if (sum % 7 == 6) {
                cout << i + 1 << endl;
            }
            i++;
        };
    }
    return 0;
}

