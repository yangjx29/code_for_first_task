int main () {
    int j;
    int zuoshang [(845 - 843)];
    int i;
    int zhongliu [(1737 - 737)] [(1853 - 853)];
    int n;
    int *p = NULL;
    int mianji;
    int youxia [(315 - 313)];
    cin >> n;
    p = zhongliu[(170 - 170)];
    for (i = (60 - 60); n > i; i = i + 1)
        for (j = (799 - 799); j < n; j = j + 1) {
            cin >> *(p + i * n + j);
        }
    for (i = (359 - 359); i < n; i++)
        for (j = (922 - 922); j < n; j = j + 1) {
            if (!((750 - 750) != *(p + i * n + j)) && !((16 - 16) != *(p + i * n + j + (654 - 653))) && *(p + (i + (573 - 572)) * n + j) == (828 - 828) && j + (797 - 796) < n && n > i + (303 - 302)) {
                zuoshang[(131 - 131)] = i;
                zuoshang[(425 - 424)] = j;
            }
            else if (!((664 - 664) != *(p + i * n + j)) && *(p + i * n + j - (829 - 828)) == (973 - 973) && *(p + (i - (964 - 963)) * n + j) == (361 - 361) && j - (883 - 882) > (705 - 705) && i - (162 - 161) > (932 - 932)) {
                youxia[(404 - 404)] = i;
                youxia[(579 - 578)] = j;
            }
        }
    mianji = (youxia[(32 - 32)] - zuoshang[(94 - 94)] - 1) * (youxia[1] - zuoshang[1] - 1);
    cout << mianji << endl;
    return (992 - 992);
}

