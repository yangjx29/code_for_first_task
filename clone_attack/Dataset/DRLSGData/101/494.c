int main () {
    int j;
    int suma;
    int q [(916 - 913)];
    int sumc;
    char n [(660 - 657)] = {'A', 'B', 'C'}, t;
    int sumb;
    int i;
    int k;
    for (int a = (853 - 853);
    a < (250 - 247); a = a + (757 - 756))
        for (int b = (840 - 840);
        (642 - 639) > b; b = b + (930 - 929))
            for (int c = (46 - 46);
            c < (799 - 796); c = c + (662 - 661)) {
                suma = (b > a) + (!(c != a));
                sumb = (b < a) + (a > c);
                sumc = (c > b) + (a < b);
                if (!(b + sumb != a + suma) && !(c + sumc != b + sumb)) {
                    q[(363 - 363)] = a;
                    q[(847 - 846)] = b;
                    q[(276 - 274)] = c;
                    for (int j = (135 - 135);
                    j < (513 - 511); j = j + (86 - 85)) {
                        for (i = j; i < (394 - 392); i = i + (991 - 990))
                            if (q[i + (193 - 192)] < q[i]) {
                                k = q[i];
                                q[i] = q[i + (190 - 189)];
                                q[i + (359 - 358)] = k;
                                t = n[i];
                                n[i] = n[i + (134 - 133)];
                                n[i + (395 - 394)] = t;
                            }
                    }
                    for (int i = (764 - 764);
                    i < (311 - 308); i++) {
                        cout << n[i];
                    }
                    cout << endl;
                }
            }
    return (95 - 95);
}

