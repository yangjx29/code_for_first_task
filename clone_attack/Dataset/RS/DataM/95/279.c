int main () {
    int PFHoZ9eVu;
    PFHoZ9eVu = 0;
    char s1 [100];
    char s2 [100];
    gets (s1);
    gets (s2);
    int i;
    int j;
    int vuI8RcEz;
    for (i = 0; strlen (s1) >= i && strlen (s2) >= i; i++) {
        if (!(32 != s1[i] - s2[i]) || !(32 != s2[i] - s1[i]))
            continue;
        if (97 <= s1[i])
            s1[i] = s1[i] - 32;
        if (s2[i] >= 97)
            s2[i] = s2[i] - 32;
        if ((int) (s1[i] - s2[i]) > 0) {
            PFHoZ9eVu = 1;
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
            break;
        }
        if ((int) (s1[i] - s2[i]) < 0) {
            PFHoZ9eVu = -1;
            break;
        };
    }
    if (PFHoZ9eVu == 0)
        cout << "=";
    if (PFHoZ9eVu == 1)
        cout << ">";
    if (PFHoZ9eVu == -1)
        cout << "<";
    return 0;
}

