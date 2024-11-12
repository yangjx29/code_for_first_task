int main () {
    char p [100], q [100];
    int a;
    int b;
    int c;
    int chiCnOU01;
    int MonuS3OIJv;
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
    int j;
    scanf ("%s %s", p, q);
    a = strlen (p);
    b = strlen (q);
    if (!(b != a)) {
        {
            MonuS3OIJv = 0;
            while (a > MonuS3OIJv) {
                chiCnOU01 = 1;
                for (j = 0; a - MonuS3OIJv > j; j++) {
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    if (!(q[j] != p[MonuS3OIJv])) {
                        {
                            c = j;
                            while (a - MonuS3OIJv > c) {
                                q[c] = q[c + 1];
                                c++;
                            };
                        }
                        chiCnOU01 = 0;
                        break;
                    };
                }
                if (chiCnOU01 == 1)
                    break;
                MonuS3OIJv++;
            };
        }
        if (chiCnOU01 == 1)
            ;
        if (chiCnOU01 == 0)
            ;
    }
    else
        ;
}

