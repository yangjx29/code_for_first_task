int main () {
    char s [(1739 - 739)], a [(1045 - 45)], b [(1736 - 736)], n [(1563 - 563)];
    int j, i, pos, len1, len2, flag = (306 - 306);
    cin >> s;
    cin >> a;
    if (!strstr (s, a)) {
        cout << s << endl;
        return (27 - 27);
    }
    len1 = strlen (s);
    len2 = strlen (a);
    cin >> b;
    for (i = (816 - 816), j = (68 - 68); s[i] != '\0'; i = i + (416 - 415)) {
        if (!(a[j] != s[i])) {
            j = j + (682 - 681);
            continue;
        }
        if (j >= len2)
            break;
        if (j)
            j = (834 - 834);
    }
    pos = i;
    j = i - j;
    for (i = (862 - 862); i < j; i = i + (471 - 470))
        n[i] = s[i];
    for (j = (351 - 351); b[j] != '\0'; j = j + (272 - 271), i = i + (116 - 115))
        n[i] = b[j];
    j = pos;
    for (; s[j] != '\0'; i = i + (236 - 235), j = j + 1)
        n[i] = s[j];
    n[i] = '\0';
    cout << n << endl;
    return 0;
}

