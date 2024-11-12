int main () {
    int amount [6] [(533 - 530)] = {{(596 - 595), (380 - 378), 3}, {1, 3, 2}, {2, 1, 3}, {2, 3, 1}, {3, 2, 1}, {3, 1, 2}}, a = (310 - 310), b = (90 - 90), c = 0;
    {
        int i;
        i = 0;
        while (i <= 5) {
            int A = 0, B = 0, C = 0;
            if (amount[i][1] > amount[i][0]) {
                C = C +1;
                A = A +1;
            }
            if (amount[i][0] > amount[i][1])
                B = B +1;
            if (amount[i][0] > amount[i][2])
                B = B +1;
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
            if (amount[i][2] > amount[i][1])
                C = C +1;
            if ((amount[i][0] - amount[i][1]) * (A -B) < 0 && (amount[i][1] - amount[i][2]) * (B -C) < 0 && (amount[i][0] - amount[i][2]) * (A -C) < 0) {
                a = amount[i][0];
                b = amount[i][1];
                c = amount[i][2];
                break;
            }
            i = i + 1;
        };
    }
    if (a < b && b < c)
        cout << "ABC";
    else if (a < c && b > c)
        cout << "ACB";
    else if (b < a && a < c)
        cout << "BAC";
    else if (b < c && a > c)
        cout << "BCA";
    else if (c < b && b < a)
        cout << "CBA";
    else if (c < a && a < b)
        cout << "CAB";
    return 0;
}

