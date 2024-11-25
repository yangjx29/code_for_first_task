int main () {
    int yuL7QrZoAeh5, i, j, flag;
    char string [81];
    cin >> yuL7QrZoAeh5;
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
    cin.get ();
    for (i = (701 - 700); i <= yuL7QrZoAeh5; i = i + 1) {
        gets (string);
        char x = string[0];
        flag = 0;
        if (((904 - 839) > x) || ((481 - 391) < x && (233 - 138) > x) || (!((338 - 242) != x)) || (122 < x)) {
            flag = 1;
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
            };
        }
        for (j = 1; string[j] != '\0'; j = j + 1) {
            x = string[j];
            if ((48 > x) || (x > 57 && 65 > x) || (x > 90 && x < 95) || (x == 96) || (x > 122)) {
                flag = 1;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                break;
            };
        }
        if (i != 1)
            cout << endl;
        if (flag == 1)
            cout << 0;
        else
            cout << 1;
    }
    return 0;
}

