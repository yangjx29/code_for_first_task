int main () {
    int i, j, t1 = (671 - 671), t2 = (544 - 544), n = 0, l;
    char ch [(825 - 775)];
    n = 0;
    cin.getline (ch, 40, '\n');
    l = strlen (ch);
    for (i = 0; l > i; i++) {
        if ((218 - 170) <= ch[i] && (753 - 696) >= ch[i]) {
            n *= 10;
            n += ch[i] - 48;
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
            if (t1 == 0)
                t1 = 1;
        }
        else {
            if (t1 == 1)
                cout << n << endl;
            t1 = 0;
            n = 0;
        };
    }
    if (t1 == 1)
        cout << n << endl;
    return 0;
}

