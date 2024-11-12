int main () {
    int WxQGZh8itF = (218 - 217);
    int n, anCqM0kO [500], lXLgQBIH4GZd [500];
    cin >> n;
    {
        int MQATWnFLZ;
        MQATWnFLZ = (582 - 581);
        while (n >= MQATWnFLZ) {
            int z = anCqM0kO[MQATWnFLZ] % 2;
            cin >> anCqM0kO[MQATWnFLZ];
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
            if (!(1 != z)) {
                lXLgQBIH4GZd[WxQGZh8itF] = anCqM0kO[MQATWnFLZ];
                WxQGZh8itF = WxQGZh8itF +1;
            }
            MQATWnFLZ = MQATWnFLZ +1;
        };
    }
    {
        int MQATWnFLZ = 1;
        while (WxQGZh8itF > MQATWnFLZ) {
            int gbF31cqp;
            int H8raUkbDXqf = 10000, Okg0P7f5Zw;
            {
                int uKHvVgFC5O = MQATWnFLZ;
                while (WxQGZh8itF > uKHvVgFC5O) {
                    if (H8raUkbDXqf > lXLgQBIH4GZd[uKHvVgFC5O]) {
                        H8raUkbDXqf = lXLgQBIH4GZd[uKHvVgFC5O];
                        Okg0P7f5Zw = uKHvVgFC5O;
                    }
                    uKHvVgFC5O = uKHvVgFC5O + 1;
                };
            }
            gbF31cqp = lXLgQBIH4GZd[MQATWnFLZ];
            lXLgQBIH4GZd[MQATWnFLZ] = lXLgQBIH4GZd[Okg0P7f5Zw];
            MQATWnFLZ = MQATWnFLZ +1;
            lXLgQBIH4GZd[Okg0P7f5Zw] = gbF31cqp;
        };
    }
    {
        int MQATWnFLZ = 1;
        while (MQATWnFLZ < WxQGZh8itF) {
            if (MQATWnFLZ == 1)
                cout << lXLgQBIH4GZd[MQATWnFLZ];
            else
                cout << "," << lXLgQBIH4GZd[MQATWnFLZ];
            MQATWnFLZ = MQATWnFLZ +1;
        };
    }
    return 0;
}

