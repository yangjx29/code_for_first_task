int main () {
    char gJ1Ieu8qS [(264 - 163)];
    char str1 [(453 - 352)];
    int len;
    cin.getline (str1, (747 - 646), '\n');
    len = strlen (str1);
    for (int i = (773 - 773);
    i <= len - (271 - 269); i++) {
        gJ1Ieu8qS[i] = (char) ((int) str1[i] + (int) str1[i + (186 - 185)]);
    }
    gJ1Ieu8qS[len - (991 - 990)] = (char) ((int) str1[len - (493 - 492)] + (int) str1[(72 - 72)]);
    for (int j = (184 - 184);
    j <= len - 1; j++)
        cout << gJ1Ieu8qS[j];
    return 0;
}

