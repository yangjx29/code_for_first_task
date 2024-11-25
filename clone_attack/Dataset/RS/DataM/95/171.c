int lwr (char *a) {
    for (; !('\0' == *a); a++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        switch (*a) {
        case 'A' :
            *a = 'a';
            break;
        case 'B' :
            *a = 'b';
            break;
        case 'C' :
            *a = 'c';
            break;
        case 'D' :
            *a = 'd';
            break;
        case 'E' :
            *a = 'e';
            break;
        case 'F' :
            *a = 'f';
            break;
        case 'G' :
            *a = 'g';
            break;
        case 'H' :
            *a = 'h';
            break;
        case 'I' :
            *a = 'i';
            break;
        case 'J' :
            *a = 'j';
            break;
        case 'K' :
            *a = 'k';
            break;
        case 'L' :
            *a = 'l';
            break;
        case 'M' :
            *a = 'm';
            break;
        case 'N' :
            *a = 'n';
            break;
        case 'O' :
            *a = 'o';
            break;
        case 'P' :
            *a = 'p';
            break;
        case 'Q' :
            *a = 'q';
            break;
        case 'R' :
            *a = 'r';
            break;
        case 'S' :
            *a = 's';
            break;
        case 'T' :
            *a = 't';
            break;
        case 'U' :
            *a = 'u';
            break;
        case 'V' :
            *a = 'v';
            break;
        case 'W' :
            *a = 'w';
            break;
        case 'X' :
            *a = 'x';
            break;
        case 'Y' :
            *a = 'y';
            break;
        case 'Z' :
            *a = 'z';
            break;
        };
    }
    return 0;
}

int main (int argc, char *argv []) {
    int a;
    char yZm7QjKnJ [(274 - 192)];
    char str2 [82];
    char chu;
    gets (yZm7QjKnJ);
    lwr (yZm7QjKnJ);
    gets (str2);
    lwr (str2);
    a = strcmp (yZm7QjKnJ, str2);
    if (a > 0)
        chu = '>';
    else if (a < 0)
        chu = '<';
    else
        chu = '=';
    printf ("%c\n", chu);
    return 0;
}

