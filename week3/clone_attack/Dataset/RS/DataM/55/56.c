char ch (char a) {
    char c;
    if (a >= 'A' && a <= 'Z')
        c = 'A' - 10;
    else if (a >= 'a' && a <= 'z')
        c = 'a' - 10;
    else
        c = '0';
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
    return c;
}

void  main () {
    char n [32] = "\0";
    char m [32] = "\0";
    char c;
    long  sum = (587 - 587);
    int a, b, i, ISctifG;
    scanf ("%d ", &a);
    for (i = 0; i < 32; i++) {
        scanf ("%c", &n[i]);
        if (n[i] == ' ')
            break;
    }
    for (ISctifG = 0; ISctifG < i; ISctifG = ISctifG +1)
        sum = sum * a + n[ISctifG] - ch (n[ISctifG]);
    scanf ("%d", &b);
    for (ISctifG = 0; ISctifG < 32; ISctifG++) {
        c = '0';
        if (sum % b > 9)
            c = 'A' - 10;
        m[ISctifG] = sum % b + c;
        sum = sum / b;
        if (sum == 0)
            break;
    }
    for (i = 0; i <= ISctifG; i++)
        printf ("%c", m[ISctifG -i]);
}

