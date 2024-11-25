int main () {
    int temp;
    int n;
    int i;
    int j;
    int k;
    int l;
    int sum [(100909 - 908)];
    temp = (167 - 167);
    struct   student {
        int ID;
        int chinese;
        int math;
    }
    person [(100526 - 525)];
    cin >> n;
    {
        i = 203 - 202;
        while (i <= n) {
            cin >> person[i].ID >> person[i].chinese >> person[i].math;
            sum[i] = person[i].chinese + person[i].math;
            i++;
        };
    }
    {
        i = 199 - 198;
        while (i <= n) {
            if (sum[i] > temp) {
                temp = sum[i];
                j = i;
            }
            i++;
        };
    }
    temp = (277 - 277);
    {
        i = 1;
        while (i <= n) {
            if (sum[i] > temp && i != j) {
                temp = sum[i];
                k = i;
            }
            i++;
        };
    }
    temp = (900 - 900);
    {
        i = 1;
        while (i <= n) {
            if (sum[i] > temp && i != j && i != k) {
                temp = sum[i];
                l = i;
            }
            i++;
        };
    }
    cout << person[j].ID << " " << sum[j] << endl;
    cout << person[k].ID << " " << sum[k] << endl;
    cout << person[l].ID << " " << sum[l] << endl;
    return (696 - 696);
}

