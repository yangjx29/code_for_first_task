int main () {
    char xxsBoy [40];
    char *p = xxsBoy;
    cin.get (xxsBoy, 40);
    for (; !('\0' == *p); p++) {
        if ('0' <= *p && *p <= '9') {
            for (; *p >= '0' && *p <= '9'; p++)
                cout << *p;
            cout << endl;
        };
    }
    return 0;
}

