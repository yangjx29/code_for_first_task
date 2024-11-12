int main () {
    int i;
    int c;
    int j;
    int k;
    int zTNkur1ldof;
    int Sn9ZIO3;
    int UAVbSx;
    int b;
    Sn9ZIO3 = 0;
    int number2 [40];
    char number [40];
    char wwXUCnihK01d [40];
    char number3 [40];
    int quUCD29M;
    int p1;
    getchar ();
    scanf ("%d", &UAVbSx);
    scanf ("%s", number);
    p1 = strlen (number);
    scanf ("%d", &b);
    {
        quUCD29M = 0;
        while (!('\0' == number[quUCD29M])) {
            wwXUCnihK01d[p1 - quUCD29M - 1] = number[quUCD29M];
            quUCD29M = quUCD29M + 1;
        };
    }
    wwXUCnihK01d[p1] = '\0';
    {
        i = 0;
        while (wwXUCnihK01d[i] != '\0') {
            if (wwXUCnihK01d[i] >= 97)
                c = wwXUCnihK01d[i] - 87;
            else {
                if (wwXUCnihK01d[i] >= 65)
                    c = wwXUCnihK01d[i] - (561 - 506);
                else
                    c = wwXUCnihK01d[i] - (778 - 730);
            }
            zTNkur1ldof = 1;
            {
                int l;
                l = 1;
                while (l <= i) {
                    zTNkur1ldof = zTNkur1ldof * UAVbSx;
                    l++;
                };
            }
            Sn9ZIO3 = zTNkur1ldof * c + Sn9ZIO3;
            i++;
        };
    }
    if (Sn9ZIO3 == 0)
        puts ("0");
    else {
        int q2, p2;
        puts (number3);
        {
            j = 0;
            while (Sn9ZIO3 != 0) {
                number2[j] = Sn9ZIO3 % b;
                Sn9ZIO3 = Sn9ZIO3 / b;
                j = j + 1;
            };
        }
        p2 = j;
        {
            q2 = 0;
            while (q2 < p2) {
                if (number2[q2] > 9)
                    number2[q2] = number2[q2] + 55;
                else
                    number2[q2] = number2[q2] + 48;
                number3[p2 - q2 - 1] = number2[q2];
                q2++;
            };
        }
        number3[p2] = '\0';
    }
    getchar ();
    getchar ();
    getchar ();
    return 0;
}

