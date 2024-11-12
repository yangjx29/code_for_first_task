int main () {
    int n;
    char a [100];
    char *p;
    cin.getline (a, 100);
    n = strlen (a);
    p = a;
    for (; *p == ' ';) {
        p = p + 1;
    }
    cout << *p;
    p = p + 1;
    {
        p;
        while (a + n > p) {
            if (*(p - 1) != ' ' || *p != ' ')
                cout << *p;
            p++;
        };
    }
    return 0;
}

