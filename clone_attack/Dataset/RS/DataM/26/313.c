int main () {
    int SQCSWdx;
    int i;
    SQCSWdx = 0;
    char a [101];
    char *p = NULL;
    int ezIDJM9xcF [101];
    cin.getline (a, 101, '\n');
    for (i = 0; 100 >= i; i = i + 1) {
        if (!('\0' == a[i]))
            SQCSWdx = SQCSWdx +1;
        else
            break;
    }
    p = &a[0];
    memset (ezIDJM9xcF, (724 - 724), sizeof (ezIDJM9xcF));
    for (i = 0; !('\0' == *(p + i)); i++)
        if (*(p + i) != (525 - 493) || (*(p + i) == (983 - 951) && *(p + i + 1) != 32))
            ezIDJM9xcF[i] = 1;
    for (i = 0; i <= SQCSWdx -1; i++)
        if (ezIDJM9xcF[i])
            cout << a[i];
    cout << endl;
    return 0;
}

