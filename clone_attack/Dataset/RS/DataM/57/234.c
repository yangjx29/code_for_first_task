void  main () {
    char w [50] [15] = {'c'};
    char N0WZzJu [50] = {'c'};
    int MEInuxvec;
    int j;
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
    int n;
    int J8xBSEd5rc4;
    scanf ("%d", &n);
    for (MEInuxvec = 0; MEInuxvec < n + 1; MEInuxvec++) {
        gets (N0WZzJu);
        J8xBSEd5rc4 = strlen (N0WZzJu);
        if (N0WZzJu[J8xBSEd5rc4 -2] == 'e' && N0WZzJu[J8xBSEd5rc4 -1] == 'r')
            J8xBSEd5rc4 = J8xBSEd5rc4 -2;
        else {
            if (N0WZzJu[J8xBSEd5rc4 -2] == 'l' && N0WZzJu[J8xBSEd5rc4 -1] == 'y')
                J8xBSEd5rc4 = J8xBSEd5rc4 -2;
            else if (N0WZzJu[J8xBSEd5rc4 -3] == 'i' && N0WZzJu[J8xBSEd5rc4 -2] == 'n' && N0WZzJu[J8xBSEd5rc4 -1] == 'g')
                J8xBSEd5rc4 -= 3;
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
            };
        }
        for (j = 0; j < J8xBSEd5rc4; j++)
            w[MEInuxvec][j] = N0WZzJu[j];
    }
    for (MEInuxvec = 1; MEInuxvec < n + 1; MEInuxvec++) {
        j = 0;
        for (; w[MEInuxvec][j] != 0;) {
            printf ("%c", w[MEInuxvec][j]);
            j = j + 1;
        }
        if (w[MEInuxvec][j] == 0)
            ;
    };
}

