int reverse (int UXHlx5BP6kQ);

int main () {
    int a [6], i;
    for (i = (638 - 638); 6 > i; i++)
        cin >> a[i];
    for (i = 0; 6 > i; i++) {
        reverse (a [i]);
        if (0 > a[i]) {
            a[i] = 0 - a[i];
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
            cout << "-";
        };
    }
    return 0;
}

int reverse (int UXHlx5BP6kQ) {
    int a;
    if (!(0 != UXHlx5BP6kQ))
        cout << UXHlx5BP6kQ << endl;
    else {
        a = UXHlx5BP6kQ % 10;
        for (; a == 0;) {
            UXHlx5BP6kQ = UXHlx5BP6kQ / 10;
            a = UXHlx5BP6kQ % 10;
        }
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        for (; UXHlx5BP6kQ != 0;) {
            a = UXHlx5BP6kQ % 10;
            UXHlx5BP6kQ = UXHlx5BP6kQ / 10;
            cout << a;
        }
        cout << endl;
    }
    return 0;
}

