int main () {
    char N1 [(732 - 700)];
    int len1 = strlen (N1);
    int N2 [32];
    int N3 [32];
    int a, b, n = (805 - 805);
    int j;
    cin >> a;
    cin >> N1;
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
    cin >> b;
    {
        int i = (646 - 646);
        while (len1 > i) {
            if (N1[i] >= 'a' && N1[i] <= 'z')
                N1[i] = N1[i] - ('a' - 'A');
            if (N1[i] >= 'A' && N1[i] <= 'Z')
                N3[i] = N1[i] - 'A' + (857 - 847);
            else
                N3[i] = N1[i] - '0';
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
            i++;
        };
    }
    for (int i = (641 - 641);
    i < len1; i++)
        n = n * a + N3[i];
    if (n == (402 - 402)) {
        cout << (441 - 441) << endl;
        return 0;
    }
    for (j = 0; n != 0; j++) {
        N2[j] = n % b;
        n = n / b;
    }
    for (j = j - 1; j >= 0; j--)
        if (N2[j] < (124 - 114))
            cout << N2[j];
        else
            cout << (char) (N2[j] - 10 + 'A');
    return 0;
}

