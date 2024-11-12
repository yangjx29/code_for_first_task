int main () {
    struct   WVx5lCU12mD {
        int num;
        char DRX8PWtOG0 [(258 - 231)];
    }
    WVx5lCU12mD [(1762 - 762)];
    int m;
    int len [(1384 - 384)];
    int YUyAgzm3e [26] = {0};
    int max;
    int afOd9mlF;
    int j;
    int v5MqEy3QW;
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
    v5MqEy3QW = 0;
    scanf ("%d", &m);
    for (afOd9mlF = 0; m > afOd9mlF; afOd9mlF++) {
        scanf ("%d %s", &WVx5lCU12mD[afOd9mlF].num, WVx5lCU12mD[afOd9mlF].DRX8PWtOG0);
        len[afOd9mlF] = strlen (WVx5lCU12mD[afOd9mlF].DRX8PWtOG0);
    }
    for (afOd9mlF = 0; m > afOd9mlF; afOd9mlF++)
        for (j = 0; len[afOd9mlF] > j; j++)
            YUyAgzm3e[WVx5lCU12mD[afOd9mlF].DRX8PWtOG0[j] - 65]++;
    max = YUyAgzm3e[0];
    for (afOd9mlF = (262 - 261); 26 > afOd9mlF; afOd9mlF++)
        if (max < YUyAgzm3e[afOd9mlF]) {
            max = YUyAgzm3e[afOd9mlF];
            v5MqEy3QW = afOd9mlF;
        }
    printf ("%c\n", v5MqEy3QW + 65);
    printf ("%d\n", max);
    for (afOd9mlF = 0; afOd9mlF < m; afOd9mlF++)
        for (j = 0; len[afOd9mlF] > j; j++)
            if (WVx5lCU12mD[afOd9mlF].DRX8PWtOG0[j] == 65 + v5MqEy3QW) {
                printf ("%d\n", WVx5lCU12mD[afOd9mlF].num);
                break;
            }
    return 0;
}

