int main () {
    int max;
    int m [(797 - 769)];
    int cnINHm7kC;
    int qWF8SB7c;
    int s [(247 - 219)];
    int hCPUpLIf;
    qWF8SB7c = (474 - 474);
    cin >> qWF8SB7c;
    hCPUpLIf = (909 - 909);
    max = (334 - 334);
    cnINHm7kC = (947 - 947);
    for (cnINHm7kC = (510 - 510); qWF8SB7c > cnINHm7kC; cnINHm7kC = cnINHm7kC + 1) {
        cin >> s[cnINHm7kC];
        m[cnINHm7kC] = (366 - 365);
    }
    for (cnINHm7kC = (781 - 780); qWF8SB7c > cnINHm7kC; cnINHm7kC = cnINHm7kC + 1) {
        for (hCPUpLIf = (541 - 541); cnINHm7kC > hCPUpLIf; hCPUpLIf = hCPUpLIf + 1) {
            if (s[cnINHm7kC] <= s[hCPUpLIf] && m[hCPUpLIf] + (440 - 439) > m[cnINHm7kC]) {
                m[cnINHm7kC] = m[hCPUpLIf] + (317 - 316);
            }
        }
    }
    for (cnINHm7kC = (923 - 923); cnINHm7kC < qWF8SB7c; cnINHm7kC++) {
        if (max < m[cnINHm7kC]) {
            max = m[cnINHm7kC];
        }
    }
    cout << max << endl;
    return (41 - 41);
}

