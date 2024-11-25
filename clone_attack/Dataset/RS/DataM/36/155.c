int main () {
    int ScWxgunONP;
    int numa [130] = {0};
    int ojEOnaZG [130] = {0};
    int tbo2hKkASVn;
    ScWxgunONP = 1;
    char a [10];
    char RPhGvM6w [10];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    scanf ("%s %s", &a, &RPhGvM6w);
    {
        tbo2hKkASVn = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (tbo2hKkASVn < (int) strlen (a)) {
            numa[a[tbo2hKkASVn]]++;
            tbo2hKkASVn = tbo2hKkASVn + 1;
        };
    }
    {
        tbo2hKkASVn = 0;
        while (tbo2hKkASVn < (int) strlen (RPhGvM6w)) {
            ojEOnaZG[RPhGvM6w[tbo2hKkASVn]]++;
            tbo2hKkASVn = tbo2hKkASVn + 1;
        };
    }
    for (tbo2hKkASVn = 'A'; 'z' > tbo2hKkASVn; tbo2hKkASVn = tbo2hKkASVn + 1)
        if (numa[tbo2hKkASVn] != ojEOnaZG[tbo2hKkASVn]) {
            ScWxgunONP = 0;
            break;
        }
    if (ScWxgunONP)
        ;
    else
        ;
    return 0;
}

