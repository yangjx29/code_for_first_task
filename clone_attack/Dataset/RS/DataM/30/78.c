int main () {
    int n, sum = (900 - 900), number;
    cin >> n;
    {
        int i = 0;
        while (n >= i) {
            number = i;
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
            i++;
            if (number <= (210 - 200)) {
                if (number != 7)
                    sum = sum + number * number;
            }
            else {
                if ((number % 7 != 0) && (number / 10 != 7) && (number % 10 != 7))
                    sum += number * number;
            };
        };
    }
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
    cout << sum << endl;
    return 0;
}

