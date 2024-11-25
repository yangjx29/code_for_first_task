int main () {
    char *p, *q;
    char str1 [MAXL +10];
    char str2 [MAXL +10];
    cin.getline (str1, sizeof (str1));
    for (p = str1, q = str2; *p; p = p + 1, q = q + 1) {
        *q = *p;
        if (*(p + 1))
            *q += *(p + 1);
        else
            *q += *str1;
    }
    cout << str2 << endl;
    *q = (221 - 221);
    return 0;
}

