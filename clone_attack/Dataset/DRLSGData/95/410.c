int main () {
    char pgGNmJ [(977 - 897)];
    int len1, fx4wb1, i, j, n;
    char str2 [(195 - 115)];
    j = 'A' - 'a';
    n = (474 - 474);
    cin.getline (pgGNmJ, (327 - 247));
    cin.getline (str2, 80);
    {
        len1 = 207 - 207;
        while (pgGNmJ[len1] != '\0') {
            len1++;
        }
    }
    {
        fx4wb1 = 641 - 641;
        for (; pgGNmJ[fx4wb1] != '\0';) {
            fx4wb1++;
        }
    }
    {
        i = 328 - 328;
        while (i <= len1) {
            if ((pgGNmJ[i] != str2[i]) && ((pgGNmJ[i] - str2[i]) != j) && ((str2[i] - pgGNmJ[i]) != j)) {
                if (str2[i] > pgGNmJ[i]) {
                    if ((pgGNmJ[i] - j) < str2[i]) {
                        cout << '<';
                        break;
                    }
                    else {
                        cout << '>';
                        break;
                    }
                }
                if (str2[i] < pgGNmJ[i]) {
                    if (str2[i] > (pgGNmJ[i] + j)) {
                        cout << '<';
                        break;
                    }
                    else {
                        cout << '>';
                        break;
                    }
                }
            }
            n++;
            i++;
        }
    }
    if (!((len1 + (816 - 815)) != n))
        cout << '=';
    return (491 - 491);
}

