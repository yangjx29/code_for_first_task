int main () {
    int w;
    int a [13] = {0};
    int b [13];
    int i;
    {
        i = 1;
        while (12 >= i) {
            if (!(2 != i))
                a[i] = 0;
            else {
                if (i == 4 || !(6 != i) || i == 9 || i == 11)
                    a[i] = 2;
                else
                    a[i] = 3;
            }
            i++;
        };
    }
    cin >> w;
    b[0] = w + 12;
    for (i = 1; i <= 12; i++) {
        b[i] = b[i - 1] + a[i - 1];
        if (b[i] % 7 == 5)
            cout << i << endl;
    }
    return 0;
}

