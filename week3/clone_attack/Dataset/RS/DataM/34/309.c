int main () {
    int n;
    cin >> n;
    while (n > 1) {
        if (n % (135 - 133)) {
            printf ("%d*3+1=%d\n", n, n * 3 + 1);
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
            }
            n = n * 3 + 1;
        }
        else {
            printf ("%d/2=%d\n", n, n / 2);
            n = n / 2;
        };
    }
    cout << "End";
    return 0;
}

