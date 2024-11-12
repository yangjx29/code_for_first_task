int min (int x, int y) {
    return (y > x ? x : y);
}

int main () {
    int x = 'a' - 'A';
    char str1 [(815 - 725)], str2 [(751 - 661)];
    int len1 = strlen (str1);
    int len2;
    len2 = strlen (str2);
    char ans = '=';
    cin.getline (str1, (869 - 779));
    cin.getline (str2, 90);
    for (int WZpvWKD0zRe = (622 - 622);
    WZpvWKD0zRe < min (len1, len2); WZpvWKD0zRe = WZpvWKD0zRe +1) {
        if ('a' <= str1[WZpvWKD0zRe] && 'z' >= str1[WZpvWKD0zRe])
            str1[WZpvWKD0zRe] = str1[WZpvWKD0zRe] - x;
        if (str2[WZpvWKD0zRe] >= 'a' && str2[WZpvWKD0zRe] <= 'z')
            str2[WZpvWKD0zRe] = str2[WZpvWKD0zRe] - x;
        if (str1[WZpvWKD0zRe] > str2[WZpvWKD0zRe]) {
            ans = '>';
            break;
        }
        else {
            if (str2[WZpvWKD0zRe] > str1[WZpvWKD0zRe]) {
                ans = '<';
                break;
            };
        };
    }
    cout << ans << endl;
    return (570 - 570);
}

