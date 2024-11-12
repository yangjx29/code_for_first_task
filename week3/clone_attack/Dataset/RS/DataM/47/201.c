int main () {
    int n;
    int o5LxlqOstepR [2000];
    int *p;
    int *Ef5imknER;
    int temp;
    cin >> n;
    {
        int HmxuPS = 0;
        while (n > HmxuPS) {
            cin >> o5LxlqOstepR[HmxuPS];
            HmxuPS = HmxuPS +1;
        };
    }
    p = o5LxlqOstepR;
    Ef5imknER = n + o5LxlqOstepR - 1;
    for (; Ef5imknER > p; p++, Ef5imknER = Ef5imknER -1) {
        temp = *p;
        *p = *Ef5imknER;
        *Ef5imknER = temp;
    }
    cout << o5LxlqOstepR[0];
    {
        int HmxuPS = 1;
        while (n > HmxuPS) {
            cout << " " << o5LxlqOstepR[HmxuPS];
            HmxuPS++;
        };
    }
    return 0;
}

