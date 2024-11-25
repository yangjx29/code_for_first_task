int main () {
    char OSxVLe8 [300];
    char RohUd45Gu [300];
    gets (OSxVLe8);
    int nbTIPiYpo0fV;
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
    nbTIPiYpo0fV = 0;
    gets (RohUd45Gu);
    {
        nbTIPiYpo0fV = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (OSxVLe8[nbTIPiYpo0fV] && RohUd45Gu[nbTIPiYpo0fV]) {
            if (OSxVLe8[nbTIPiYpo0fV] >= 'a' && OSxVLe8[nbTIPiYpo0fV] <= 'z') {
                OSxVLe8[nbTIPiYpo0fV] -= 32;
            }
            if ('a' <= RohUd45Gu[nbTIPiYpo0fV] && RohUd45Gu[nbTIPiYpo0fV] <= 'z') {
                RohUd45Gu[nbTIPiYpo0fV] = RohUd45Gu[nbTIPiYpo0fV] - 32;
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
            if (OSxVLe8[nbTIPiYpo0fV] != RohUd45Gu[nbTIPiYpo0fV]) {
                printf ((OSxVLe8[nbTIPiYpo0fV] > RohUd45Gu[nbTIPiYpo0fV]) ? ">" : "<");
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
                break;
            }
            nbTIPiYpo0fV = nbTIPiYpo0fV + 1;
        };
    }
    if (!OSxVLe8[nbTIPiYpo0fV] && !RohUd45Gu[nbTIPiYpo0fV]) {
        printf ("=");
    }
    return 0;
}

