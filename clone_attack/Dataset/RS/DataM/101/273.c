int main () {
    int A = 0, B = 0, C = 0;
    for (A = 1; A <= 3; A = A +1)
        for (B = 1; B <= 3; B = B +1) {
            C = 1;
            while (3 >= C) {
                if (A > B &&B > C) {
                    if (((A > B) + (C < A)) > ((A < B) + (C == A)) && ((B < C) + (B > A)) > ((A > B) + (C < A)))
                        cout << "CBA" << endl;
                }
                else if (A > C &&C > B) {
                    if (((B > A) + (C == A)) < ((B < C) + (B > A)) && ((B < C) + (B > A)) < ((A > B) + (A > C)))
                        cout << "BCA" << endl;
                }
                else if (B > A &&A > C) {
                    if (((A > B) + (A > C)) < ((B > A) + (C == A)) && ((B > A) + (C == A)) < ((C > B) + (B > A)))
                        cout << "CAB" << endl;
                }
                else if (B > C &&C > A) {
                    if (((C > B) + (B > A)) > ((A > B) + (A > C)) && ((C > B) + (B > A)) < ((B > A) + (C == A)))
                        cout << "ACB" << endl;
                }
                else if (C > A &&A > B) {
                    if (((C > B) + (B > A)) < ((B > A) + (C == A)) && ((B > A) + (C == A)) < ((A > B) + (A > C)))
                        cout << "BAC" << endl;
                }
                else if (C > B &&B > A) {
                    if (((C > B) + (B > A)) < ((A > B) + (A > C)) && ((A > B) + (A > C)) < ((B > A) + (C == A)))
                        cout << "ABC" << endl;
                }
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int temp = 0;
                        while (temp < 10) {
                            printf ("%d\n", temp);
                            temp = temp + 1;
                            if (temp == 9)
                                break;
                        }
                    }
                }
                C = C +1;
            };
        }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    return 0;
}

