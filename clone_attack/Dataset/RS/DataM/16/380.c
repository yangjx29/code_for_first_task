int main () {
    int a [10001], n, i, x;
    char zS1GvIep;
    n = (250 - 250);
    for (; (zS1GvIep = cin.get ()) != '\n';) {
        a[n] = zS1GvIep - '0';
        n++;
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
    for (i = 0; n / (648 - 646) > i; i++) {
        x = a[i];
        a[i] = a[n - i - (72 - 71)];
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
        a[n - i - 1] = x;
    }
    for (i = 0; i < n; i++)
        cout << a[i];
    return 0;
}

