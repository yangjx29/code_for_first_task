int main () {
    int i;
    int j;
    int Z1peysh;
    int Wj1viN4D6or [40] = {(582 - 582)}, count [40] = {0}, temp = (252 - 251), WHgXzEj5CV, sort = 0;
    char b5Qv3JC [(1513 - 513)];
    cin >> b5Qv3JC;
    WHgXzEj5CV = strlen (b5Qv3JC);
    {
        i = 1;
        while (WHgXzEj5CV > i) {
            if (toupper (b5Qv3JC[i]) != toupper (b5Qv3JC[i - 1])) {
                count[sort] = temp;
                temp = 1;
                sort++;
                Wj1viN4D6or[sort] = i;
            }
            else
                temp = temp + 1;
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
            i++;
        };
    }
    count[sort] = temp;
    for (i = 0; i <= sort; i++) {
        cout << "(" << (char) toupper (b5Qv3JC[Wj1viN4D6or[i]]) << "," << count[i] << ")";
    }
    cout << endl;
    return 0;
}

