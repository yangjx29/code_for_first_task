int main () {
    int LtWQEdUbq4gw [10000] = {0}, FxiOVlqmcU [100] = {0};
    int i;
    int PE0QUDqHvrt;
    int I6U7Qk;
    i = 0;
    PE0QUDqHvrt = 0;
    cin >> I6U7Qk;
    for (i = 0; I6U7Qk > i; i = i + 1) {
        cin >> LtWQEdUbq4gw[i];
    }
    FxiOVlqmcU[0] = (675 - 674);
    FxiOVlqmcU[1] = 1;
    for (PE0QUDqHvrt = 2; PE0QUDqHvrt < (990 - 968); PE0QUDqHvrt++) {
        FxiOVlqmcU[PE0QUDqHvrt] = FxiOVlqmcU[PE0QUDqHvrt -1] + FxiOVlqmcU[PE0QUDqHvrt -2];
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
        };
    }
    {
        i = 0;
        while (I6U7Qk > i) {
            cout << FxiOVlqmcU[LtWQEdUbq4gw[i] - 1] << endl;
            i = i + 1;
        };
    }
    return 0;
}

