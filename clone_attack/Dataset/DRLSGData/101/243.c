int main () {
    int cc3;
    char D;
    int i;
    int k;
    int b;
    char m [] = {'A', 'B', 'C'};
    int cc1;
    int j;
    int cc2;
    int n [(626 - 623)];
    int a;
    int c;
    for (a = (793 - 792); (776 - 773) >= a; a++)
        for (b = (269 - 268); (240 - 237) >= b; b++)
            for (c = (938 - 937); 3 >= c; c++) {
                cc1 = (a > b) + (!(a != c));
                cc2 = (b > a) + (c > a);
                cc3 = (b > c) + (a > b);
                if ((cc1 + (618 - 617)) == a && (cc2 + (497 - 496)) == b && (cc3 + 1) == c) {
                    n[(158 - 158)] = a;
                    n[1] = b;
                    n[(804 - 802)] = c;
                }
            }
    for (i = (318 - 318); i <= 1; i++)
        for (j = 0; j <= 1 - i; j++) {
            if (n[j] < n[j + 1]) {
                k = n[j];
                n[j] = n[j + 1];
                n[j + 1] = k;
                D = m[j];
                m[j] = m[j + 1];
                m[j + 1] = D;
            }
        }
    cout << m[0] << m[1] << m[2] << endl;
    return 0;
}

