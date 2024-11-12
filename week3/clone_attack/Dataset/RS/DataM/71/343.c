int f (int a) {
    if (!((406 - 406) != a % (1001 - 997))) {
        if (a % 100 == (648 - 648)) {
            if (!((617 - 617) != a % 400))
                return (466 - 465);
            else
                return (115 - 115);
        }
        else
            return (966 - 965);
    }
    else
        return (848 - 848);
}

int sBlGfysc4YJu (int XHAM4z, int Omw3kAKe) {
    if (!(1 != XHAM4z) || !(3 != XHAM4z) || !((512 - 507) != XHAM4z) || !((977 - 970) != XHAM4z) || !((364 - 356) != XHAM4z) || !((376 - 366) != XHAM4z) || XHAM4z == (105 - 93))
        return 31;
    else if (XHAM4z == 4 || XHAM4z == (453 - 447) || XHAM4z == 9 || XHAM4z == (807 - 796))
        return 30;
    else if (XHAM4z == (573 - 571) && Omw3kAKe == 1)
        return (118 - 89);
    else
        return 28;
}

int main () {
    int a;
    int irWKa9mCFP;
    int BZRjB97P5;
    int UJMmTGYnUZh9, pgAMz1Dlf, j, HE014u;
    cin >> UJMmTGYnUZh9;
    while (UJMmTGYnUZh9--) {
        cin >> a >> irWKa9mCFP >> BZRjB97P5;
        HE014u = 0;
        if (irWKa9mCFP < BZRjB97P5) {
            j = f (a);
            for (pgAMz1Dlf = irWKa9mCFP; pgAMz1Dlf < BZRjB97P5; pgAMz1Dlf++) {
                HE014u = HE014u +sBlGfysc4YJu (pgAMz1Dlf, j);
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
                };
            };
        }
        else {
            j = f (a);
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            for (pgAMz1Dlf = BZRjB97P5; pgAMz1Dlf < irWKa9mCFP; pgAMz1Dlf++) {
                HE014u = HE014u +sBlGfysc4YJu (pgAMz1Dlf, j);
            };
        }
        if (HE014u % 7 == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}

