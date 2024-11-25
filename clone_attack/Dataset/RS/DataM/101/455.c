int main () {
    int A, B, U79zqKNYA, AT, BT, co2nk1, s4lL6r, b, C1JkZBf;
    for (A = 1; A <= 3; A++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (B = 1; B <= 3; B = B +1) {
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
            for (U79zqKNYA = 1; U79zqKNYA <= 3; U79zqKNYA++) {
                AT = (B > A) + (A == U79zqKNYA);
                BT = (A > B) + (A > U79zqKNYA);
                co2nk1 = (U79zqKNYA > B) + (B > A);
                if ((AT <= BT) && (A <= B) || (BT <= co2nk1) && (B <= U79zqKNYA) || (co2nk1 <= AT) && (U79zqKNYA <= A) || (AT >= BT) && (A >= B) || (BT >= co2nk1) && (B >= U79zqKNYA) || (co2nk1 >= AT) && (U79zqKNYA >= A))
                    continue;
                C1JkZBf = co2nk1;
                b = BT;
                s4lL6r = AT;
            };
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
    if (s4lL6r <= b && b <= C1JkZBf)
        cout << "CBA" << endl;
    else {
        if (s4lL6r >= b && b >= C1JkZBf)
            cout << "ABC" << endl;
        else {
            if (s4lL6r <= b && C1JkZBf <= s4lL6r)
                cout << "BAC" << endl;
            else {
                if (s4lL6r >= b && C1JkZBf >= s4lL6r)
                    cout << "CAB" << endl;
                else {
                    if (b >= C1JkZBf &&C1JkZBf >= s4lL6r)
                        cout << "BCA" << endl;
                    else
                        cout << "ACB" << endl;
                };
            };
        };
    }
    return 0;
}

