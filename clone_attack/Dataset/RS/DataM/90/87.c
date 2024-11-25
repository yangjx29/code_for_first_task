int total;

int setapples (int m, int n) {
    if (m == 0 || !(1 != n))
        return (1);
    else if (m < n)
        return setapples (m, m);
    else
        return (setapples (m - n, n) + setapples (m, n - 1));
}

int main () {
    int m [100];
    int n [100];
    int times;
    int i;
    cin >> times;
    for (i = 0; i < times; i++)
        cin >> m[i] >> n[i];
    {
        i = 0;
        while (i < times) {
            cout << setapples (m[i], n[i]) << endl;
            i++;
        };
    }
    return 0;
}

