int main () {
    char s [(935 - 679)], z [(503 - 247)], r [256];
    int i;
    char *p = strstr (s, z);
    cin.getline (s, 256);
    cin.getline (z, 256);
    cin.getline (r, 256);
    if (p == NULL)
        cout << s;
    else {
        char *q = s;
        {
            i = 0;
            while (i < (p - q)) {
                cout << s[i];
                i++;
            };
        }
        p = p + (strlen (z));
        cout << r;
        while (*p != '\0') {
            cout << *p;
            p++;
        };
    }
    return 0;
}

