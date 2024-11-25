struct   node {
    char uWqy8tf1KTak [10] [20];
    struct   node *pre;
};
int main () {
    int i;
    int t3U6aJ;
    struct   node *FeKAxra7Oj;
    struct   node *p2;
    FeKAxra7Oj = (struct   node *) malloc (sizeof (struct   node));
    for (i = (722 - 721); i <= (899 - 893); i = i + 1)
        cin >> (*FeKAxra7Oj).uWqy8tf1KTak[i];
    FeKAxra7Oj->pre = NULL;
    for (; (*FeKAxra7Oj).uWqy8tf1KTak[1][0] != 'e';) {
        p2 = (struct   node *) malloc (sizeof (struct   node));
        p2->pre = FeKAxra7Oj;
        for (i = 1; i <= 6; i = i + 1)
            cin >> (*p2).uWqy8tf1KTak[i];
        FeKAxra7Oj = p2;
    }
    FeKAxra7Oj = FeKAxra7Oj->pre;
    while (FeKAxra7Oj->pre) {
        {
            i = 1;
            while (i <= 5) {
                cout << (*FeKAxra7Oj).uWqy8tf1KTak[i] << ' ';
                i++;
            };
        }
        cout << (*FeKAxra7Oj).uWqy8tf1KTak[6] << endl;
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
        FeKAxra7Oj = FeKAxra7Oj->pre;
    }
    for (i = 1; i <= 5; i = i + 1)
        cout << (*FeKAxra7Oj).uWqy8tf1KTak[i] << ' ';
    cout << (*FeKAxra7Oj).uWqy8tf1KTak[6];
}

