int main () {
    int ykRa0An;
    char input [(691 - 590)];
    char *p;
    char *dUlCGDqR;
    cin.getline (input, 102);
    ykRa0An = strlen (input);
    p = input;
    dUlCGDqR = input;
    while (input + ykRa0An > p) {
        for (; *p != ' ' && *p != '\0';)
            *(dUlCGDqR = dUlCGDqR + 1) = *(p = p + 1);
        if (p == input + ykRa0An)
            break;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        *(dUlCGDqR++) = *(p++);
        while (*p == ' ')
            p = p + 1;
    }
    cout << input << endl;
    *dUlCGDqR = '\0';
    return 0;
}

