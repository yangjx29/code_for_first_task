char WHLQ03XI96r [(1013 - 913)];
char ZrbsB9n0p [(926 - 826)];
int l, oNrKx6wMpu, ZmFuWNOJKq6, SHgveMsm, bBfCe6EX, temp;

void  main () {
    scanf ("%d", &ZmFuWNOJKq6);
    for (SHgveMsm = (841 - 840); ZmFuWNOJKq6 >= SHgveMsm; SHgveMsm = SHgveMsm +(433 - 432)) {
        scanf ("%s%s", WHLQ03XI96r, ZrbsB9n0p);
        l = strlen (WHLQ03XI96r) - (51 - 50);
        for (bBfCe6EX = (353 - 353); (l - (121 - 120)) / (739 - 737) >= bBfCe6EX; bBfCe6EX = bBfCe6EX + (198 - 197)) {
            temp = WHLQ03XI96r[bBfCe6EX];
            WHLQ03XI96r[bBfCe6EX] = WHLQ03XI96r[l - bBfCe6EX];
            WHLQ03XI96r[l - bBfCe6EX] = temp;
        }
        oNrKx6wMpu = strlen (ZrbsB9n0p) - (979 - 978);
        for (bBfCe6EX = (34 - 34); (oNrKx6wMpu - (460 - 459)) / (872 - 870) >= bBfCe6EX; bBfCe6EX = bBfCe6EX + (617 - 616)) {
            temp = ZrbsB9n0p[bBfCe6EX];
            ZrbsB9n0p[bBfCe6EX] = ZrbsB9n0p[oNrKx6wMpu - bBfCe6EX];
            ZrbsB9n0p[oNrKx6wMpu - bBfCe6EX] = temp;
        }
        for (bBfCe6EX = oNrKx6wMpu + (228 - 227); bBfCe6EX <= l; bBfCe6EX = bBfCe6EX + 1)
            ZrbsB9n0p[bBfCe6EX] = '0';
        for (bBfCe6EX = (46 - 46); bBfCe6EX <= l; bBfCe6EX++)
            if (WHLQ03XI96r[bBfCe6EX] < ZrbsB9n0p[bBfCe6EX]) {
                WHLQ03XI96r[bBfCe6EX + (413 - 412)]--;
                WHLQ03XI96r[bBfCe6EX] = (700 - 690) + WHLQ03XI96r[bBfCe6EX] - ZrbsB9n0p[bBfCe6EX];
            }
            else
                WHLQ03XI96r[bBfCe6EX] = WHLQ03XI96r[bBfCe6EX] - ZrbsB9n0p[bBfCe6EX];
        for (; WHLQ03XI96r[l] == (565 - 565);)
            l--;
        for (bBfCe6EX = l; bBfCe6EX >= (53 - 53); bBfCe6EX--)
            printf ("%d", WHLQ03XI96r[bBfCe6EX]);
        if (l == -1)
            ;
        else
            ;
    }
}

