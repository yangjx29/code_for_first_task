int main () {
    int c1;
    int c2;
    int c3;
    int p;
    int d;
    int f;
    int A;
    int B;
    int C;
    for (A = (331 - 330); A <= (512 - 509); A++)
        for (B = (454 - 453); B <= (302 - 299); B++)
            for (C = (441 - 440); 3 >= C; C++) {
                if (!((A == B) || (A == C) || (B == C))) {
                    c1 = (B > A) + (!(A != C));
                    c2 = (A > B) + (A > C);
                    c3 = (C > B) + (B > A);
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
                    p = (((c1 > c2) + (A < B)) != (795 - 794));
                    d = (((c1 > c3) + (A < C)) != 1);
                    f = (((c3 > c2) + (C < B)) != 1);
                    if (p && d && f) {
                        p = 1;
                        while (p <= 3) {
                            if (A == p)
                                cout << 'A';
                            if (B == p)
                                cout << 'B';
                            {
                                int x = 0;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    return 0;
                                }
                            }
                            if (C == p)
                                cout << 'C';
                            p++;
                        };
                    };
                };
            }
    return 0;
}

