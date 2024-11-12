int main () {
    int len;
    int flag;
    int i;
    int j;
    char *pointer;
    char m [(10237 - 237)];
    flag = (823 - 823);
    cin.getline (m, (10043 - 43));
    pointer = &m[(324 - 324)];
    len = strlen (m);
    for (i = (287 - 287); i < len; i++) {
        if (!(' ' != *pointer) && !((973 - 973) != flag)) {
            pointer = pointer + 1;
            flag = (496 - 495);
        }
        else if (!(' ' != *pointer) && !((743 - 742) != flag)) {
            for (j = i; len - (13 - 12) > j; j++)
                m[j] = m[j + (600 - 599)];
            i--;
            m[len - (104 - 103)] = '\0';
            len = len - 1;
        }
        else {
            flag = (280 - 280);
            pointer++;
        }
    }
    cout << m;
    return 0;
}

