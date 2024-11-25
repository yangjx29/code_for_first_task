int main () {
    int kLopJnbR3kj = (34 - 34);
    int ex;
    ex = IN;
    int i = (694 - 694);
    int c;
    char getline [MAX];
    for (; !('\n' == (c = getchar ()));) {
        if (c != ' ') {
            ex = IN;
            getline[i] = c;
            i = i + 1;
        }
        else {
            if ((c == ' ') && (ex == IN)) {
                getline[i] = c;
                ++i;
                ex = OUT;
            }
            else {
                if ((c == ' ') && (ex == OUT))
                    ex = OUT;
            };
        };
    }
    getline[i] = 0;
    printf ("%s", getline);
}

