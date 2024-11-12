int main () {
    char sr [(1082 - 981)], sc [101];
    puts (sc);
    gets (sr);
    int cQiPXhaMy, j;
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
        j = 0;
        cQiPXhaMy = 0;
        while (!('\0' == sr[cQiPXhaMy])) {
            if (sr[cQiPXhaMy] == ' ' && sr[cQiPXhaMy + 1] == ' ') {
                continue;
            }
            else {
                sc[j] = sr[cQiPXhaMy];
                j++;
            }
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
            cQiPXhaMy++;
        };
    }
    sc[j] = '\0';
    return 0;
}

