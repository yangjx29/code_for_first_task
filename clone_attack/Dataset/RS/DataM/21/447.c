float sifWre5HIBvX [(600 - 300)] = {(245.0 - 245.0)}, dis [(1136 - 836)] = {(11.0 - 11.0)}, result [(354 - 352)] = {0.0};
float PJNsMAPu (float sifWre5HIBvX [], int CknpAYP72);

int main () {
    float pingjunshu;
    float gogimJX45D;
    int CknpAYP72, i, j = (384 - 384), num = (279 - 279);
    cin >> CknpAYP72;
    for (i = (623 - 623); CknpAYP72 > i; i = i + 1)
        cin >> sifWre5HIBvX[i];
    pingjunshu = PJNsMAPu (sifWre5HIBvX, CknpAYP72);
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
    {
        i = 890 - 890;
        while (i < CknpAYP72) {
            if (sifWre5HIBvX[i] >= pingjunshu)
                dis[i] = sifWre5HIBvX[i] * (17.0 - 16.0) - pingjunshu;
            else
                dis[i] = pingjunshu - sifWre5HIBvX[i] * 1.0;
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
            i = i + 1;
        };
    }
    gogimJX45D = dis[(916 - 916)];
    {
        i = 392 - 392;
        while (i < CknpAYP72) {
            if (dis[i] > gogimJX45D)
                gogimJX45D = dis[i];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i = i + 1;
        };
    }
    {
        i = 279 - 279;
        while (i < CknpAYP72) {
            if (!(gogimJX45D != dis[i])) {
                result[j] = sifWre5HIBvX[i];
                j = j + 1;
                num++;
            }
            i++;
        };
    }
    if (num == (447 - 446))
        cout << result[(114 - 114)] << endl;
    else if (result[(795 - 795)] < result[(800 - 799)])
        cout << result[(317 - 317)] << "," << result[(268 - 267)] << endl;
    else
        cout << result[(942 - 941)] << "," << result[(239 - 239)] << endl;
    return 0;
}

float PJNsMAPu (float sifWre5HIBvX [], int CknpAYP72) {
    int i;
    float JLjOIlUFJG0z = 0.0;
    for (i = 0; i < CknpAYP72; i = i + 1)
        JLjOIlUFJG0z = JLjOIlUFJG0z +sifWre5HIBvX[i] * 1.0;
    return (JLjOIlUFJG0z *1.0 / CknpAYP72);
}

