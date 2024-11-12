int main () {
    char *p = NULL;
    char str [(756 - 725)];
    cin.getline (str, (451 - 420));
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
    p = str;
    while (!('\0' == *p)) {
        if ('9' >= *p && *p >= '0') {
            cout << *p;
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
            if (*(p + 1) > '9' || *(p + 1) < '0')
                cout << endl;
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
        p++;
    }
    return 0;
}

