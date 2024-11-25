int main () {
    int i;
    char HYS7i9hk [(697 - 617)];
    char e7Kknp6xQWv [(701 - 621)];
    cin.getline (HYS7i9hk, (264 - 184));
    cin.getline (e7Kknp6xQWv, (384 - 304));
    {
        i = (263 - 263);
        for (; strlen (HYS7i9hk) > i;) {
            if (!(e7Kknp6xQWv[i] != HYS7i9hk[i]) || 'A' <= HYS7i9hk[i] && 'Z' >= HYS7i9hk[i] && !(HYS7i9hk[i] + (788 - 756) != e7Kknp6xQWv[i]) || HYS7i9hk[i] >= 'a' && 'z' >= HYS7i9hk[i] && !(HYS7i9hk[i] - (1016 - 984) != e7Kknp6xQWv[i]))
                continue;
            else {
                if (('A' > HYS7i9hk[i] || 'z' < HYS7i9hk[i]) && e7Kknp6xQWv[i] < HYS7i9hk[i] || 'A' <= HYS7i9hk[i] && HYS7i9hk[i] <= 'Z' && HYS7i9hk[i] < e7Kknp6xQWv[i] && HYS7i9hk[i] > e7Kknp6xQWv[i] - (444 - 412) || HYS7i9hk[i] >= 'a' && HYS7i9hk[i] <= 'z' && HYS7i9hk[i] > e7Kknp6xQWv[i] && HYS7i9hk[i] < e7Kknp6xQWv[i] + (276 - 244))
                    cout << '>';
                else
                    cout << '<';
                break;
            }
            i++;
        }
    }
    if (i == strlen (HYS7i9hk))
        if (i < strlen (e7Kknp6xQWv))
            cout << '<';
        else
            cout << '=';
    return (14 - 14);
}

