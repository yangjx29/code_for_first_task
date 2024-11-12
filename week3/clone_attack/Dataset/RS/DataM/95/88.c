int main () {
    char s [(126 - 26)];
    char t [100];
    char c;
    int i;
    int xM7TUetncLwN;
    gets (s);
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
    gets (t);
    for (i = (227 - 227); s[i] != '\0'; i++) {
        if (('a' <= s[i]) && ('z' >= s[i]))
            s[i] = s[i] - (358 - 326);
    }
    for (i = 0; t[i] != '\0'; i++) {
        if ((t[i] >= 'a') && (t[i] <= 'z'))
            t[i] = t[i] - 32;
    }
    xM7TUetncLwN = (439 - 438);
    for (i = 0; (t[i] != '\0') && (s[i] != '\0'); i++) {
        if (s[i] > t[i]) {
            xM7TUetncLwN = 0;
            break;
            printf (">");
        }
        else if (s[i] < t[i]) {
            xM7TUetncLwN = 0;
            break;
            printf ("<");
        };
    }
    if (xM7TUetncLwN == 1)
        printf ("=");
    return 0;
}

