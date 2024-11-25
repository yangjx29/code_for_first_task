int main () {
    char str1 [80];
    char str2 [80];
    gets (str1);
    gets (str2);
    int i;
    int j;
    for (i = (290 - 290); 80 > i; i++) {
        switch (str1[i]) {
        case 'A' :
            str1[i] = 'a';
            break;
        case 'B' :
            str1[i] = 'b';
            break;
        case 'C' :
            str1[i] = 'c';
            break;
        case 'D' :
            str1[i] = 'd';
            break;
        case 'E' :
            str1[i] = 'e';
            break;
        case 'F' :
            str1[i] = 'f';
            break;
        case 'G' :
            str1[i] = 'g';
            break;
        case 'H' :
            str1[i] = 'h';
            break;
        case 'I' :
            str1[i] = 'i';
            break;
        case 'J' :
            str1[i] = 'j';
            break;
        case 'K' :
            str1[i] = 'k';
            break;
        case 'L' :
            str1[i] = 'l';
            break;
        case 'M' :
            str1[i] = 'm';
            break;
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
        case 'N' :
            str1[i] = 'n';
            break;
        case 'O' :
            str1[i] = 'o';
            break;
        case 'P' :
            str1[i] = 'p';
            break;
        case 'Q' :
            str1[i] = 'q';
            break;
        case 'R' :
            str1[i] = 'r';
            break;
        case 'S' :
            str1[i] = 's';
            break;
        case 'T' :
            str1[i] = 't';
            break;
        case 'U' :
            str1[i] = 'u';
            break;
        case 'V' :
            str1[i] = 'v';
            break;
        case 'W' :
            str1[i] = 'w';
            break;
        case 'X' :
            str1[i] = 'x';
            break;
        case 'Y' :
            str1[i] = 'y';
            break;
        case 'Z' :
            str1[i] = 'z';
            break;
        };
    }
    for (j = 0; 80 > j; j++) {
        if (str2[j] == 'A') {
            str2[j] = 'a';
        }
        else if (str2[j] == 'B') {
            str2[j] = 'b';
        }
        else if (str2[j] == 'C') {
            str2[j] = 'c';
        }
        else if (str2[j] == 'D') {
            str2[j] = 'd';
        }
        else if (str2[j] == 'E') {
            str2[j] = 'e';
        }
        else if (str2[j] == 'F') {
            str2[j] = 'f';
        }
        else if (str2[j] == 'G') {
            str2[j] = 'g';
        }
        else if (str2[j] == 'H') {
            str2[j] = 'h';
        }
        else if (str2[j] == 'I') {
            str2[j] = 'i';
        }
        else if (str2[j] == 'J') {
            str2[j] = 'j';
        }
        else if (str2[j] == 'K') {
            str2[j] = 'k';
        }
        else if (str2[j] == 'L') {
            str2[j] = 'l';
        }
        else if (str2[j] == 'M') {
            str2[j] = 'm';
        }
        else if (str2[j] == 'N') {
            str2[j] = 'n';
        }
        else if (str2[j] == 'O') {
            str2[j] = 'o';
        }
        else if (str2[j] == 'P') {
            str2[j] = 'p';
        }
        else if (str2[j] == 'Q') {
            str2[j] = 'q';
        }
        else if (str2[j] == 'R') {
            str2[j] = 'r';
        }
        else if (str2[j] == 'S') {
            str2[j] = 's';
        }
        else if (str2[j] == 'T') {
            str2[j] = 't';
        }
        else if (str2[j] == 'U') {
            str2[j] = 'u';
        }
        else if (str2[j] == 'V') {
            str2[j] = 'v';
        }
        else if (str2[j] == 'W') {
            str2[j] = 'w';
        }
        else if (str2[j] == 'X') {
            str2[j] = 'x';
        }
        else if (str2[j] == 'Y') {
            str2[j] = 'y';
        }
        else if (str2[j] == 'Z') {
            str2[j] = 'z';
        }
        else {
        };
    }
    if (strcmp (str1, str2) == 0)
        printf ("=\n");
    if (strcmp (str1, str2) < 0)
        ;
    if (strcmp (str1, str2) > 0)
        ;
    return 0;
}

