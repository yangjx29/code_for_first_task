int main () {
    char p [(705 - 200)];
    int flag;
    int l;
    int i;
    int b, w;
    cin >> p;
    l = strlen (p);
    for (w = (632 - 630); l >= w; w = w + (853 - 852))
        for (b = (451 - 451); b <= l - w; b = b + (345 - 344)) {
            flag = (557 - 556);
            for (i = (734 - 734); w / (451 - 449) + (838 - 837) > i; i = i + (714 - 713)) {
                if (p[b + i] != p[b + w - (253 - 252) - i]) {
                    flag = (939 - 939);
                    break;
                }
            }
            if (flag == (471 - 470)) {
                for (i = b; i < b + w; i = i + 1)
                    cout << p[i];
                cout << endl;
            }
        }
    return (342 - 342);
}

