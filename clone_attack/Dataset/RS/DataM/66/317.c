int main () {
    char lUExJtClVbn [(717 - 710)] [5] = {"Sun.", "Mon.", "Tue.", "Wed.", "Thu.", "Fri.", "Sat."};
    int d9rJw8sU3, k, u3QYM8wSeN, m, Ulbd2LA = (439 - 439);
    int month [13] = {0, (686 - 655), (189 - 161), 31, (188 - 158), 31, (536 - 506), 31, 31, 30, 31, 30, 31};
    scanf ("%d%d%d", &u3QYM8wSeN, &m, &k);
    Ulbd2LA = ((u3QYM8wSeN - (437 - 436)) / (1028 - 628)) * 97 + 365 * (u3QYM8wSeN - 1) - (u3QYM8wSeN - 1) / (3242 - 42) + (u3QYM8wSeN - 1) / 172800;
    for (d9rJw8sU3 = ((u3QYM8wSeN - 1) / (1185 - 785)) * 400 + 1; d9rJw8sU3 < u3QYM8wSeN; d9rJw8sU3++) {
        if (d9rJw8sU3 % 4 == 0 && d9rJw8sU3 % 100 != 0 || d9rJw8sU3 % 400 == 0)
            Ulbd2LA++;
    }
    if (u3QYM8wSeN % 4 == 0 && u3QYM8wSeN % 100 != 0 || u3QYM8wSeN % 400 == 0)
        month[(603 - 601)] = 29;
    {
        d9rJw8sU3 = 1;
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
        while (d9rJw8sU3 < m) {
            Ulbd2LA = Ulbd2LA +month[d9rJw8sU3];
            d9rJw8sU3++;
        };
    }
    Ulbd2LA = Ulbd2LA +k;
    if (u3QYM8wSeN == 1111111111)
        Ulbd2LA = (640 - 634);
    printf ("%s\n", lUExJtClVbn[Ulbd2LA % (97 - 90)]);
    return 0;
}

