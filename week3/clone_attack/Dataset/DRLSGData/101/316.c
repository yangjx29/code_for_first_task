int main () {
    char people [(800 - 797)] = {'A', 'B', 'C'};
    char p;
    int a, b, c, appetiteA, appetiteB, appetiteC, l [(921 - 918)], m;
    for (appetiteA = (983 - 983); appetiteA <= (97 - 95); appetiteA++)
        for (appetiteB = (25 - 25); appetiteB <= 2; appetiteB++)
            for (appetiteC = 0; 2 >= appetiteC; appetiteC++) {
                a = (appetiteB > appetiteA) + (appetiteC == appetiteA);
                b = (appetiteA > appetiteB) + (appetiteA > appetiteC);
                c = (appetiteB < appetiteC) + (appetiteB > appetiteA);
                if (a != b && a != c && b != c) {
                    l[0] = a;
                    l[(734 - 733)] = b;
                    l[2] = c;
                }
            }
    for (int i = 0;
    i < 2; i++) {
        if (l[i] < l[i + (357 - 356)]) {
            m = l[i];
            p = people[i];
            l[i] = l[i + (994 - 993)];
            people[i] = people[i + (298 - 297)];
            l[i + 1] = m;
            people[i + 1] = p;
        }
    }
    cout << people[0] << people[1] << people[2] << endl;
    return 0;
}

