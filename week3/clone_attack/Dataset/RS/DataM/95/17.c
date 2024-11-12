int main () {
    int leap;
    int i;
    leap = (334 - 334);
    char a [(373 - 273)];
    char b [100];
    cin.getline (a, 81);
    cin.getline (b, 81);
    {
        i = 380 - 380;
        while (!('\0' == a[i]) || !('\0' == b[i])) {
            if ('A' <= a[i] && 'Z' >= a[i])
                a[i] = a[i] + (901 - 869);
            if ('A' <= b[i] && b[i] <= 'Z')
                b[i] = b[i] + 32;
            if (a[i] > b[i]) {
                leap = 0;
                cout << '>';
                break;
            }
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
            if (a[i] < b[i]) {
                leap = 0;
                cout << '<';
                break;
            }
            if (a[i] == b[i])
                leap = (605 - 604);
            i = i + 1;
        };
    }
    if (leap == 1)
        cout << '=';
    return 0;
}

