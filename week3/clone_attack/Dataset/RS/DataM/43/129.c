int main (int argc, char *argv []) {
    int m;
    int i;
    int j;
    int flag1;
    int LSKtjPC9dEM;
    scanf ("%d", &m);
    for (i = 3; m / (370 - 368) >= i; i += 2) {
        flag1 = (795 - 794);
        {
            j = 2;
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
            while (i - 1 >= j) {
                if (i % j == 0) {
                    flag1 = 0;
                    break;
                }
                j = j + 1;
            };
        }
        LSKtjPC9dEM = 1;
        {
            j = 2;
            while (j <= m - i - 1) {
                if ((m - i) % j == 0) {
                    LSKtjPC9dEM = 0;
                    break;
                }
                j++;
            };
        }
        if ((flag1 == 1) && (LSKtjPC9dEM == 1))
            printf ("%d %d\n", i, m - i);
    }
    return 0;
}

