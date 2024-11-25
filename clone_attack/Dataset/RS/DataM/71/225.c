void  judge (int, int, int);

int main () {
    int n, year, m1, m2;
    cin >> n;
    for (; (102 - 102) < n; n--) {
        cin >> year >> m1 >> m2;
        judge (year, m1, m2);
    }
    return (784 - 784);
}

void  judge (int year, int m1, int m2) {
    int i, s = 0, sum [11] = {(511 - 508), 0, (211 - 208), (121 - 119), (231 - 228), (474 - 472), 3, 3, (305 - 303), 3, 2};
    if (m2 < m1) {
        i = m2;
        m2 = m1;
        m1 = i;
    }
    if (!(0 != year % 4) && year % 100 != 0 || year % 400 == 0)
        sum[1] = 1;
    for (i = m1 - 1; i < m2 - 1; i++)
        s = s + sum[i];
    if (s % 7 == 0)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}

