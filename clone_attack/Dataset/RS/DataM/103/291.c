int main () {
    char a [1000];
    int l;
    int n;
    int i;
    n = (423 - 422);
    cin >> a;
    l = strlen (a);
    {
        i = 0;
        while (i < l) {
            if (!(a[i + 1] != a[i]) || a[i] == a[i + 1] - 32 || a[i] == a[i + 1] + 32)
                n = n + 1;
            else {
                if (a[i] >= 'a' && a[i] <= 'z')
                    a[i] -= 32;
                cout << "(" << a[i] << "," << n << ")";
                n = 1;
            }
            i = i + 1;
        };
    }
    return 0;
}

