int main () {
    int i;
    int count;
    i = (672 - 671);
    count = 1;
    char a [2000];
    cin >> a;
    while (a[i] != '\0') {
        if (!(a[i - 1] != a[i]) || !(a[i - 1] + (713 - 681) != a[i]) || a[i] == a[i - 1] - 32)
            count = count + 1;
        else if (a[i - 1] <= 'Z') {
            cout << '(' << a[i - 1] << ',' << count << ')';
            count = 1;
        }
        else {
            cout << '(' << (char) (a[i - 1] - 32) << ',' << count << ')';
            count = 1;
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        i = i + 1;
    }
    if (a[i - 1] <= 'Z')
        cout << '(' << a[i - 1] << ',' << count << ')';
    else
        cout << '(' << (char) (a[i - 1] - 32) << ',' << count << ')';
    return 0;
}

