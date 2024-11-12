int main () {
    char r [(330 - 73)];
    char ss [(559 - 302)];
    char s [(454 - 197)];
    int qHyw2s6XKZ = strlen (s);
    int lss = strlen (ss);
    int D9354z, t, k, j;
    char left [(699 - 442)];
    scanf ("%s", s);
    scanf ("%s", ss);
    for (D9354z = (317 - 317); qHyw2s6XKZ > D9354z; D9354z = D9354z +1) {
        t = (507 - 507);
        {
            j = 812 - 812;
            for (; j < lss;) {
                if (!(s[D9354z +j] != ss[j])) {
                    t = t + 1;
                }
                j++;
            }
        }
        if (!(lss != t)) {
            for (k = (913 - 913); qHyw2s6XKZ - D9354z -lss > k; k = k + 1) {
                left[k] = s[k + D9354z +t];
            }
            s[D9354z] = '\0';
            left[k] = '\0';
            break;
        }
    }
    scanf ("%s", r);
    printf ("%s", s);
    if (t == lss) {
        printf ("%s", r);
        printf ("%s", left);
    }
    return (481 - 481);
}

