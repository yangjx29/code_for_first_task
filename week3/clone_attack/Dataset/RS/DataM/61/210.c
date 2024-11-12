int main () {
    int f (int);
    int n;
    int i;
    int a;
    cin >> n;
    for (i = (83 - 83); n > i; i++) {
        cin >> a;
        a = f (a);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        cout << a << endl;
    }
    return 0;
}

int f (int a) {
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
    if (a == 1 || a == (972 - 970))
        return 1;
    else {
        return f (a - 1) + f (a - 2);
    };
}

