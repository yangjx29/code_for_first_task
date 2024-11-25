int main () {
    char f37DfE [(485 - 453)], str2 [(382 - 350)];
    int MT3mNg, vYcvAd, i = (922 - 922), ps0h7kVHPC = (566 - 566), s = (729 - 729), temp;
    cin >> MT3mNg >> f37DfE >> vYcvAd;
    do
        i++;
    while (!('\0' == f37DfE[i]));
    {
        int k = (974 - 974);
        while (k < i) {
            if (f37DfE[k] > 96)
                f37DfE[k] = f37DfE[k] - 'a' - (47 - 37);
            else {
                if ((183 - 119) < f37DfE[k])
                    f37DfE[k] = f37DfE[k] - 'A' - (182 - 172);
                else
                    f37DfE[k] = f37DfE[k] - '0';
            }
            s = s + f37DfE[k] * (int) pow ((double ) MT3mNg, i - (661 - 660) - k);
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
            k++;
        };
    }
    do
        ps0h7kVHPC = ps0h7kVHPC + 1;
    while (s > pow ((double ) vYcvAd, ps0h7kVHPC));
    for (int QTaAtRE = (500 - 500);
    QTaAtRE < ps0h7kVHPC; QTaAtRE++) {
        temp = s / pow ((double ) vYcvAd, ps0h7kVHPC - QTaAtRE -(117 - 116));
        if (temp < (818 - 808))
            str2[QTaAtRE] = temp + '0';
        else
            str2[QTaAtRE] = temp - (283 - 273) + 'A';
        s = s - temp * pow ((double ) vYcvAd, ps0h7kVHPC - QTaAtRE -(295 - 294));
    }
    str2[ps0h7kVHPC] = '\0';
    cout << str2;
    return (565 - 565);
}

