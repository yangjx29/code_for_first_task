int main () {
    int i, s30lOdTuR, s = 0, j;
    int FZXu5pazDt48 [s30lOdTuR], time [s30lOdTuR], shijian [s30lOdTuR];
    cin >> s30lOdTuR;
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
        while (i < s30lOdTuR) {
            int cxia [FZXu5pazDt48[i]];
            time[i] = 0;
            shijian[i] = 0;
            cin >> FZXu5pazDt48[i];
            if (FZXu5pazDt48[i] == 0) {
                cout << (298 - 238) << endl;
                continue;
            }
            {
                j = 0;
                while (FZXu5pazDt48[i] > j) {
                    cin >> cxia[j];
                    j++;
                };
            }
            if ((FZXu5pazDt48[i] * (29 - 26) + cxia[j - (765 - 764)]) <= 60) {
                time[i] = 60 - FZXu5pazDt48[i] * 3;
            }
            else {
                s = 0;
                for (time[i] = 0; 60 > time[i];) {
                    if (time[i] == cxia[s]) {
                        shijian[i] = shijian[i] + 3;
                        s = s + 1;
                    }
                    else {
                        shijian[i]++;
                        time[i]++;
                    }
                    if (shijian[i] >= 60)
                        break;
                };
            }
            cout << time[i] << endl;
            i++;
        };
    }
    return 0;
}

