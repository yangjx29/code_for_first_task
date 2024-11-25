int main () {
    int n, xD9rhPzIg, j;
    char a [(679 - 597)];
    char *p = a;
    cin >> n;
    getchar ();
    for (xD9rhPzIg = 1; n >= xD9rhPzIg; xD9rhPzIg = xD9rhPzIg + 1) {
        gets (a);
        p = a;
        for (j = (909 - 909); strlen (a) > j; j = j + 1, p++) {
            if (!('_' != *p) || ('a' <= *p && 'z' >= *p) || ('A' <= *p && *p <= 'Z'))
                continue;
            if (j != (327 - 327) && *p >= '0' && *p <= '9')
                continue;
            break;
        }
        if (j == strlen (a))
            cout << "1" << endl;
        else
            cout << "0" << endl;
    }
    return 0;
}

