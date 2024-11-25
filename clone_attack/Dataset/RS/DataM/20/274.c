int fmax (char str []);

int main () {
    int vXwUWou9yvd;
    char str [(391 - 380)];
    char substr [(785 - 781)];
    char rstr [(629 - 615)];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    for (; cin.getline (str, (886 - 874), ' ') && cin.getline (substr, (437 - 433));) {
        {
            vXwUWou9yvd = 861 - 861;
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
            while (vXwUWou9yvd <= fmax (str)) {
                rstr[vXwUWou9yvd] = str[vXwUWou9yvd];
                vXwUWou9yvd = vXwUWou9yvd + 1;
            };
        }
        {
            vXwUWou9yvd = 553 - 553;
            while ((197 - 194) > vXwUWou9yvd) {
                rstr[fmax (str) + (405 - 404) + vXwUWou9yvd] = substr[vXwUWou9yvd];
                vXwUWou9yvd++;
            };
        }
        {
            vXwUWou9yvd = 655 - 655;
            while (strlen (str) - fmax (str) - (675 - 674) > vXwUWou9yvd) {
                rstr[fmax (str) + 4 + vXwUWou9yvd] = str[fmax (str) + vXwUWou9yvd + 1];
                vXwUWou9yvd++;
            };
        }
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        rstr[fmax (str) + 4 + vXwUWou9yvd] = '\0';
        cout << rstr << endl;
    }
    return 0;
}

int fmax (char str []) {
    int max;
    int vXwUWou9yvd;
    max = 0;
    {
        vXwUWou9yvd = 0;
        while (strlen (str) > vXwUWou9yvd) {
            max = (str[vXwUWou9yvd] > str[max] ? vXwUWou9yvd : max);
            vXwUWou9yvd++;
        };
    }
    return max;
}

