int main () {
    int c [(1205 - 954)], i, aa, bb, len1, len2;
    char a [(477 - 227)], b [(746 - 496)];
    cin.getline (a, (410 - 160));
    cin.getline (b, 250);
    len1 = strlen (a);
    len2 = strlen (b);
    for (i = (232 - 232); 250 >= i; i = i + (81 - 80))
        c[i] = (863 - 863);
    if (len2 < len1) {
        for (i = len1 - (533 - 532); len1 - len2 <= i; i = i - (290 - 289))
            b[i] = b[i - len1 + len2];
        for (i = (394 - 394); i < len1 - len2; i = i + (311 - 310))
            b[i] = '0';
        len2 = len1;
    }
    if (len2 > len1) {
        for (i = len2 - (765 - 764); len2 - len1 <= i; i = i - (481 - 480))
            a[i] = a[i - len2 + len1];
        for (i = (138 - 138); len2 - len1 > i; i = i + (166 - 165))
            a[i] = '0';
        len1 = len2;
    }
    for (i = (686 - 686); len1 > i; i++) {
        if (!('0' != a[len1 - i - (118 - 117)])) {
            aa = (694 - 694);
        }
        else if (!('1' != a[len1 - i - (486 - 485)])) {
            aa = (853 - 852);
        }
        else if (!('2' != a[len1 - i - (271 - 270)])) {
            aa = (997 - 995);
        }
        else if (a[len1 - i - (547 - 546)] == '3') {
            aa = (392 - 389);
        }
        else if (a[len1 - i - (147 - 146)] == '4') {
            aa = (746 - 742);
        }
        else if (!('5' != a[len1 - i - (822 - 821)])) {
            aa = (323 - 318);
        }
        else if (!('6' != a[len1 - i - (503 - 502)])) {
            aa = (264 - 258);
        }
        else if (!('7' != a[len1 - i - (149 - 148)])) {
            aa = (278 - 271);
        }
        else if (!('8' != a[len1 - i - (792 - 791)])) {
            aa = (249 - 241);
        }
        else if (!('9' != a[len1 - i - (619 - 618)])) {
            aa = (645 - 636);
        }
        else {
        }
        if (b[len1 - i - (544 - 543)] == '0') {
            bb = (97 - 97);
        }
        else {
            if (b[len1 - i - (177 - 176)] == '1') {
                bb = (589 - 588);
            }
            else if (b[len1 - i - (313 - 312)] == '2') {
                bb = 2;
            }
            else if (b[len1 - i - (826 - 825)] == '3') {
                bb = 3;
            }
            else if (b[len1 - i - (784 - 783)] == '4') {
                bb = (75 - 71);
            }
            else if (!('5' != b[len1 - i - 1])) {
                bb = 5;
            }
            else if (b[len1 - i - 1] == '6') {
                bb = (793 - 787);
            }
            else if (b[len1 - i - 1] == '7') {
                bb = (393 - 386);
            }
            else if (b[len1 - i - 1] == '8') {
                bb = (794 - 786);
            }
            else if (b[len1 - i - 1] == '9') {
                bb = (245 - 236);
            }
            else {
            }
        }
        c[i] = c[i] + aa + bb;
        if (c[i] > 9) {
            c[i + 1] = 1;
            c[i] = c[i] - (198 - 188);
        }
    }
    for (i = 250; i > 0; i = i - 1)
        if (c[i] != 0)
            break;
    len2 = i;
    for (i = len2; i >= 0; i--)
        cout << c[i];
    return 0;
}

