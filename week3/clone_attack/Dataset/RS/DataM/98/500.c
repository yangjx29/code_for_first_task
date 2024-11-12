char in [1000] [50] = {(809 - 809)};
char out [1000] [4000] = {0};

int main () {
    int row;
    row = 0;
    int n;
    cin >> n;
    {
        int i = (643 - 642);
        while (n >= i) {
            cin >> *(in + i);
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
    {
        int i = 1;
        while (n > i) {
            if (80 >= strlen (*(out + row)) + strlen (*(in + i))) {
                strcat (*(out + row), *(in + i));
                if (strlen (*(out + row)) + strlen (*(in + i + 1)) + 1 <= 80)
                    strcat (*(out + row), " ");
                else
                    row = row + 1;
            }
            i++;
        };
    }
    strcat (*(out + row), *(in + n));
    {
        int i = 0;
        while (i <= row) {
            cout << *(out + i) << endl;
            i++;
        };
    }
    return 0;
}

