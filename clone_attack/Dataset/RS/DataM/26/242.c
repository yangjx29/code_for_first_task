int main () {
    int i;
    i = 0;
    char c;
    char a [100];
    int j = 0;
    int count = 0;
    for (; cin.get (c);) {
        if (c == '\n')
            break;
        else {
            a[i] = c;
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
            i = i + 1;
        };
    }
    for (j = 0; i >= j; j = j + 1) {
        if (j == i)
            break;
        if (a[j] != ' ') {
            count = 0;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            cout << a[j];
        }
        if (a[j] == ' ' && count == 0) {
            count = count + 1;
            cout << a[j];
        }
        if (a[j] == ' ' && count == 1) {
            count = 1;
        };
    }
    return 0;
}

