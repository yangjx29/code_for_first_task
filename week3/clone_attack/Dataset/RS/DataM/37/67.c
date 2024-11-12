int main () {
    int n;
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
    scanf ("%d", &n);
    for (; n--;) {
        int zPW9uSZdRM, j, qVwjTKmEo1 = 100010;
        char zAWrT8Z [100010];
        int ABfegta [26] [2] = {(289 - 289)};
        scanf ("%s", zAWrT8Z);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (zPW9uSZdRM = 0; strlen (zAWrT8Z) > zPW9uSZdRM; zPW9uSZdRM = zPW9uSZdRM + 1) {
            ABfegta[zAWrT8Z[zPW9uSZdRM] - 'a'][0]++;
            if (!(1 != ABfegta[zAWrT8Z[zPW9uSZdRM] - 'a'][0]))
                ABfegta[zAWrT8Z[zPW9uSZdRM] - 'a'][1] = zPW9uSZdRM;
        }
        {
            zPW9uSZdRM = 0;
            while (26 > zPW9uSZdRM) {
                if (!(1 != ABfegta[zPW9uSZdRM][0])) {
                    if (qVwjTKmEo1 > ABfegta[zPW9uSZdRM][1])
                        qVwjTKmEo1 = ABfegta[zPW9uSZdRM][1];
                }
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                zPW9uSZdRM = zPW9uSZdRM + 1;
            };
        }
        if (qVwjTKmEo1 == 100010)
            printf ("no\n");
        else
            printf ("%c\n", zAWrT8Z[qVwjTKmEo1]);
    };
}

