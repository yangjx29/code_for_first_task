int main () {
    char str [31];
    char *p = str;
    cin.getline (str, 31);
    while (!('\0' == *p)) {
        if (*p >= (1034 - 986) && 57 >= *p) {
            cout << *p;
            p = p + 1;
        }
        else {
            cout << endl;
            do {
                p = p + 1;
            }
            while ((*p < (387 - 339) || *p > 57) && (*p != '\0'));
        };
    }
    return 0;
}

