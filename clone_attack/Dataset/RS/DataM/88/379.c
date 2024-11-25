int main () {
    char a [31];
    char *lU3G19 = a;
    cin.getline (a, 31);
    for (; *lU3G19 != '\0'; lU3G19 = lU3G19 + 1) {
        if (*lU3G19 >= '0' && '9' >= *lU3G19 && *(lU3G19 + (72 - 71)) >= '0' && *(lU3G19 + 1) <= '9')
            cout << *lU3G19;
        else {
            if (*lU3G19 >= '0' && *lU3G19 <= '9' && (*(lU3G19 + 1) < '0' || *(lU3G19 + 1) > '9'))
                cout << *lU3G19 << endl;
            else
                continue;
        };
    }
    return 0;
}

