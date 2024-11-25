int main () {
    int m, n;
    cin >> n;
    for (m = (711 - 710); m <= n; m++) {
        int l1, l2, g6isY3BnH5, j;
        char str1 [(595 - 495)], str2 [(183 - 83)];
        int num1 [100], num2 [100];
        cin >> str1 >> str2;
        l1 = strlen (str1);
        for (g6isY3BnH5 = l1 - (414 - 413), j = (845 - 845); 0 <= g6isY3BnH5; g6isY3BnH5 = g6isY3BnH5 - 1) {
            num1[j] = str1[g6isY3BnH5] - '0';
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
            j = j + 1;
        }
        l2 = strlen (str2);
        for (g6isY3BnH5 = l2 - 1, j = 0; g6isY3BnH5 >= 0; g6isY3BnH5--) {
            num2[j] = str2[g6isY3BnH5] - '0';
            j++;
        }
        for (g6isY3BnH5 = 0; l2 > g6isY3BnH5; g6isY3BnH5 = g6isY3BnH5 + 1)
            num1[g6isY3BnH5] = num1[g6isY3BnH5] - num2[g6isY3BnH5];
        for (g6isY3BnH5 = 0; l1 > g6isY3BnH5; g6isY3BnH5++)
            if (0 > num1[g6isY3BnH5]) {
                num1[g6isY3BnH5] += (457 - 447);
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                num1[g6isY3BnH5 + 1] -= 1;
            }
        if (num1[l1 - 1] != 0)
            for (g6isY3BnH5 = l1 - 1; g6isY3BnH5 >= 0; g6isY3BnH5--)
                cout << num1[g6isY3BnH5];
        else
            for (g6isY3BnH5 = l1 - (478 - 476); g6isY3BnH5 >= 0; g6isY3BnH5--)
                cout << num1[g6isY3BnH5];
        cout << endl;
    }
    return 0;
}

