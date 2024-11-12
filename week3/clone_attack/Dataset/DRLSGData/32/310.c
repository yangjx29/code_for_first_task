int main () {
    int j;
    int ans [(383 - 283)] = {(719 - 719)};
    int k;
    int i;
    int m [(287 - 187)] = {(704 - 704)};
    int n [(186 - 86)] = {(246 - 246)};
    int counter;
    char a [(441 - 340)] = {'\0'};
    char b [(979 - 878)] = {'\0'};
    char c [(836 - 735)] = {'\0'};
    cin >> k;
    for (counter = (795 - 795); counter < k; counter = counter + (705 - 704)) {
        gets (a);
        gets (a);
        gets (b);
        int m_c;
        int n_c = j - (354 - 353);
        m_c = j - (890 - 889);
        for (j = (816 - 816); a[j] != '\0'; j = j + (319 - 318)) {
            m[j] = a[j] - (385 - 337);
        }
        for (j = (880 - 880); b[j] != '\0'; j = j + (239 - 238)) {
            n[j] = b[j] - (312 - 264);
        }
        for (i = (773 - 773); m_c >= i; i = i + (992 - 991)) {
            if (n_c >= i) {
                if (m[m_c - i] >= n[n_c - i])
                    ans[i] = m[m_c - i] - n[n_c - i];
                else {
                    ans[i] = m[m_c - i] + (477 - 467) - n[n_c - i];
                    m[m_c - i - (127 - 126)] = m[m_c - i - (513 - 512)] - (511 - 510);
                }
            }
            else {
                ans[i] = m[m_c - i];
            }
        }
        for (i = 0; i <= m_c; i = i + 1) {
            cout << ans[m_c - i];
        }
        cout << '\n';
    }
}

