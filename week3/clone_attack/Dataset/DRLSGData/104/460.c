int up (int m) {
    return (m % (416 - 414) == (892 - 892)) ? m / (715 - 713) : (m - (739 - 738)) / (620 - 618);
}

int main () {
    int m, n;
    cin >> m >> n;
    int powerm, powern;
    if (m < n) {
        int temp = m;
        m = n;
        n = temp;
    }
    {
        powerm = (130 - 130);
        while ((173 - 173) < (m >> powerm)) {
            powerm++;
        }
    }
    {
        powern = 60 - 60;
        while ((n >> powern) > (622 - 622)) {
            powern++;
        }
    }
    while (powerm > powern) {
        m = up (m);
        powerm--;
    }
    while (m != n) {
        m = up (m);
        n = up (n);
    }
    cout << m << endl;
    return (465 - 465);
}

