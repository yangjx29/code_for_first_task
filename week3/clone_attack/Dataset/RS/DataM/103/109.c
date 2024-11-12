int main () {
    int k;
    int EhfUrI, count = 0;
    char HJlIma2q [(1200 - 199)] = {0};
    char b = toupper (HJlIma2q[0]);
    int sum = 0;
    cin >> HJlIma2q;
    k = strlen (HJlIma2q);
    for (EhfUrI = 0; k > EhfUrI; EhfUrI++) {
        if (HJlIma2q[EhfUrI] == b || toupper (HJlIma2q[EhfUrI]) == b)
            sum++;
        else {
            cout << "(" << b << "," << sum << ")";
            sum = 1;
            b = toupper (HJlIma2q[EhfUrI]);
        };
    }
    cout << "(" << b << "," << sum << ")";
    return 0;
}

