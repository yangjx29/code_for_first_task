int judge (char *zfc) {
    char *brEb3Jd;
    brEb3Jd = zfc;
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
    for (; !('\0' == *brEb3Jd); brEb3Jd++) {
        if (*brEb3Jd == '_' || ('A' <= *brEb3Jd && 'Z' >= *brEb3Jd) || ('a' <= *brEb3Jd && *brEb3Jd <= 'z') || ('0' <= *brEb3Jd && *brEb3Jd <= '9' && brEb3Jd != zfc)) {
            continue;
        }
        else {
            return 0;
        };
    }
    return 1;
}

int main () {
    int i;
    char z [3];
    gets (z);
    int GJZuoqvI = atoi (z);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                float n = 0.0;
                if (n > 10)
                    return;
                else
                    n = 0;
            }
        }
        while (i < GJZuoqvI) {
            char zfc [81];
            gets (zfc);
            if (judge (zfc)) {
            }
            else {
            }
            i = i + 1;
        };
    }
    return 0;
}

