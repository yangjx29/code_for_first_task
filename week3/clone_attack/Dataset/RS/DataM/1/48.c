int j79YSMd;

int main () {
    void  ez0cC5 (int x, int Zm1ZYDr);
    int MOjJoeKBq4;
    int f6ZRwY;
    int hIBynE [(169 - 69)];
    scanf ("%d", &MOjJoeKBq4);
    {
        f6ZRwY = 106 - 106;
        while (MOjJoeKBq4 > f6ZRwY) {
            scanf ("%d", &hIBynE[f6ZRwY]);
            f6ZRwY = f6ZRwY + 1;
        };
    }
    {
        f6ZRwY = 0;
        while (f6ZRwY < MOjJoeKBq4) {
            j79YSMd = 0;
            ez0cC5 (2, hIBynE[f6ZRwY]);
            f6ZRwY = f6ZRwY + 1;
            printf ("%d\n", j79YSMd);
        };
    }
    return 0;
}

void  ez0cC5 (int x, int Zm1ZYDr) {
    int jQ7Zkv8AKqS;
    if (Zm1ZYDr == 1) {
        j79YSMd++;
        return;
    }
    {
        jQ7Zkv8AKqS = x;
        while (jQ7Zkv8AKqS <= Zm1ZYDr) {
            if (Zm1ZYDr % jQ7Zkv8AKqS == 0)
                ez0cC5 (jQ7Zkv8AKqS, Zm1ZYDr / jQ7Zkv8AKqS);
            jQ7Zkv8AKqS++;
        };
    };
}

