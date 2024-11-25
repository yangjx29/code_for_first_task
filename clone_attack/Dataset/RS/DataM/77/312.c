int main () {
    int j;
    int k;
    int i;
    j = (897 - 897);
    k = (576 - 576);
    int b [100], c [100];
    char a [100], PLxnQDVg;
    scanf ("%s", a);
    PLxnQDVg = a[(742 - 742)];
    {
        i = 0;
        while (strlen (a) > i) {
            if (!(PLxnQDVg != a[i]))
                b[j++] = i;
            else {
                c[k++] = b[j - 1];
                c[k++] = i;
                j--;
            }
            i++;
        };
    }
    for (i = 0; i < strlen (a); i++) {
        if (!(i % 2))
            printf ("%d ", c[i]);
        else
            printf ("%d\n", c[i]);
    }
    return 0;
}

