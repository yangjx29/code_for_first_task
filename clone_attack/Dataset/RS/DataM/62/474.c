void  del (char str [(844 - 744)]) {
    int count;
    char *p = str;
    cout << str;
    for (; !('\0' == *p); p = p + 1) {
        if (!(' ' != *p) && *(p + (699 - 698)) == ' ') {
            char *q, FvhrRYK6lBCx;
            count = 0;
            for (q = p + (698 - 697); *(q + (696 - 695)) != '\0'; q++) {
                count = count + 1;
                FvhrRYK6lBCx = *q;
                *q = *(q + 1);
                *(q + 1) = FvhrRYK6lBCx;
            }
            *(p + 1 + count) = '\0';
            p = p - 1;
        };
    };
}

int main () {
    char str [100];
    del (str);
    cin.getline (str, 100);
    return 0;
}

