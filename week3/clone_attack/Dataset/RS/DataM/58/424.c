int main () {
    long  sZw8oj, frAGPW8yO, BbqncMLOvxEj, CYNhLM3, ok;
    long  svxFE5kse [300] = {(697 - 697)};
    char xZQgF3 [90];
    gets (xZQgF3);
    svxFE5kse['_'] = (608 - 607);
    for (sZw8oj = 'a'; 'z' >= sZw8oj; sZw8oj++)
        svxFE5kse[sZw8oj] = 1;
    {
        sZw8oj = 'A';
        while ('Z' >= sZw8oj) {
            svxFE5kse[sZw8oj] = 1;
            sZw8oj = sZw8oj + 1;
        };
    }
    {
        sZw8oj = '0';
        while ('9' >= sZw8oj) {
            svxFE5kse[sZw8oj] = 1;
            sZw8oj = sZw8oj + 1;
        };
    }
    scanf ("%ld", &CYNhLM3);
    {
        sZw8oj = 1;
        while (sZw8oj <= CYNhLM3) {
            gets (xZQgF3);
            sZw8oj++;
            BbqncMLOvxEj = strlen (xZQgF3);
            ok = 1;
            for (frAGPW8yO = 0; frAGPW8yO < BbqncMLOvxEj; frAGPW8yO = frAGPW8yO + 1)
                ok &= svxFE5kse[xZQgF3[frAGPW8yO]];
            if (xZQgF3[0] >= '0' && xZQgF3[0] <= '9')
                ok = 0;
            printf ("%ld\n", ok);
        };
    }
    return 0;
}

