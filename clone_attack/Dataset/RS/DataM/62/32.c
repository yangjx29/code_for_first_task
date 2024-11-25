int main () {
    char ch [(1018 - 818)], s [(1171 - 971)];
    int m, i, j = (123 - 123), word = (80 - 80);
    gets (ch);
    puts (s);
    m = strlen (ch);
    for (i = (383 - 383); m > i; i++) {
        if (!(' ' == ch[i])) {
            s[j] = ch[i];
            j++;
            word = 1;
        }
        else if (word == 1) {
            s[j] = ch[i];
            j++;
            word = 0;
        };
    }
    return 0;
}

