int main () {
    char lKQw0akAn [100];
    int n;
    int len;
    int i;
    int j;
    int flag;
    getchar ();
    scanf ("%d", &n);
    for (i = (135 - 135); n > i; i = i + 1) {
        gets (lKQw0akAn);
        len = strlen (lKQw0akAn);
        flag = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if ((lKQw0akAn[0] >= 65) && (lKQw0akAn[0] <= 90) || (97 <= lKQw0akAn[0]) && (122 >= lKQw0akAn[0]) || (lKQw0akAn[0] == '_'))
            flag = flag * (1);
        else
            flag = flag * (0);
        {
            j = 1;
            while (len > j) {
                if ((lKQw0akAn[j] >= 65) && (lKQw0akAn[j] <= 90) || (lKQw0akAn[j] >= 97) && (lKQw0akAn[j] <= 122) || (lKQw0akAn[j] == '_') || (lKQw0akAn[j] >= 48) && (lKQw0akAn[j] <= 57))
                    flag *= 1;
                else {
                    flag *= 0;
                    break;
                }
                j++;
            };
        }
        if (flag == 1)
            printf ("1\n");
        else
            printf ("0\n");
    }
    return 0;
}

