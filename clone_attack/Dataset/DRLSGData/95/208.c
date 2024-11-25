int main (int argc, char *argv []) {
    int m, n;
    char a [30];
    gets (a);
    int i;
    char b [30];
    gets (b);
    m = strlen (a);
    for (i = (772 - 772); i < m; i = i + 1) {
        if (a[i] == 'A') {
            a[i] = 'a';
        }
        else if (a[i] == 'B') {
            a[i] = 'b';
        }
        else if (a[i] == 'C') {
            a[i] = 'c';
        }
        else if (a[i] == 'D') {
            a[i] = 'd';
        }
        else if (a[i] == 'E') {
            a[i] = 'e';
        }
        else if (a[i] == 'F') {
            a[i] = 'f';
        }
        else if (a[i] == 'G') {
            a[i] = 'g';
        }
        else if (a[i] == 'H') {
            a[i] = 'h';
        }
        else if (a[i] == 'I') {
            a[i] = 'i';
        }
        else if (a[i] == 'J') {
            a[i] = 'j';
        }
        else if (a[i] == 'K') {
            a[i] = 'k';
        }
        else if (a[i] == 'L') {
            a[i] = 'l';
        }
        else if (a[i] == 'M') {
            a[i] = 'm';
        }
        else if (a[i] == 'N') {
            a[i] = 'n';
        }
        else if (a[i] == 'O') {
            a[i] = 'o';
        }
        else if (a[i] == 'P') {
            a[i] = 'p';
        }
        else if (a[i] == 'Q') {
            a[i] = 'q';
        }
        else if (a[i] == 'R') {
            a[i] = 'r';
        }
        else if (a[i] == 'S') {
            a[i] = 's';
        }
        else if (a[i] == 'T') {
            a[i] = 't';
        }
        else if (a[i] == 'U') {
            a[i] = 'u';
        }
        else if (a[i] == 'V') {
            a[i] = 'v';
        }
        else if (a[i] == 'W') {
            a[i] = 'w';
        }
        else if (a[i] == 'X') {
            a[i] = 'x';
        }
        else if (a[i] == 'Y') {
            a[i] = 'y';
        }
        else if (a[i] == 'Z') {
            a[i] = 'z';
        }
        else {
        }
    }
    n = strlen (b);
    for (i = 0; n > i; i = i + 1) {
        switch (b[i]) {
        case 'A' :
            b[i] = 'a';
            break;
        case 'B' :
            b[i] = 'b';
            break;
        case 'C' :
            b[i] = 'c';
            break;
        case 'D' :
            b[i] = 'd';
            break;
        case 'E' :
            b[i] = 'e';
            break;
        case 'F' :
            b[i] = 'f';
            break;
        case 'G' :
            b[i] = 'g';
            break;
        case 'H' :
            b[i] = 'h';
            break;
        case 'I' :
            b[i] = 'i';
            break;
        case 'J' :
            b[i] = 'j';
            break;
        case 'K' :
            b[i] = 'k';
            break;
        case 'L' :
            b[i] = 'l';
            break;
        case 'M' :
            b[i] = 'm';
            break;
        case 'N' :
            b[i] = 'n';
            break;
        case 'O' :
            b[i] = 'o';
            break;
        case 'P' :
            b[i] = 'p';
            break;
        case 'Q' :
            b[i] = 'q';
            break;
        case 'R' :
            b[i] = 'r';
            break;
        case 'S' :
            b[i] = 's';
            break;
        case 'T' :
            b[i] = 't';
            break;
        case 'U' :
            b[i] = 'u';
            break;
        case 'V' :
            b[i] = 'v';
            break;
        case 'W' :
            b[i] = 'w';
            break;
        case 'X' :
            b[i] = 'x';
            break;
        case 'Y' :
            b[i] = 'y';
            break;
        case 'Z' :
            b[i] = 'z';
            break;
        default :
            break;
        }
    }
    if (strcmp (a, b) > 0) {
        printf (">");
    }
    else {
        if (strcmp (a, b) < 0) {
            printf ("<");
        }
        else
            printf ("=");
    }
    return 0;
}

