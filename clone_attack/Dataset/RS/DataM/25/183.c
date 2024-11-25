int main () {
    int k;
    int Dogul8Tni1FP;
    int Td2ULZsv;
    int h7ksQfO5INH;
    k = (661 - 660);
    int oosO0xuCGHj [(714 - 514)] = {1};
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
    int TFQXfUCA [200] = {(677 - 677)};
    cin >> Dogul8Tni1FP;
    for (Td2ULZsv = 0; Dogul8Tni1FP > Td2ULZsv; Td2ULZsv++) {
        for (h7ksQfO5INH = 0; k >= h7ksQfO5INH; h7ksQfO5INH++)
            TFQXfUCA[h7ksQfO5INH] = 0;
        for (h7ksQfO5INH = 0; h7ksQfO5INH < k; h7ksQfO5INH++) {
            TFQXfUCA[h7ksQfO5INH] = TFQXfUCA[h7ksQfO5INH] + 2 * oosO0xuCGHj[h7ksQfO5INH];
            TFQXfUCA[h7ksQfO5INH + 1] = TFQXfUCA[h7ksQfO5INH + 1] + TFQXfUCA[h7ksQfO5INH] / 10;
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
            TFQXfUCA[h7ksQfO5INH] = TFQXfUCA[h7ksQfO5INH] % 10;
        }
        if (TFQXfUCA[k])
            k++;
        {
            h7ksQfO5INH = 0;
            while (h7ksQfO5INH < k) {
                oosO0xuCGHj[h7ksQfO5INH] = TFQXfUCA[h7ksQfO5INH];
                h7ksQfO5INH++;
            };
        };
    }
    for (Td2ULZsv = k - 1; Td2ULZsv >= 0; Td2ULZsv--)
        cout << oosO0xuCGHj[Td2ULZsv];
    cout << endl;
    return 0;
}

