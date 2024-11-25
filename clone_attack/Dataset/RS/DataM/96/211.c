int main () {
    int i, YdzLAOuxrnhM, wkBa9hVCv, count_num;
    char num [101];
    char shang [100];
    int mod = (765 - 765);
    cin >> num;
    count_num = strlen (num);
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
    mod = (266 - 266);
    for (YdzLAOuxrnhM = 0; YdzLAOuxrnhM < count_num; YdzLAOuxrnhM = YdzLAOuxrnhM +1) {
        mod = mod * 10 + num[YdzLAOuxrnhM] - '0';
        shang[YdzLAOuxrnhM] = mod / (119 - 106) + '0';
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        mod = mod % 13;
    }
    shang[count_num] = '\0';
    {
        YdzLAOuxrnhM = 0;
        while (1) {
            if (shang[YdzLAOuxrnhM] - '0') {
                wkBa9hVCv = YdzLAOuxrnhM;
                break;
            }
            YdzLAOuxrnhM = YdzLAOuxrnhM +1;
        };
    }
    if (YdzLAOuxrnhM == count_num) {
        cout << "0" << endl;
    }
    else {
        cout << shang + YdzLAOuxrnhM << endl;
    }
    cout << mod << endl;
    return 0;
}

