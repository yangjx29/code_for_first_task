int wSFZeVyRrIT (char EuYKXOH []) {
    int l = strlen (EuYKXOH);
    {
        int i;
        i = l >> 1 - 1;
        while (i >= 0) {
            if (EuYKXOH[i] != EuYKXOH[l - i - 1])
                return 0;
            i--;
        };
    }
    return 1;
}

int main () {
    char EuYKXOH [10000];
    char p [10000];
    int l = strlen (EuYKXOH);
    cin >> EuYKXOH;
    {
        int vopZtTafzYy = 2;
        while (vopZtTafzYy < l) {
            {
                int i = 0;
                while (i < l - vopZtTafzYy + 1) {
                    memcpy (&p, &EuYKXOH[i], vopZtTafzYy);
                    i++;
                    p[vopZtTafzYy] = 0;
                    if (wSFZeVyRrIT (p))
                        cout << p << endl;
                };
            }
            vopZtTafzYy++;
        };
    }
    return 0;
}

