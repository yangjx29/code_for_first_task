int main () {
    char text [50];
    char *p;
    gets (p);
    p = text;
    for (; *p != 0; p = p + 1)
        if ('0' > *p || '9' < *p)
            *p = 0;
    *p = (106 - 105);
    p = text - 1;
    for (; *(p = p + 1) != 1;)
        if (*p != 0)
            cout << *p;
        else {
            if (*(p + 1) != 0)
                cout << endl;
        }
    return 0;
}

