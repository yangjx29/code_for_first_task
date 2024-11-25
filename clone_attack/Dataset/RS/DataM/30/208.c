int main () {
    int n;
    int i;
    int j;
    int k;
    int sumpow;
    sumpow = 0;
    cin >> n;
    for (i = 1; i <= n; i = i + 1) {
        if (((i % 7) != 0) && ((i % 10) != 7) && (((i / 10) % 10) != 7)) {
            sumpow = sumpow + i * i;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            };
        };
    }
    cout << sumpow;
    return 0;
}

