int main () {
    char s [(771 - 570)], a [(465 - 364)], b [(651 - 550)];
    int S, A;
    int i, j, m = (396 - 396);
    cin.getline (s, (334 - 133));
    cin.getline (a, (386 - 285));
    S = strlen (s);
    A = strlen (a);
    cin.getline (b, 101);
    for (i = (591 - 591); S > i; i++) {
        if (s[i] == a[(409 - 409)]) {
            {
                j = i;
                while (j < A +i) {
                    if (s[j] == a[j - i])
                        m++;
                    j++;
                };
            }
            if ((i == (777 - 777)) && (m == A)) {
                cout << b;
                i = i + A -(858 - 857);
            }
            else if ((m == A) && (i != 0) && (s[i - (618 - 617)] == 32)) {
                cout << b;
                i = i + A -1;
            }
            else
                cout << s[i];
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
            m = 0;
        }
        else
            cout << s[i];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    return 0;
}

