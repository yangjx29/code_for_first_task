int main () {
    int n;
    int Rc8hDs;
    int j;
    char s [255] = {'\0'};
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
    char RwJzjin [255] = {'\0'};
    scanf ("%d", &n);
    {
        Rc8hDs = 0;
        while (n > Rc8hDs) {
            char RwJzjin [255] = {'\0'};
            char s [255] = {'\0'};
            Rc8hDs++;
            scanf ("%s", s);
            {
                j = 0;
                while (!('\0' == s[j])) {
                    if (!('A' != s[j])) {
                        RwJzjin[j] = 'T';
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                float n = 0.0;
                                if (n > 10)
                                    return;
                                else
                                    n = 0;
                            }
                        };
                    }
                    if (s[j] == 'T') {
                        RwJzjin[j] = 'A';
                    }
                    if (s[j] == 'C') {
                        RwJzjin[j] = 'G';
                    }
                    if (s[j] == 'G') {
                        RwJzjin[j] = 'C';
                    }
                    j++;
                };
            }
            printf ("%s\n", RwJzjin);
        };
    }
    return 0;
}

