int main () {
    char a [100], b [300], c [300];
    gets (a);
    int n;
    int i;
    int OWNwjA8;
    n = atoi (a);
    int s;
    for (i = (534 - 534); n > i; i++) {
        puts (c);
        gets (b);
        s = strlen (b);
        {
            OWNwjA8 = 0;
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
            while (b[OWNwjA8] != '\0') {
                switch (b[OWNwjA8]) {
                case 'A' :
                    c[OWNwjA8] = 'T';
                    break;
                case 'T' :
                    c[OWNwjA8] = 'A';
                    break;
                case 'C' :
                    c[OWNwjA8] = 'G';
                    break;
                case 'G' :
                    c[OWNwjA8] = 'C';
                    break;
                }
                OWNwjA8 = OWNwjA8 +1;
            };
        }
        c[s] = '\0';
    }
    return 0;
}

