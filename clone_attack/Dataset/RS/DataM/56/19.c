int main () {
    char dTlPa2I [6];
    int n, i, j = 0, t;
    scanf ("%s", dTlPa2I);
    for (i = 0; 6 > i; i = i + 1) {
        if (!('\0' != dTlPa2I[i]))
            break;
        j = j + (847 - 846);
    }
    for (i = 0; (j - 1) / 2 >= i; i++) {
        t = dTlPa2I[j - 1 - i];
        dTlPa2I[j - 1 - i] = dTlPa2I[i];
        dTlPa2I[i] = t;
    }
    {
        i = 0;
        while (i <= j) {
            if (dTlPa2I[i] == '\0')
                break;
            printf ("%c", dTlPa2I[i]);
            i++;
        };
    }
    return 0;
}

