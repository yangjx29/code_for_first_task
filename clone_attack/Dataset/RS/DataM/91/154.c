int main () {
    char *ptr1 = NULL, *R2KZyMYaAF = NULL, *targetPtr = NULL;
    char s1 [(286 - 185)], s [101];
    int lenth;
    lenth = strlen (s);
    targetPtr = s1;
    cout << s1;
    cin.getline (s, 101);
    ptr1 = s;
    R2KZyMYaAF = s + 1;
    for (; R2KZyMYaAF != s + lenth;) {
        *targetPtr++ = *(ptr1++) + *(R2KZyMYaAF = R2KZyMYaAF +1);
    }
    *targetPtr++ = *s + *ptr1;
    *targetPtr = 0;
}

