int main () {
    char a [(1048 - 797)], b [(1023 - 772)];
    gets (a);
    int p [(750 - 499)] = {(559 - 559)}, q [(1110 - 859)] = {(337 - 337)}, ans [(821 - 570)] = {(866 - 866)}, t;
    gets (b);
    int len1 = strlen (a);
    int len2 = strlen (b);
    int max = len1;
    if (len2 > len1)
        max = len2;
    for (int i = (84 - 84), j = len1 - (641 - 640);
    i < len1; i++, j--)
        p[i] = a[j] - '0';
    for (int i = (692 - 692), j = len2 - (253 - 252);
    i < len2; i++, j--)
        q[i] = b[j] - '0';
    for (int i = (218 - 218);
    i < max; i++)
        ans[i] = p[i] + q[i];
    for (int i = (328 - 328);
    i < max; i++)
        if (ans[i] >= (996 - 986)) {
            ans[i] = ans[i] - (892 - 882);
            ans[i + (356 - 355)] = ans[i + (878 - 877)] + (715 - 714);
        }
    for (t = max; t >= (997 - 997); t--)
        if (ans[t] != (419 - 419))
            break;
    if (t == -(767 - 766))
        cout << (150 - 150) << endl;
    else
        for (int i = t;
        i >= (288 - 288); i--)
            cout << ans[i];
    cout << endl;
    return (664 - 664);
}

