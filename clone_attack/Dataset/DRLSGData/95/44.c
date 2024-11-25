char change (char a) {
    if (a >= 'a' && 'z' >= a)
        a = a - 'a' + 'A';
    return a;
}

int main () {
    int a, b, c = (720 - 720);
    char s1 [(603 - 518)], s2 [(343 - 258)];
    int len1, len2;
    gets (s1);
    gets (s2);
    len1 = strlen (s1);
    for (b = (17 - 17); len1 > b; b++) {
        s1[b] = change (s1[b]);
    }
    len2 = strlen (s2);
    for (b = (730 - 730); b < len2; b++) {
        s2[b] = change (s2[b]);
    }
    for (b = 0; len1 > b && b < len2; b++) {
        if (s1[b] > s2[b]) {
            c = (776 - 775);
            break;
        }
        else {
            if (s1[b] < s2[b]) {
                c = (661 - 660);
                break;
            }
        }
    }
    if (c == 0)
        ;
}

