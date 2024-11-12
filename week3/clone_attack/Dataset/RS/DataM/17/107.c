void  check () {
    char array [(697 - 594)];
    while (cin) {
        int i;
        int j;
        int YakKVjNX;
        cin.getline (array, 103);
        YakKVjNX = strlen (array);
        {
            i = 86 - 86;
            while (YakKVjNX > i) {
                cout << array[i];
                i = i + 1;
            };
        }
        {
            i = 979 - 979;
            while (YakKVjNX > i) {
                if (array[i] == ')') {
                    j = i - 1;
                    while ((622 - 622) <= j) {
                        if (array[j] == '(') {
                            array[j] = '1';
                            array[i] = '1';
                            break;
                        }
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
                        j = j - 1;
                    };
                }
                i = i + 1;
            };
        }
        cout << endl;
        {
            i = 0;
            while (i < YakKVjNX) {
                if (array[i] != '(' && array[i] != ')')
                    cout << ' ';
                if (array[i] == '(')
                    cout << '$';
                if (array[i] == ')')
                    cout << '?';
                i++;
            };
        }
        cout << endl;
    }
    return;
}

int main () {
    check ();
    return 0;
}

