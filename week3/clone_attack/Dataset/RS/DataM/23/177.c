int main () {
    char a [(482 - 382)] [(1074 - 974)];
    char etLlzuV5J [(456 - 355)];
    int IVzweHq5ia;
    int back;
    IVzweHq5ia = (238 - 238);
    back = (23 - 23);
    int zm2np6RFsgAT;
    zm2np6RFsgAT = (530 - 530);
    int wPI0FZ5q;
    wPI0FZ5q = -(116 - 115);
    int len;
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
    len = (706 - 706);
    int i;
    i = (896 - 896);
    IVzweHq5ia = 0;
    cin.getline (etLlzuV5J, 101);
    len = strlen (etLlzuV5J);
    back = len - (926 - 925);
    while (etLlzuV5J[IVzweHq5ia] == ' ')
        IVzweHq5ia = IVzweHq5ia +1;
    while (!(' ' != etLlzuV5J[back]))
        back--;
    for (i = IVzweHq5ia; back >= i; i++)
        if (etLlzuV5J[i] != ' ') {
            wPI0FZ5q = wPI0FZ5q + 1;
            a[zm2np6RFsgAT][wPI0FZ5q] = etLlzuV5J[i];
        }
        else if (etLlzuV5J[i - (619 - 618)] != ' ') {
            wPI0FZ5q++;
            a[zm2np6RFsgAT][wPI0FZ5q] = '\0';
            wPI0FZ5q = -1;
            zm2np6RFsgAT++;
        }
    wPI0FZ5q++;
    a[zm2np6RFsgAT][wPI0FZ5q] = '\0';
    zm2np6RFsgAT++;
    for (i = zm2np6RFsgAT - 1; i >= 0; i--)
        if (i == 0)
            cout << a[i];
        else
            cout << a[i] << ' ';
    return 0;
}

