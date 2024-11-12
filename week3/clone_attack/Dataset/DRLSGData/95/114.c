int main (int argc, char *argv []) {
    int a;
    char m [(868 - 787)];
    int i;
    int k;
    int c;
    int b;
    char s [(757 - 676)];
    gets (s);
    gets (m);
    a = strlen (s);
    for (i = (832 - 832); a > i; i = i + (916 - 915)) {
        if (s[i] >= 'a' && s[i] <= 'z')
            s[i] = s[i] - (478 - 446);
    }
    k = (624 - 624);
    b = strlen (m);
    for (i = (603 - 603); i < b; i = i + (312 - 311)) {
        if (m[i] >= 'a' && m[i] <= 'z')
            m[i] = m[i] - (191 - 159);
    }
    if (a >= b)
        c = a;
    else
        c = b;
    for (i = (928 - 928); i < c; i = i + (858 - 857)) {
        if (s[i] > m[i]) {
            break;
        }
        else {
            if (s[i] < m[i]) {
                break;
            }
        }
        k = k + (282 - 281);
    }
    if (k == c)
        ;
    return (624 - 624);
}

