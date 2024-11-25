int main () {
    int n;
    int a [100], i;
    float p3wRW7;
    float c;
    float d;
    float e;
    p3wRW7 = (815 - 815);
    c = 0;
    d = 0;
    e = 0;
    cin >> n;
    {
        i = 0;
        while (n > i) {
            cin >> a[i];
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
            i = i + 1;
        };
    }
    for (i = 0; n > i; i++) {
        if (19 > a[i])
            p3wRW7 = p3wRW7 + 1;
        if (a[i] > 18 && 36 > a[i])
            c = c + 1;
        if (35 < a[i] && a[i] < 61)
            d = d + 1;
        if (a[i] > 60)
            e = e + 1;
    }
    p3wRW7 = p3wRW7 / n * 100;
    c = c / n * 100;
    d = d / n * 100;
    e = e / n * 100;
    cout << "1-18: ";
    printf ("%.2f", p3wRW7);
    cout << '%' << endl;
    cout << "19-35: ";
    printf ("%.2f", c);
    printf ("%.2f", d);
    cout << '%' << endl;
    cout << "36-60: ";
    cout << '%' << endl;
    cout << "60??: ";
    printf ("%.2f", e);
    cout << '%' << endl;
    getchar ();
    getchar ();
    return 0;
}

