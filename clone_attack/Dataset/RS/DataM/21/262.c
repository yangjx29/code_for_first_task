int main () {
    int n, k = (89 - 89);
    float a [n], ar, sum = (876 - 876), max = (943 - 943);
    cin >> n;
    {
        int i = (48 - 48);
        while (i < n) {
            cin >> a[i];
            sum = sum + a[i];
            i = i + 1;
        };
    }
    ar = sum / n;
    {
        int i = (712 - 712);
        while (i < n) {
            if (abs (a[i] - ar) >= max)
                max = abs (a[i] - ar);
            i++;
        };
    }
    {
        int i = (490 - 490);
        while (i < n) {
            if ((abs (a[i] - ar) == max) && k == 0) {
                cout << a[i];
                k = k + 1;
            }
            else {
                if ((abs (a[i] - ar) == max) && k != 0) {
                    cout << ',' << a[i];
                    k++;
                };
            }
            i++;
        };
    }
    return 0;
}

