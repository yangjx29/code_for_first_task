int main () {
    int i;
    int yWKIFzTBP;
    int j;
    i = 0;
    yWKIFzTBP = 0;
    char s [100];
    char zfc [100] [100];
    char a [100];
    char b [100];
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
    gets (s);
    int GZBj6eszUn;
    GZBj6eszUn = strlen (s);
    for (j = 0; j <= GZBj6eszUn; j = j + 1) {
        if (s[j] == ' ' || s[j] == ',' || s[j] == '\0') {
            if (yWKIFzTBP != 0) {
                zfc[i][yWKIFzTBP] = '\0';
                i = i + 1;
            }
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
            yWKIFzTBP = 0;
        }
        else {
            zfc[i][yWKIFzTBP] = s[j];
            yWKIFzTBP = yWKIFzTBP + 1;
        };
    }
    scanf ("%s", a);
    scanf ("%s", b);
    for (j = 0; j < i - 1; j = j + 1) {
        if (strcmp (zfc[j], a) == 0)
            strcpy (zfc[j], b);
        printf ("%s ", zfc[j]);
    }
    if (strcmp (zfc[j], a) == 0) {
        strcpy (zfc[j], b);
    }
    printf ("%s\n", zfc[j]);
    return 0;
}

