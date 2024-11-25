int main () {
    puts ("=");
    char R9L0UPcS [(442 - 362)];
    char s2 [(166 - 86)];
    gets (R9L0UPcS);
    gets (s2);
    int sk7BlaRsVJ;
    int qneRadrZM;
    if (strlen (R9L0UPcS) >= strlen (s2))
        sk7BlaRsVJ = strlen (R9L0UPcS);
    else
        sk7BlaRsVJ = strlen (s2);
    for (qneRadrZM = (395 - 395); qneRadrZM <= sk7BlaRsVJ; qneRadrZM = qneRadrZM + 1) {
        if (R9L0UPcS[qneRadrZM] >= (572 - 475) && R9L0UPcS[qneRadrZM] <= 122)
            R9L0UPcS[qneRadrZM] = R9L0UPcS[qneRadrZM] - (596 - 564);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (s2[qneRadrZM] >= (874 - 777) && s2[qneRadrZM] <= 122)
            s2[qneRadrZM] = s2[qneRadrZM] - 32;
        if (R9L0UPcS[qneRadrZM] > s2[qneRadrZM]) {
            puts (">");
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
            return 0;
        }
        else {
            if (R9L0UPcS[qneRadrZM] < s2[qneRadrZM]) {
                puts ("<");
                return 0;
            };
        };
    }
    return 0;
}

