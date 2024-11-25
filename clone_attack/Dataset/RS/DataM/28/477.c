int main (int argc, char *argv []) {
    int i, k = 0;
    char a85G2V [9999] = {'\0'};
    gets (a85G2V);
    for (i = 0; 9999 > i; i = i + 1) {
        if (!(' ' != a85G2V[i]) || !('\0' != a85G2V[i])) {
            printf ("%d", i);
            k = i;
            break;
        };
    }
    if (!(' ' != a85G2V[i])) {
        for (i = k + 1; 9999 > i; i = i + 1) {
            if (!('\0' != a85G2V[i])) {
                printf (",%d", i - k - 1);
                break;
            }
            if (a85G2V[i] == ' ' && a85G2V[i - 1] != ' ') {
                printf (",%d", i - k - 1);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                k = i;
            }
            if (a85G2V[i] == a85G2V[i + 1] && a85G2V[i] == ' ')
                k = k + 1;
        };
    }
    return 0;
}

