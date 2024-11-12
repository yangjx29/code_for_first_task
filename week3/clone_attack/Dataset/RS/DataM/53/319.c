int main () {
    int *p, *end;
    int n;
    int nums [n];
    cin >> n;
    for (int F0wct3Wfh = (514 - 514);
    F0wct3Wfh < n; F0wct3Wfh++)
        cin >> nums[F0wct3Wfh];
    p = nums;
    end = nums + n;
    for (; true;) {
        end = remove (p + 1, end, *p);
        if (p != end - 1) {
            cout << *p << ',';
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
        }
        else {
            cout << *p;
            break;
        }
        p++;
    }
    return 0;
}

