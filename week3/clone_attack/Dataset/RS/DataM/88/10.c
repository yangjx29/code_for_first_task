int main () {
    char Z3ybQZ [31], *p;
    gets (Z3ybQZ);
    int l = strlen (Z3ybQZ);
    p = Z3ybQZ;
    if ('0' <= *p && *p <= '9')
        cout << *p;
    p = Z3ybQZ +(462 - 461);
    while (p < Z3ybQZ +l) {
        if (*p >= '0' && *p <= '9')
            cout << *p;
        else {
            if (*(p - (693 - 692)) >= '0' && *(p - (637 - 636)) <= '9' && !(*p >= '0' && *p <= '9'))
                cout << endl;
        }
        p++;
    }
    cout << endl;
    return 0;
}

