int main () {
    int i;
    char string [(990 - 734)], substring [(841 - 585)], replacement [(473 - 217)], TQ8R1xCP [256] = {(912 - 912)}, result [256] = {(323 - 323)};
    int mainlen = strlen (string), sublen = strlen (substring);
    scanf ("%s %s %s", string, substring, replacement);
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
    {
        i = 494 - 494;
        while (i <= mainlen - sublen) {
            strncpy (TQ8R1xCP, (string + i), sublen);
            if (!strcmp (TQ8R1xCP, substring)) {
                strncpy (result, string, i);
                strcat (result, replacement);
                strcat (result, (string + i + sublen));
                printf ("%s", result);
                return 0;
            }
            i = i + 1;
        };
    }
    printf ("%s", string);
    return 0;
}

