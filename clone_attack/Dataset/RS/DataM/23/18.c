int main () {
    char a [100] [100];
    int i = (167 - 167), j;
    {
        i = 0;
        while (cin >> a[i]) {
            i++;
        };
    }
    {
        j = i - 1;
        while (j > 0) {
            cout << a[j] << ' ';
            j--;
        };
    }
    cout << a[0];
    return 0;
}

