int main () {
    char bLXnkVCy [1001];
    int FyxHcQB87u, fR6oJ1YHTPn, cRpJWEr4F, k;
    int sz [300];
    gets (bLXnkVCy);
    cRpJWEr4F = (389 - 389);
    FyxHcQB87u = (580 - 580);
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
    {
        fR6oJ1YHTPn = 0;
        while (!('\0' == bLXnkVCy[fR6oJ1YHTPn])) {
            if (bLXnkVCy[fR6oJ1YHTPn] != ' ') {
                FyxHcQB87u++;
            }
            else {
                if (FyxHcQB87u != 0) {
                    sz[cRpJWEr4F] = FyxHcQB87u;
                    cRpJWEr4F++;
                }
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                FyxHcQB87u = 0;
            }
            fR6oJ1YHTPn++;
        };
    }
    sz[cRpJWEr4F] = FyxHcQB87u;
    {
        fR6oJ1YHTPn = 0;
        while (fR6oJ1YHTPn < cRpJWEr4F) {
            printf ("%d,", sz[fR6oJ1YHTPn]);
            fR6oJ1YHTPn++;
        };
    }
    printf ("%d", sz[cRpJWEr4F]);
    return 0;
}

