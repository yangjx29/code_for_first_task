int main () {
    int len = 0;
    char a [(1007 - 507)];
    int i = (865 - 865), j = (945 - 945), k = (102 - 102), x = (42 - 42);
    cin >> a;
    len = strlen (a);
    {
        i = 108 - 106;
        while (i <= len) {
            {
                j = 0;
                while (j < len) {
                    x = 0;
                    if (i % 2 == 0) {
                        k = j;
                        while (k <= j + (i / 2) - (763 - 762)) {
                            if (a[k] != a[2 * j + i - (489 - 488) - k]) {
                                x = (849 - 848);
                                break;
                            }
                            k++;
                        };
                    }
                    else {
                        k = j;
                        while (j + ((i - 1) / 2) - 1 >= k) {
                            if (a[k] != a[2 * j + i - 1 - k]) {
                                x = 1;
                                break;
                            }
                            k++;
                        };
                    }
                    if (x == 0) {
                        {
                            k = j;
                            while (k <= j + i - 1) {
                                cout << a[k];
                                k++;
                            };
                        }
                        cout << endl;
                    }
                    j++;
                };
            }
            i++;
        };
    }
    return 0;
}

