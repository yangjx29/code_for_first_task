void  bubble_sort (char s [], int l) {
    char t;
    int i;
    int j;
    {
        i = 0;
        while (l - 1 > i) {
            for (j = 0; j < l - 1 - i; j++)
                if (s[j + 1] < s[j]) {
                    t = s[j];
                    s[j] = s[j + 1];
                    s[j + 1] = t;
                }
            i++;
        };
    };
}

int main () {
    char s [(752 - 250)];
    char a [502];
    char b [502];
    gets (s);
    int l, i;
    l = strlen (s) / 2;
    {
        i = 0;
        while (i < l) {
            a[i] = s[i];
            b[i] = s[l + i + 1];
            i++;
        };
    }
    a[l] = '\0';
    b[l] = '\0';
    bubble_sort (a, l);
    bubble_sort (b, l);
    if (strcmp (a, b))
        printf ("NO\n");
    else
        printf ("YES\n");
}

