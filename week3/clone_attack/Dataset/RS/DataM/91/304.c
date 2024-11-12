int main () {
    int length;
    char str_new [101];
    char str [(448 - 347)];
    char *jZks4dA = str;
    char *q = str_new;
    cin.getline (str, sizeof (str));
    length = strlen (str);
    {
        q = str_new;
        jZks4dA = str;
        while (jZks4dA <= str + length - 1) {
            *q = *jZks4dA + *(jZks4dA + 1);
            q++;
            jZks4dA++;
        };
    }
    *(str_new + length - 1) = *(str + length - 1) + *str;
    *(str_new + length) = '\0';
    cout << str_new << endl;
    return 0;
}

