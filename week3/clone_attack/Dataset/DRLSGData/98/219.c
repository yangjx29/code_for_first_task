int main () {
    char oxF8YZR [1000] [1000];
    int ua9lQZC1FWq;
    int dQmups;
    int is2rD1HcYQ;
    int e0jg29SnJDGH;
    int j;
    int jHuTgUi9yF [10000];
    ua9lQZC1FWq = 0;
    dQmups = -1;
    cin >> is2rD1HcYQ;
    {
        e0jg29SnJDGH = 0;
        while (e0jg29SnJDGH <= is2rD1HcYQ - 1) {
            jHuTgUi9yF[e0jg29SnJDGH] = 0;
            cin >> oxF8YZR[e0jg29SnJDGH];
            e0jg29SnJDGH++;
        }
    }
    jHuTgUi9yF[0] = strlen (oxF8YZR[0]) + 1;
    {
        e0jg29SnJDGH = 0;
        while (e0jg29SnJDGH <= is2rD1HcYQ - 2) {
            jHuTgUi9yF[e0jg29SnJDGH + 1] = strlen (oxF8YZR[e0jg29SnJDGH + 1]) + 1 + jHuTgUi9yF[e0jg29SnJDGH];
            e0jg29SnJDGH++;
        }
    }
    {
        e0jg29SnJDGH = 0;
        while (is2rD1HcYQ - 2 >= e0jg29SnJDGH) {
            if ((jHuTgUi9yF[e0jg29SnJDGH] <= 81 + ua9lQZC1FWq) && (jHuTgUi9yF[e0jg29SnJDGH + 1] >= 82 + ua9lQZC1FWq)) {
                ua9lQZC1FWq = jHuTgUi9yF[e0jg29SnJDGH];
                {
                    j = dQmups + 1;
                    while (j <= e0jg29SnJDGH - 1) {
                        cout << oxF8YZR[j] << " ";
                        j++;
                    }
                }
                cout << oxF8YZR[e0jg29SnJDGH];
                dQmups = e0jg29SnJDGH;
                cout << endl;
            }
            e0jg29SnJDGH++;
        }
    }
    {
        e0jg29SnJDGH = dQmups + 1;
        while (e0jg29SnJDGH <= is2rD1HcYQ - 2) {
            cout << oxF8YZR[e0jg29SnJDGH] << " ";
            e0jg29SnJDGH++;
        }
    }
    cout << oxF8YZR[is2rD1HcYQ - 1];
    return 0;
}

