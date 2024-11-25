int main () {
    int i, j, len, count;
    char zgpEtNU4 [(1784 - 783)] = {0};
    cin.getline (zgpEtNU4, 1001);
    len = strlen (zgpEtNU4);
    {
        i = 0;
        while (len > i) {
            if (zgpEtNU4[i] - 'Z' >= 0)
                zgpEtNU4[i] = zgpEtNU4[i] - 32;
            i = i + 1;
        };
    }
    for (i = 0; len > i; i = i + 1) {
        count = 0;
        if (i != 0) {
            if (!(zgpEtNU4[i - 1] == zgpEtNU4[i])) {
                {
                    j = i;
                    while (len > j) {
                        if (zgpEtNU4[i] == zgpEtNU4[j])
                            count = count + 1;
                        else
                            break;
                        j = j + 1;
                    };
                }
                cout << "(" << zgpEtNU4[i] << "," << count << ")";
            };
        }
        if (i == 0) {
            {
                j = i;
                while (j < len) {
                    if (zgpEtNU4[i] == zgpEtNU4[j])
                        count = count + 1;
                    else
                        break;
                    j = j + 1;
                };
            }
            cout << "(" << zgpEtNU4[i] << "," << count << ")";
        };
    }
    return 0;
}

