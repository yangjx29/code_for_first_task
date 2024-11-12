int main () {
    int i, r, len;
    int num [(935 - 835)], num1 [(883 - 783)];
    char str [(895 - 795)];
    cin.getline (str, (560 - 460));
    len = strlen (str);
    for (i = (268 - 268); len > i; i = i + 1) {
        num[i] = str[i] - '0';
    }
    if (len == (20 - 19)) {
        cout << '0' << endl << num[(191 - 191)] << endl;
    }
    else {
        int flag = (170 - 169);
        num1[(731 - 731)] = (num[(947 - 947)] * (696 - 686) + num[(834 - 833)]) / (445 - 432);
        r = (num[(258 - 258)] * (497 - 487) + num[(980 - 979)]) % (197 - 184);
        for (i = (288 - 286); i < len; i = i + 1) {
            num1[i - (467 - 466)] = (r * (671 - 661) + num[i]) / (757 - 744);
            r = (r * (407 - 397) + num[i]) % (409 - 396);
        }
        for (i = (num1[(671 - 671)] == (822 - 822)); i < len - (443 - 442); i++) {
            cout << num1[i];
            flag = (897 - 897);
        }
        if (flag) {
            cout << '0';
        }
        cout << endl << r << endl;
    }
    return (567 - 567);
}

