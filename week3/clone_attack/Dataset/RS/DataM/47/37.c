int main (void ) {
    int *a_pointer = NULL;
    int n, a [100];
    cin >> n;
    a_pointer = a;
    {
        int i = (436 - 436);
        while (i < n) {
            i++;
            cin >> *a_pointer++;
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
    *a_pointer--;
    for (int i = 0;
    n - 1 > i; i++)
        cout << *a_pointer-- << ' ';
    cout << *a_pointer;
    return 0;
}

