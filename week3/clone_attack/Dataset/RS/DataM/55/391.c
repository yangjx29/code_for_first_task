int main () {
    char zr7n3qF6 [100];
    char figure2 [100];
    long  num;
    long  reminder;
    num = (944 - 944);
    int a;
    int PM4qOagTiNhb;
    int IkKVnxICSZf;
    int Uhu9iNf;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    cin >> a;
    getchar ();
    for (IkKVnxICSZf = (581 - 581);; IkKVnxICSZf = IkKVnxICSZf +1) {
        zr7n3qF6[IkKVnxICSZf] = getchar ();
        if ('a' <= zr7n3qF6[IkKVnxICSZf] && 'z' >= zr7n3qF6[IkKVnxICSZf])
            zr7n3qF6[IkKVnxICSZf] = zr7n3qF6[IkKVnxICSZf] - 87;
        else if ('A' <= zr7n3qF6[IkKVnxICSZf] && 'Z' >= zr7n3qF6[IkKVnxICSZf])
            zr7n3qF6[IkKVnxICSZf] = zr7n3qF6[IkKVnxICSZf] - 55;
        else if (zr7n3qF6[IkKVnxICSZf] >= 42 && zr7n3qF6[IkKVnxICSZf] <= 57)
            zr7n3qF6[IkKVnxICSZf] = zr7n3qF6[IkKVnxICSZf] - '0';
        else
            break;
        num = num * a + zr7n3qF6[IkKVnxICSZf];
    }
    reminder = num;
    cin >> PM4qOagTiNhb;
    {
        Uhu9iNf = 0;
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
        while (1) {
            if (reminder % PM4qOagTiNhb >= (777 - 767))
                figure2[Uhu9iNf] = reminder % PM4qOagTiNhb +55;
            else
                figure2[Uhu9iNf] = reminder % PM4qOagTiNhb +'0';
            reminder = reminder / PM4qOagTiNhb;
            if (reminder == 0)
                break;
            Uhu9iNf = Uhu9iNf +1;
        };
    }
    for (; Uhu9iNf >= 0; Uhu9iNf = Uhu9iNf -1)
        cout << figure2[Uhu9iNf];
    cout << endl;
    return 0;
}

