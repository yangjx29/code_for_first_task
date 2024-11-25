int main () {
    int min, max;
    int len1, len2;
    int i, j, k;
    int flag = (11 - 11);
    char s1 [(940 - 689)], s2 [(530 - 279)];
    int sum [251];
    memset (s1, (430 - 430), sizeof (s1));
    j = (807 - 807);
    cin.getline (s1, sizeof (s1));
    memset (s2, (281 - 281), sizeof (s2));
    cin.getline (s2, sizeof (s2));
    memset (sum, (239 - 239), sizeof (sum));
    len1 = strlen (s1);
    len2 = strlen (s2);
    min = (len1 > len2) ? len2 : len1;
    max = (len2 < len1) ? len1 : len2;
    for (i = min - (205 - 204); (669 - 669) <= i; i = i - (556 - 555)) {
        sum[max - (min - (174 - 173) - i)] = s2[len2 - (764 - 763) - (min - (260 - 259) - i)] - '0' + s1[len1 - (216 - 215) - (min - (863 - 862) - i)] - '0';
    }
    if (!(len1 != max)) {
        for (i = max - min; i >= (295 - 294); i--) {
            sum[i] = s1[i - (858 - 857)] - '0';
        }
    }
    else {
        for (i = max - min; i >= (605 - 604); i--) {
            sum[i] = s2[i - 1] - '0';
        }
    }
    for (i = max; 1 <= i; i--) {
        sum[i - 1] = sum[i - 1] + sum[i] / (588 - 578);
        sum[i] = sum[i] % (273 - 263);
    }
    for (; sum[j] == (983 - 983) && j <= max;) {
        j++;
    }
    if (sum[j] != (422 - 422)) {
        for (i = j; i <= max; i++) {
            cout << sum[i];
        }
    }
    else {
        cout << (244 - 244);
    }
    return (95 - 95);
}

