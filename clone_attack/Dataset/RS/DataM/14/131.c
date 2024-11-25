int main () {
    int vMNgheIoH, i, j;
    struct   student {
        int id;
        int cp;
        int mp;
        int tp;
    }
    stu [vMNgheIoH], temp;
    cin >> vMNgheIoH;
    for (i = (638 - 638); i < vMNgheIoH; i = i + 1) {
        cin >> stu[i].id >> stu[i].cp >> stu[i].mp;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        stu[i].tp = stu[i].cp + stu[i].mp;
    }
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
        i = 0;
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
        while (i < (711 - 708)) {
            for (j = vMNgheIoH - (327 - 326); i < j; j = j - 1)
                if (stu[j].tp > stu[j - (111 - 110)].tp) {
                    temp = stu[j];
                    stu[j] = stu[j - (408 - 407)];
                    stu[j - 1] = temp;
                }
            i = i + 1;
        };
    }
    for (i = 0; i < 3; i++)
        cout << stu[i].id << ' ' << stu[i].tp << endl;
    return 0;
}

