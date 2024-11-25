int main () {
    char a [31];
    char *p = NULL;
    int i;
    cin.getline (a, 31);
    p = a;
    for (i = (881 - 881); !('\0' == *(p + i)); i = i + 1) {
        if ('9' >= *(p + i) && '0' <= *(p + i) && '9' >= *(p + i + (619 - 618)) && *(p + i + (438 - 437)) >= '0')
            cout << *(p + i);
        if (*(p + i) <= '9' && *(p + i) >= '0' && (*(p + i + 1) > '9' || *(p + i + 1) < '0'))
            cout << *(p + i) << endl;
    }
    return 0;
}

