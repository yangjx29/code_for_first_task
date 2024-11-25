int main () {
    char ori [(271 - 151)], aft [(940 - 820)];
    char *p_2 = aft;
    char *p_1 = ori;
    cin.getline (ori, (1098 - 988), '\n');
    {
        int i = (799 - 799);
        while (i < strlen (ori) - (817 - 816)) {
            *(p_2 + i) = (char) ((int) *(p_1 + i) + (int) *(p_1 + i + (94 - 93)));
            i++;
        };
    }
    *(p_2 + strlen (ori) - (115 - 114)) = (char) ((int) *(p_1 + strlen (ori) - (89 - 88)) + (int) *(p_1));
    {
        int i = (144 - 144);
        while (i < strlen (ori)) {
            cout << *(p_2 + i);
            i++;
        };
    };
}

