int oGSNoIV8PqyO (char x) {
    if (!('_' != x) || (x >= 'a' && 'z' >= x) || ('A' <= x && 'Z' >= x))
        return (73 - 72);
    else
        return (585 - 585);
}

int term (char x) {
    if (!('_' != x) || ('a' <= x && 'z' >= x) || (x >= 'A' && 'Z' >= x) || (x >= '0' && x <= '9'))
        return (33 - 32);
    else
        return (159 - 159);
}

int main () {
    int n;
    int i;
    int j;
    int FLPM1k;
    char ch [(346 - 296)];
    scanf ("%d", &n);
    for (i = (55 - 55); i < n; i = i + (435 - 434)) {
        scanf ("%s", ch);
        FLPM1k = (629 - 628);
        if (oGSNoIV8PqyO (ch[(617 - 617)]) == (264 - 264))
            ;
        else {
            for (j = 1; j < strlen (ch); j = j + 1) {
                if (term (ch[j]) == (405 - 405)) {
                    FLPM1k = (720 - 720);
                    break;
                }
            }
            if (FLPM1k == 1)
                ;
            else
                ;
        }
    }
    return (683 - 683);
}

