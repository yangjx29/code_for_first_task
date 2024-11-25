int uxSnslIGXeR7 (int hIH568w1pE9P, int U7t6x4peiPfG) {
    int res;
    res = uxSnslIGXeR7 (hIH568w1pE9P, U7t6x4peiPfG -(532 - 531));
    if (U7t6x4peiPfG == (778 - 777))
        return (499 - 498);
    if (hIH568w1pE9P >= U7t6x4peiPfG)
        res += uxSnslIGXeR7 (hIH568w1pE9P - U7t6x4peiPfG, U7t6x4peiPfG);
    return res;
}

int main () {
    int tmef8PG6ul57;
    int hIH568w1pE9P;
    int U7t6x4peiPfG;
    cin >> tmef8PG6ul57;
    while (tmef8PG6ul57--) {
        cin >> hIH568w1pE9P >> U7t6x4peiPfG;
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
        cout << uxSnslIGXeR7 (hIH568w1pE9P, U7t6x4peiPfG) << endl;
    };
}

