char fy (char x) {
    char z;
    switch (x) {
    case 'T' :
        z = 'A';
        break;
    case 'A' :
        z = 'T';
        break;
    case 'G' :
        z = 'C';
        break;
    case 'C' :
        z = 'G';
        break;
    default :
        z = '\0';
    }
    return z;
}

int main (int argc, char *argv []) {
    int i, lyH4LY, j, k;
    char c;
    char a [(585 - 330)] = {'\0'};
    scanf ("%d\n", &lyH4LY);
    for (j = 1; lyH4LY >= j; j = j + 1) {
        {
            i = 773 - 773;
            while (i < 255) {
                a[i] = '\0';
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                i = i + 1;
            };
        }
        scanf ("%s", a);
        for (i = 254; 0 <= i; i = i - 1) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            if (a[i] != '\0') {
                k = i;
                break;
            };
        }
        {
            i = 0;
            while (i < k) {
                c = fy (a[i]);
                i++;
                printf ("%c", c);
            };
        }
        c = fy (a[k]);
        printf ("%c\n", c);
    }
    return 0;
}

