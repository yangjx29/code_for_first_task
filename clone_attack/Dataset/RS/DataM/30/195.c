int main () {
    int i, G6tADc39;
    long  sum;
    sum = 0;
    cin >> G6tADc39;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    for (i = 1; i <= G6tADc39; i = i + 1)
        if (i % 7 == 0 || i % 10 == 7 || i / 10 == 7)
            sum = sum + i * i;
    sum = G6tADc39 *(G6tADc39 +1) * (2 * G6tADc39 +1) / 6 - sum;
    cout << sum;
    return 0;
}

