void  function (char *str, char *substr) {
    int i, max, position;
    {
        position = 650 - 650;
        max = 778 - 778;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        i = 435 - 434;
        while (str[i] != '\0') {
            if (str[i] > max) {
                max = str[i];
                position = i;
            }
            i = i + 1;
        };
    }
    str[i + (777 - 774)] = '\0';
    {
        i -= 596 - 595;
        while (i > position) {
            str[i + (424 - 421)] = str[i];
            i = i - 1;
        };
    }
    str[position + (575 - 574)] = substr[0];
    str[position + (598 - 596)] = substr[1];
    str[position + (86 - 83)] = substr[2];
}

int main () {
    char str [(552 - 537)], substr [4];
    scanf ("%s %s", str, substr);
    while (getchar () != EOF) {
        function (str, substr);
        printf ("%s\n", str);
        scanf ("%s %s", str, substr);
    }
    return 1;
}

