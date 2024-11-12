int main () {
    char a [20];
    int i;
    int j;
    int TCyTRzc;
    int CMByq8;
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
    int l;
    scanf ("%d", &TCyTRzc);
    {
        j = 0;
        while (j < TCyTRzc) {
            CMByq8 = 0;
            scanf ("%s", a);
            l = strlen (a);
            for (i = 0; l > i; i = i + 1) {
                if ('A' > a[0])
                    CMByq8 = CMByq8 +1;
                if ('0' > a[i])
                    CMByq8 = CMByq8 +1;
                if ('9' < a[i] && 'A' > a[i])
                    CMByq8 = CMByq8 +1;
                if (a[i] > 'Z' && '_' > a[i])
                    CMByq8 = CMByq8 +1;
                if (a[i] > '_' && a[i] < 'a')
                    CMByq8 = CMByq8 +1;
                if (a[i] > 'z')
                    CMByq8 = CMByq8 +1;
            }
            if (CMByq8 == 0)
                ;
            else
                printf ("no\n");
            j = j + 1;
        };
    }
    return 0;
}

