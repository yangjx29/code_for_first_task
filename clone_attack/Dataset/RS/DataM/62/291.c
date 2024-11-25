char t [200];

int main () {
    int s;
    int CQjByDfL;
    int agazK4;
    int tDY1gNQA;
    int l;
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
    gets (t);
    puts (t);
    l = strlen (t);
    {
        CQjByDfL = 0;
        while (CQjByDfL < 200) {
            CQjByDfL++;
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
            {
                agazK4 = 0;
                while (agazK4 < l) {
                    if (t[agazK4] == ' ' && t[agazK4 + 1] == ' ') {
                        s = agazK4;
                        while (s < l) {
                            t[s] = t[s + 1];
                            s++;
                        };
                    }
                    agazK4++;
                };
            };
        };
    }
    return 0;
}

