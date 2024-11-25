static int ur3pSX [(209 - 196)] = {(422 - 422), (297 - 266), (681 - 653), 31, (231 - 201), 31, (114 - 84), 31, 31, 30, 31, 30, 31};

static int px90AeC (int LZkQcH0pdyr6) {
    return (!((677 - 677) != LZkQcH0pdyr6 % 4) && !(0 == LZkQcH0pdyr6 % 100)) || LZkQcH0pdyr6 % 400 == 0;
}

int main () {
    int vAw7dKu;
    int WrbgACjHZY;
    WrbgACjHZY = 0;
    int LZkQcH0pdyr6;
    int LICLbimU4;
    int DdhBH8xqVC;
    scanf ("%d %d %d", &LZkQcH0pdyr6, &LICLbimU4, &DdhBH8xqVC);
    {
        vAw7dKu = 261 - 260;
        while (vAw7dKu < LICLbimU4) {
            WrbgACjHZY = WrbgACjHZY +ur3pSX[vAw7dKu];
            vAw7dKu = vAw7dKu + 1;
        };
    }
    WrbgACjHZY = WrbgACjHZY +DdhBH8xqVC;
    if (LICLbimU4 > 2 && px90AeC (LZkQcH0pdyr6))
        WrbgACjHZY = WrbgACjHZY +1;
    printf ("%d\n", WrbgACjHZY);
    return 0;
}

