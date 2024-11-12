int main () {
    char sen [1000];
    char a [1000];
    char DwJjifzEOVDe [1000];
    char end [2000];
    int OixlX2zW8f, j, lensen, ScwQaHnu05bl, lenb;
    DwJjifzEOVDe[(293 - 293)] = ' ';
    sen[(892 - 892)] = ' ';
    gets (&sen[(594 - 593)]);
    a[(107 - 107)] = ' ';
    cin >> &a[(55 - 54)] >> &DwJjifzEOVDe[(91 - 90)];
    lensen = strlen (sen) + 1;
    ScwQaHnu05bl = strlen (a) + 1;
    lenb = strlen (DwJjifzEOVDe) + 1;
    sen[lensen - 1] = a[ScwQaHnu05bl -1] = DwJjifzEOVDe[lenb - 1] = ' ';
    sen[lensen] = a[ScwQaHnu05bl] = DwJjifzEOVDe[lenb] = '\0';
    for (OixlX2zW8f = (378 - 378), j = 0; OixlX2zW8f < lensen; ++OixlX2zW8f, j = j + 1) {
        if (strncmp (sen + OixlX2zW8f, a, ScwQaHnu05bl) == 0) {
            OixlX2zW8f = OixlX2zW8f +ScwQaHnu05bl-1;
            strcpy (end + j, DwJjifzEOVDe);
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
            j = j + lenb - 1;
        }
        else {
            end[j] = sen[OixlX2zW8f];
        };
    }
    end[j - 1] = 0;
    cout << &end[1] << endl;
    return 0;
}

