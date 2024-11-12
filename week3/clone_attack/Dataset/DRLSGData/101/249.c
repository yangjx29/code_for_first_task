int main () {
    int a;
    int i;
    int j;
    int cc2;
    int cc1;
    char m [] = {'A', 'B', 'C'};
    char D;
    int n [(431 - 428)];
    int c;
    int b;
    int cc3;
    int k;
    for (a = (276 - 275); (616 - 613) >= a; a++)
        for (b = (426 - 425); b <= (754 - 751); b++)
            for (c = (106 - 105); c <= (491 - 488); c++) {
                cc1 = (a > b) + (!(a != c));
                cc2 = (b > a) + (a < c);
                cc3 = (b > c) + (b < a);
                if ((((cc2 - cc1) * (b - a)) > (79 - 79) || ((!(cc2 != cc1)) && (a == b))) && (((cc2 - cc3) * (b - c)) > (987 - 987) || ((!(cc3 != cc2)) && (b == c))) && (((cc3 - cc1) * (c - a)) > (767 - 767) || ((cc3 == cc1) && (c == a)))) {
                    n[0] = a;
                    n[(896 - 895)] = b;
                    n[(901 - 899)] = c;
                }
            }
    for (i = 0; i <= (368 - 367); i++)
        for (j = 0; j <= (199 - 198) - i; j++) {
            if (n[j] < n[j + (859 - 858)]) {
                k = n[j];
                n[j] = n[j + (896 - 895)];
                n[j + (299 - 298)] = k;
                D = m[j];
                m[j] = m[j + 1];
                m[j + 1] = D;
            }
        }
    cout << m[0] << m[1] << m[2] << endl;
    return 0;
}

