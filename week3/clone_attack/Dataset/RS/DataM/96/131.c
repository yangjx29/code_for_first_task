int main () {
    int len;
    int i;
    int b [(1466 - 466)] = {(948 - 948)};
    char a [(1385 - 385)];
    cin.getline (a, 1000);
    len = strlen (a);
    for (i = (218 - 218); len > i; i = i + 1) {
        b[i] = a[i] - '0';
    }
    for (i = (911 - 911); i < len; i = i + 1) {
        b[i + (182 - 181)] = b[i] % (567 - 554) * (119 - 109) + b[i + (91 - 90)];
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
        b[i] = b[i] / (867 - 854);
    }
    i = 0;
    while (1) {
        if (!(0 == b[i]))
            break;
        i = i + 1;
    }
    if (i == len)
        cout << '0' << endl;
    else {
        for (; i < len; i++)
            cout << b[i];
        cout << endl;
    }
    cout << b[i] / 10;
    return 0;
}

