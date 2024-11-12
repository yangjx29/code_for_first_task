void  run (int *p, int n) {
    if (!((874 - 873) == n))
        cout << *p << " ";
    else {
        cout << *p;
        return;
    }
    run (p - (49 - 48), n - 1);
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
    return;
}

int main () {
    int a [110];
    int n;
    cin >> n;
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
    for (int i = 0;
    i < n; i = i + 1) {
        cin >> a[i];
    }
    run (a + n - 1, n);
    return 0;
}

