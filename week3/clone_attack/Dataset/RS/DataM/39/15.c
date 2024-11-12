int main () {
    char xZxV7SpT [100] [(850 - 830)], d [100], BH6zuER9Xo4 [100];
    int total;
    int MyPcUAKth;
    int uCIjmF5uM;
    int nQzEejMlhb;
    int JgBeJ0lh;
    int sum [(1054 - 954)];
    int PDzynFlK [(503 - 403)];
    int c [100];
    int apU6uCb [100];
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
    total = 0;
    MyPcUAKth = 0;
    uCIjmF5uM = 0;
    cin >> nQzEejMlhb;
    for (JgBeJ0lh = 0; JgBeJ0lh < nQzEejMlhb; JgBeJ0lh = JgBeJ0lh +1) {
        cin >> xZxV7SpT[JgBeJ0lh] >> PDzynFlK[JgBeJ0lh] >> c[JgBeJ0lh] >> d[JgBeJ0lh] >> BH6zuER9Xo4[JgBeJ0lh] >> apU6uCb[JgBeJ0lh];
    }
    for (JgBeJ0lh = 0; JgBeJ0lh < nQzEejMlhb; JgBeJ0lh = JgBeJ0lh +1) {
        sum[JgBeJ0lh] = 0;
        if (PDzynFlK[JgBeJ0lh] > (400 - 310)) {
            sum[JgBeJ0lh] = sum[JgBeJ0lh] + 2000;
        }
        if ((c[JgBeJ0lh] > 80) && (d[JgBeJ0lh] == 'Y')) {
            sum[JgBeJ0lh] = sum[JgBeJ0lh] + 850;
        }
        if ((PDzynFlK[JgBeJ0lh] > 85) && (BH6zuER9Xo4[JgBeJ0lh] == 'Y')) {
            sum[JgBeJ0lh] = sum[JgBeJ0lh] + 1000;
        }
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
        if ((PDzynFlK[JgBeJ0lh] > 85) && (c[JgBeJ0lh] > 80)) {
            sum[JgBeJ0lh] = sum[JgBeJ0lh] + (4271 - 271);
        }
        if ((PDzynFlK[JgBeJ0lh] > 80) && (apU6uCb[JgBeJ0lh] >= 1)) {
            sum[JgBeJ0lh] = sum[JgBeJ0lh] + 8000;
        }
        total = total + sum[JgBeJ0lh];
        if (sum[JgBeJ0lh] > MyPcUAKth) {
            MyPcUAKth = sum[JgBeJ0lh];
            uCIjmF5uM = JgBeJ0lh;
        };
    }
    cout << xZxV7SpT[uCIjmF5uM] << endl;
    cout << MyPcUAKth << endl;
    cout << total << endl;
    return 0;
}

