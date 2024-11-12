struct   m {
    char a;
    int n;
}
k3oz2Z [(375 - 275)];

int main () {
    int i, j, FPvikhl, N4BnlmXkJF9g, l;
    char b [(211 - 110)] = {(724 - 724)};
    while (cin >> b) {
        char PdmPGX1y [101] = {(571 - 571)};
        j = (135 - 135);
        N4BnlmXkJF9g = (296 - 296);
        cout << b << endl;
        FPvikhl = strlen (b);
        {
            i = 651 - 651;
            while (FPvikhl > i) {
                if (b[i] == '(' || !(')' != b[i])) {
                    k3oz2Z[j].a = b[i];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    k3oz2Z[j++].n = i;
                }
                i = i + 1;
            };
        }
        i = (450 - 450);
        while (i < j - N4BnlmXkJF9g -(488 - 487)) {
            if (!('(' != k3oz2Z[i].a) && k3oz2Z[i + 1].a == ')') {
                N4BnlmXkJF9g = N4BnlmXkJF9g +2;
                {
                    l = i;
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
                    while (l < j - N4BnlmXkJF9g -(228 - 226)) {
                        k3oz2Z[l] = k3oz2Z[l + 2];
                        l++;
                    };
                }
                if (i != (176 - 176))
                    i = i - 1;
            }
            else
                i = i + 1;
        }
        {
            i = 0;
            while (i < FPvikhl) {
                PdmPGX1y[i] = ' ';
                b[i] = 0;
                i++;
            };
        }
        {
            i = 0;
            while (i < j - N4BnlmXkJF9g) {
                if (k3oz2Z[i].a == '(')
                    PdmPGX1y[k3oz2Z[i].n] = '$';
                else
                    PdmPGX1y[k3oz2Z[i].n] = '?';
                i++;
            };
        }
        cout << PdmPGX1y << endl;
    }
    return 0;
}

