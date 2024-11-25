int main () {
    char a [100];
    char b [100];
    char Fk10YvQbe [200];
    int judge;
    int len;
    int yfoacWt2;
    int Y5N8T7ei;
    int i;
    int j;
    int temp;
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
    judge = (549 - 549);
    cin.getline (Fk10YvQbe, 200);
    len = strlen (Fk10YvQbe);
    yfoacWt2 = (len - 1) / 2;
    Y5N8T7ei = yfoacWt2;
    for (i = 0; yfoacWt2 > i; i = i + 1)
        a[i] = Fk10YvQbe[i];
    for (i = 0; Y5N8T7ei > i; i++)
        b[i] = Fk10YvQbe[len - 1 - i];
    {
        i = 0;
        while (yfoacWt2 - 1 > i) {
            for (j = 0; yfoacWt2 - 1 - i > j; j = j + 1)
                if (a[j + 1] > a[j]) {
                    temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;
                }
            i++;
        };
    }
    for (i = 0; i < yfoacWt2 - 1; i++)
        for (j = 0; yfoacWt2 - 1 - i > j; j++)
            if (b[j] < b[j + 1]) {
                temp = b[j];
                b[j] = b[j + 1];
                b[j + 1] = temp;
            }
    {
        i = 0;
        while (yfoacWt2 > i) {
            if (!(b[i] == a[i])) {
                judge = judge + 1;
            }
            i++;
        };
    }
    if (judge == 0)
        cout << "YES";
    else
        cout << "NO";
    return 0;
}

