int array [(340 - 240)] [100];

int main () {
    int PRI06EoslQA1, kHXzIN9dO0lR, sZ6Ckt1PRyl, j, k, xxgdcAGbmiZ, count = (421 - 421);
    cin >> PRI06EoslQA1 >> kHXzIN9dO0lR;
    {
        sZ6Ckt1PRyl = 108 - 107;
        while (PRI06EoslQA1 >= sZ6Ckt1PRyl) {
            for (j = 1; kHXzIN9dO0lR >= j; j++)
                cin >> array[sZ6Ckt1PRyl][j];
            sZ6Ckt1PRyl++;
        };
    }
    xxgdcAGbmiZ = PRI06EoslQA1 *kHXzIN9dO0lR;
    {
        j = 1;
        k = 1;
        sZ6Ckt1PRyl = 1;
        while (xxgdcAGbmiZ >= k) {
            cout << array[sZ6Ckt1PRyl][j] << endl;
            count++;
            if (kHXzIN9dO0lR > count)
                j++;
            else {
                if (!(kHXzIN9dO0lR != count) || kHXzIN9dO0lR + PRI06EoslQA1 -1 > count)
                    sZ6Ckt1PRyl++;
                else {
                    if (count == kHXzIN9dO0lR + PRI06EoslQA1 -1 || count < 2 * kHXzIN9dO0lR + PRI06EoslQA1 -2)
                        j = j - 1;
                    else {
                        if (count == 2 * kHXzIN9dO0lR + PRI06EoslQA1 -2 || count < (kHXzIN9dO0lR + PRI06EoslQA1) * 2 - 4)
                            sZ6Ckt1PRyl--;
                        else {
                            count = 0;
                            kHXzIN9dO0lR -= 2;
                            PRI06EoslQA1 -= 2;
                            j++;
                        };
                    };
                };
            }
            k++;
        };
    }
    return 0;
}

