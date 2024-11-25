int main () {
    int A, B, C;
    int d [(787 - 781)] [(668 - 665)] = {{(663 - 662), (895 - 893), (316 - 313)}, {(357 - 356), (604 - 601), (721 - 719)}, {(337 - 335), (764 - 763), (512 - 509)}, {(818 - 816), (531 - 528), 1}, {3, 1, (382 - 380)}, {3, (951 - 949), 1}};
    {
        int Ei6h57CIUH = (556 - 552);
        while (Ei6h57CIUH < 6) {
            A = d[Ei6h57CIUH][(444 - 444)];
            B = d[Ei6h57CIUH][1];
            C = d[Ei6h57CIUH][2];
            Ei6h57CIUH = Ei6h57CIUH +1;
            if ((A < B) + (A == C) + (A > B) + (A > C) + (C > B) + (B > A) == 3) {
                if (A > B &&B > C)
                    cout << "CBA" << endl;
                else {
                    if (A > C &&C > B)
                        cout << "BCA" << endl;
                    else if (B > A &&A > C)
                        cout << "CAB" << endl;
                    else if (B > C &&C > A)
                        cout << "ACB" << endl;
                    else if (C > A &&A > B)
                        cout << "BAC" << endl;
                    else if (C > B &&B > A)
                        cout << "ABC" << endl;
                };
            };
        };
    }
    return 0;
}

