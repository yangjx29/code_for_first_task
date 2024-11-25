int main () {
    int i, j, f;
    char s1 [100], s2 [100];
    scanf ("%s%s", s1, s2);
    {
        i = 0;
        while (strlen (s2) > i) {
            for (j = 0; strlen (s1) > j; j = j + 1)
                if (!(s2[i + j] == s1[j]))
                    break;
            if (j == strlen (s1))
                break;
            i++;
        };
    }
    printf ("%d\n", i);
    return 0;
}

