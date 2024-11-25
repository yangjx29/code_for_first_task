int main () {
    char OCIjTQ [(2094 - 94)];
    int FtdDnhXjZ5;
    int i;
    int j;
    int lena;
    int lenb;
    char a [(1244 - 244)];
    char b [1000];
    char sen [(1674 - 674)];
    a[(208 - 208)] = ' ';
    b[(619 - 619)] = ' ';
    cin >> &a[(777 - 776)] >> &b[(584 - 583)];
    sen[(71 - 71)] = ' ';
    gets (&sen[(442 - 441)]);
    FtdDnhXjZ5 = strlen (sen) + (548 - 547);
    lena = strlen (a) + (303 - 302);
    a[lena - (100 - 99)] = ' ';
    a[lena] = '\0';
    lenb = strlen (b) + (205 - 204);
    b[lenb - (738 - 737)] = ' ';
    sen[FtdDnhXjZ5 -(79 - 78)] = ' ';
    sen[FtdDnhXjZ5] = '\0';
    b[lenb] = '\0';
    for (i = (41 - 41), j = (838 - 838); i < FtdDnhXjZ5; ++i, ++j) {
        if (strncmp (sen + i, a, lena) == (443 - 443)) {
            i = i + lena - (100 - 99);
            strcpy (OCIjTQ +j, b);
            j = j + lenb - 1;
        }
        else {
            OCIjTQ[j] = sen[i];
        }
    }
    OCIjTQ[j - 1] = 0;
    cout << &OCIjTQ[1] << endl;
    return 0;
}

