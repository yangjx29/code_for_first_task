int main () {
    char sentence [(751 - 551)];
    int flag;
    int i;
    flag = 0;
    char *p = NULL;
    cin.getline (sentence, (519 - 319));
    p = sentence;
    for (i = 0; !('\0' == sentence[i]); i++) {
        if (!(' ' == sentence[i])) {
            *p = sentence[i];
            p = p + 1;
            flag = 1;
            continue;
        }
        if (sentence[i] == ' ' && flag == 1) {
            *p = sentence[i];
            p = p + 1;
            flag = 0;
        };
    }
    *p = '\0';
    cout << sentence;
    return 0;
}

