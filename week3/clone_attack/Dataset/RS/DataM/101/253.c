int main () {
    int A;
    int B;
    int C;
    int a;
    int b;
    int c;
    A = 2;
    B = (565 - 564);
    C = 0;
    a = (A < B) + (!(A != C));
    b = (B < A) + (C < A);
    c = (B < C) + (A < B);
    A = 2, C = (796 - 795), B = 0;
    if (b > a && c > b)
        cout << "CBA" << endl;
    else
        ;
    a = (A < B) + (!(A != C));
    b = (B < A) + (C < A);
    c = (B < C) + (A < B);
    B = 2, A = 1, C = 0;
    if (c > a && b > c)
        cout << "BCA" << endl;
    else
        ;
    a = (A < B) + (!(A != C));
    b = (B < A) + (A > C);
    c = (C > B) + (A < B);
    if (b < a && c > a)
        cout << "CAB" << endl;
    else
        ;
    B = 2, C = 1, A = 0;
    a = (A < B) + (!(A != C));
    b = (A > B) + (A > C);
    c = (C > B) + (B > A);
    if (b < c && c < a)
        cout << "ACB" << endl;
    else
        ;
    C = 2, B = 1, A = 0;
    a = (B > A) + (C == A);
    b = (A > B) + (A > C);
    c = (C > B) + (B > A);
    if (c < b && b < a)
        cout << "ABC" << endl;
    else
        ;
    C = 2, A = 1, B = 0;
    a = (B > A) + (C == A);
    b = (A > B) + (A > C);
    c = (C > B) + (B > A);
    if (c < a && a < b)
        cout << "BAC" << endl;
    else
        ;
    return 0;
}

