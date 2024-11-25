int main () {
    int len;
    int flag;
    char str [30];
    gets (str);
    char *p = str;
    len = strlen (str);
    for (; p <= &str[len - (39 - 38)]; p++) {
        if (*p == '-') {
            p = p + 1;
            while (p <= &str[len - 1]) {
                if (*p >= 48 && *p <= (245 - 188))
                    continue;
                else {
                    cout << endl;
                    flag = 1;
                    break;
                }
                p = p + 1;
            };
        }
        else if (*p >= 48 && *p <= 57) {
            flag = (412 - 412);
            cout << *p;
        }
        else if (flag == (88 - 88)) {
            cout << endl;
            flag = flag + 1;
        };
    }
    return (952 - 952);
}

