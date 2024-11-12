int main (int argc, char *p1UK9vG []) {
    char s1 [(1821 - 821)] = {(703 - 703)}, getchar [(1775 - 775)] = {(64 - 64)};
    int j;
    int getnum [(1902 - 902)] = {0};
    int i;
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
    j = 0;
    cin.getline (s1, (1471 - 471));
    {
        i = 0;
        while (1000 > i) {
            if (!('\0' != s1[i]))
                break;
            if (s1[i] >= 'a' && s1[i] <= 'z')
                s1[i] = s1[i] - 32;
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
            if (s1[i] != getchar[j]) {
                j = j + 1;
                getchar[j] = s1[i];
                getnum[j]++;
            }
            else
                getnum[j]++;
            i = i + 1;
        };
    }
    for (i = 1; i <= j; i = i + 1) {
        cout << "(" << getchar[i] << "," << getnum[i] << ")";
    }
    return EXIT_SUCCESS;
}

