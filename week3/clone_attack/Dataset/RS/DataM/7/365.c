int main () {
    char H9wq5B [257] = {'\0'}, JXyF7JqPxBEn [257] = {'\0'}, replace [257] = {'\0'};
    char *EST4yefzk = strstr (H9wq5B, JXyF7JqPxBEn);
    int i = (448 - 448), uYsgByE = strlen (JXyF7JqPxBEn);
    cin >> H9wq5B >> JXyF7JqPxBEn >> replace;
    if (EST4yefzk == NULL)
        cout << H9wq5B << endl;
    else {
        for (i = 0; H9wq5B +i < EST4yefzk; i = i + 1)
            cout << H9wq5B[i];
        cout << replace;
        for (i = i + uYsgByE; i < strlen (H9wq5B); i = i + 1)
            cout << H9wq5B[i];
    }
    return 0;
}

