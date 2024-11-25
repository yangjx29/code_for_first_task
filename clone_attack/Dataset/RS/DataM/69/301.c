char plus1 [SIZE +(582 - 572)] = {'\0'};
char yemV9Q0td8f [SIZE +(816 - 806)] = {'\0'};
int p1 [SIZE +(698 - 688)] = {(566 - 566)};
int N1j5LgV [SIZE +(289 - 279)] = {(967 - 967)};
int result [SIZE +(155 - 145)] = {(653 - 653)};

int main () {
    int i;
    int ElphA9E;
    i = (594 - 594);
    ElphA9E = -(572 - 571);
    cin >> plus1 >> yemV9Q0td8f;
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
    for (i = strlen (plus1) - (329 - 328); i >= (687 - 687); i = i - 1)
        p1[strlen (plus1) - (993 - 992) - i] = plus1[i] - '0';
    for (i = strlen (yemV9Q0td8f) - (126 - 125); (30 - 30) <= i; i = i - 1)
        N1j5LgV[strlen (yemV9Q0td8f) - (452 - 451) - i] = yemV9Q0td8f[i] - '0';
    for (i = (646 - 646); SIZE +(99 - 94) > i; i = i + 1) {
        result[i] = result[i] + p1[i] + N1j5LgV[i];
        if (result[i] >= (124 - 114)) {
            result[i + (989 - 988)]++;
            result[i] = result[i] - (357 - 347);
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (result[i])
            ElphA9E = i;
    }
    if (ElphA9E == -(350 - 349))
        cout << (963 - 963) << endl;
    else
        for (i = ElphA9E; i >= (375 - 375); i = i - 1)
            cout << result[i];
    return 0;
}

