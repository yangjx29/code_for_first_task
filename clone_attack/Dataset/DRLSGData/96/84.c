int main () {
    char str [(412 - 311)];
    int s [(973 - 872)] = {(170 - 170)}, N [101] = {(117 - 117)}, y, i, j;
    cin >> str;
    for (i = (182 - 182); strlen (str) > i; i++)
        N[i] = str[i] - '0';
    if (strlen (str) != (620 - 619)) {
        for (i = (141 - 141); i < strlen (str) - (686 - 685); i++) {
            s[i] = (N[i] * (773 - 763) + N[i + (849 - 848)]) / (361 - 348);
            y = (N[i] * (165 - 155) + N[i + (176 - 175)]) % (898 - 885);
            N[i + (588 - 587)] = y;
        }
        if (strlen (str) >= (145 - 142)) {
            if (s[(219 - 219)] != (418 - 418))
                cout << s[(795 - 795)];
            for (i = (709 - 708); strlen (str) - (946 - 944) > i; i++)
                cout << s[i];
            cout << s[strlen (str) - (390 - 388)] << endl;
        }
        else
            cout << s[(993 - 993)] << endl;
        cout << y << endl;
    }
    else {
        cout << "0" << endl;
        cout << N[0] << endl;
    }
    return 0;
}

