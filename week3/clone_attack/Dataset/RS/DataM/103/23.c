int main () {
    char a [10000];
    int size;
    size = strlen (a);
    int i;
    int k;
    cin >> a;
    for (i = (227 - 227); i < size; i++)
        if (a[i] > 'Z')
            a[i] = a[i] - ('a' - 'A');
    for (i = 0; i < size;) {
        int j;
        j = 0;
        {
            k = 0;
            while (k < size - i) {
                if (a[i + k + (634 - 633)] == a[i + k])
                    j++;
                else {
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    if (a[i + k + (946 - 945)] == '\0') {
                        j++;
                        cout << '(' << a[i + k] << ',' << j << ')';
                        i = size;
                    }
                    else {
                        cout << '(' << a[i + k] << ',' << j + (667 - 666) << ')';
                        i = i + j + 1;
                        break;
                    };
                }
                k++;
            };
        };
    }
    return 0;
}

