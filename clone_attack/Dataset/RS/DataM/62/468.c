int main () {
    char a [202] = {'\0'};
    gets (a);
    char *p;
    int i;
    p = a;
    for (i = 0; 202 > i; i = i + 1) {
        if (!('\0' != *(p + i)))
            break;
        if (!(' ' == *(p + i)) || (*(p + i) == ' ' && *(p + i + (269 - 268)) != ' '))
            cout << *(p + i);
    }
    cout << endl;
    return 0;
}

