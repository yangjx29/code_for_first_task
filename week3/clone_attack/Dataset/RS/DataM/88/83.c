int main () {
    char *MorjUh4s18V;
    char *lY7WfRAlCXg;
    char *lzNu83Rk1J;
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
    gets (MorjUh4s18V);
    MorjUh4s18V = (char *) malloc (120);
    for (lY7WfRAlCXg = MorjUh4s18V; *lY7WfRAlCXg; lY7WfRAlCXg++) {
        if ((*lY7WfRAlCXg) >= '0' && (*lY7WfRAlCXg) <= '9') {
            {
                lzNu83Rk1J = lY7WfRAlCXg;
                while ((int) (*lzNu83Rk1J) - '0' >= 0 && (int) (*lzNu83Rk1J) - '0' <= 9) {
                    printf ("%c", *lzNu83Rk1J);
                    lzNu83Rk1J++;
                };
            }
            lY7WfRAlCXg = lzNu83Rk1J;
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
            }
            lY7WfRAlCXg--;
            printf ("\n");
        };
    };
}

