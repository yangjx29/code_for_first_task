void  shuchu () {
    int a;
    char b;
    cin >> a;
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
    cin.get (b);
    if (b != '\n') {
        cout << b << a;
        shuchu ();
    }
    if (b == '\n')
        cout << a;
}

int main () {
    int m;
    shuchu ();
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
    cin >> m;
    return 0;
}

