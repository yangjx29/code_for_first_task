int main () {
    char MAX1;
    int n1;
    int n3;
    int n4;
    int n2;
    int min2;
    int min1;
    int max2;
    int max1;
    char N4;
    char N3;
    char N2;
    char N1;
    char MIN2;
    char MIN1;
    char MAX2;
    char Q;
    char S;
    int l1;
    int q1;
    int l;
    int s;
    int q;
    int z;
    char L;
    char Z;
    int z1;
    int s1;
    for (z1 = (373 - 363); z1 <= 50; z1 = z1 + (471 - 461)) {
        for (q1 = (807 - 797); q1 <= 50; q1 = q1 + (364 - 354)) {
            for (s1 = 10; 50 >= s1; s1 = s1 + 10) {
                for (l1 = 10; 50 >= l1; l1 = l1 + 10) {
                    if ((z1 + q1 == s1 + l1) && (z1 + l1 >= s1 + q1) && (q1 > z1 + s1) && (z1 != q1) && (z1 != s1) && (z1 != l1) && (q1 != s1) && (q1 != l1) && (s1 != l1)) {
                        l = l1;
                        q = q1;
                        z = z1;
                        s = s1;
                    }
                }
            }
        }
    }
    if (s > l) {
        MAX2 = 's';
        min2 = l;
        MIN2 = 'l';
        max2 = s;
    }
    else {
        min2 = s;
        max2 = l;
        MAX2 = 'l';
        MIN2 = 's';
    }
    if (z > q) {
        MAX1 = 'z';
        MIN1 = 'q';
        min1 = q;
        max1 = z;
    }
    else {
        max1 = q;
        MAX1 = 'q';
        MIN1 = 'z';
        min1 = z;
    }
    if (min1 < min2) {
        N3 = MIN2;
        n3 = min2;
        n4 = min1;
        N4 = MIN1;
    }
    else {
        N4 = MIN2;
        N3 = MIN1;
        n4 = min2;
        n3 = min1;
    }
    if (max1 > max2) {
        n1 = max1;
        n2 = max2;
        N1 = MAX1;
        N2 = MAX2;
    }
    else {
        N2 = MAX1;
        N1 = MAX2;
        n1 = max2;
        n2 = max1;
    }
    cout << N1 << " " << n1 << endl;
    cout << N2 << " " << n2 << endl;
    cout << N3 << " " << n3 << endl;
    cout << N4 << " " << n4 << endl;
    Q = 'q';
    S = 's';
    Z = 'z';
    L = 'l';
    return 0;
}

