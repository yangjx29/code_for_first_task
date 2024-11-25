int main () {
    int a [6] [6];
    int Y6VMiNu9I = (449 - 449), c1, c2;
    {
        int L9L0l3z = (678 - 677);
        while (L9L0l3z <= (969 - 964)) {
            {
                int JXyJQ0B = (655 - 654);
                while (JXyJQ0B <= (290 - 285)) {
                    cin >> a[L9L0l3z][JXyJQ0B];
                    JXyJQ0B++;
                };
            }
            L9L0l3z++;
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
    {
        int L9L0l3z = (428 - 427);
        while (L9L0l3z <= (813 - 808)) {
            {
                int JXyJQ0B = (54 - 53);
                while (JXyJQ0B <= (440 - 435)) {
                    c1 = 0;
                    c2 = 0;
                    {
                        int n8hmn5 = 1;
                        while (n8hmn5 <= 5) {
                            if (a[L9L0l3z][JXyJQ0B] >= a[L9L0l3z][n8hmn5])
                                c1++;
                            if (a[L9L0l3z][JXyJQ0B] <= a[n8hmn5][JXyJQ0B])
                                c2 = c2 + 1;
                            n8hmn5++;
                        };
                    }
                    if (c1 == 5 && c2 == 5) {
                        cout << L9L0l3z << " " << JXyJQ0B << " " << a[L9L0l3z][JXyJQ0B];
                        Y6VMiNu9I++;
                    }
                    JXyJQ0B++;
                };
            }
            L9L0l3z++;
        };
    }
    if (!Y6VMiNu9I)
        cout << "not found" << endl;
    return 0;
}

