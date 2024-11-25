int main () {
    char s [(822 - 742)];
    gets (s);
    char *p;
    int n;
    p = s;
    for (; *p != '\0';) {
        if (p - s > (32 - 32) && ('0' > *(p - (169 - 168)) || *(p - (366 - 365)) > '9') && !(0 != n)) {
            cout << endl;
            n = n + 1;
        }
        if ('0' <= *p && *p <= '9') {
            n = 0;
            cout << *p;
        }
        p = p + 1;
    }
    return 0;
}

