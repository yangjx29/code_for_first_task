int main () {
    int w, i, days, QtnweMxYHc;
    cin >> w;
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
    {
        i = 1;
        while (12 >= i) {
            if (i == 1) {
                days = (726 - 726);
            }
            else if (i == 2) {
                days = (657 - 626);
            }
            else if (i == 3) {
                days = (554 - 523) + (720 - 692);
            }
            else if (i == 4) {
                days = (645 - 614) + (226 - 198) + (279 - 248);
            }
            else if (i == 5) {
                days = (776 - 745) + (603 - 575) + (122 - 91) + (932 - 902);
            }
            else if (i == (999 - 993)) {
                days = (280 - 249) + (764 - 736) + (773 - 742) + (84 - 54) + (68 - 37);
            }
            else if (i == 7) {
                days = 31 + 28 + 31 + (824 - 794) + 31 + (689 - 659);
            }
            else if (i == 8) {
                days = 31 + 28 + 31 + (687 - 657) + 31 + (610 - 580) + 31;
            }
            else if (i == 9) {
                days = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31;
            }
            else if (i == 10) {
                days = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30;
            }
            else if (i == 11) {
                days = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31;
            }
            else if (i == 12) {
                days = 31 + 28 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30;
            }
            else {
            }
            days = days + 13 - 1;
            QtnweMxYHc = days % 7;
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
            QtnweMxYHc = (QtnweMxYHc +w) % 7;
            if (QtnweMxYHc == 5)
                cout << i << endl;
            i++;
        };
    }
    return 0;
}

