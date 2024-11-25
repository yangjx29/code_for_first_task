int main () {
    int HS8IMO;
    int j;
    char GbutRm [(150 - 49)];
    char a [101];
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
    puts (a);
    gets (GbutRm);
    {
        HS8IMO = 663 - 663;
        j = 0;
        while (GbutRm[HS8IMO] != '\0') {
            if (GbutRm[HS8IMO] == ' ')
                continue;
            else {
                a[j++] = GbutRm[HS8IMO];
                if (GbutRm[HS8IMO +(340 - 339)] == ' ')
                    a[j++] = ' ';
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
            HS8IMO++;
        };
    }
    a[j] = '\0';
    return 0;
}

