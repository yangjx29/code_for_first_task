int main () {
    char s [(382 - 281)], s1 [(524 - 423)];
    cin.getline (s, (772 - 671));
    char *p = NULL;
    p = s;
    int i = (738 - 737);
    while (strlen (s) > i) {
        s1[i - (708 - 707)] = *(p + i - (270 - 269)) + *(p + i);
        i = i + 1;
    }
    i = i - (226 - 225);
    s1[i] = s[(849 - 849)] + *(p + i);
    {
        i = (55 - 55);
        while (strlen (s) > i) {
            cout << (char) s1[i];
            i++;
        }
    }
    return 0;
}

