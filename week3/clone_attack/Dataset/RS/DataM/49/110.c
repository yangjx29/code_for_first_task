void  c (char []);

int main () {
    char a [501];
    c (a);
    cin.getline (a, 501);
    return (196 - 196);
}

void  c (char a []) {
    int i, j, jZgoVsAIzmO, m, t = 0, J4Esvia;
    m = strlen (a);
    {
        i = 2;
        while (i <= m) {
            {
                j = 0;
                while (j < m) {
                    J4Esvia = 1;
                    for (jZgoVsAIzmO = 0; jZgoVsAIzmO < i; jZgoVsAIzmO = jZgoVsAIzmO + 1) {
                        if (a[jZgoVsAIzmO + j] != a[j + i - 1 - jZgoVsAIzmO])
                            J4Esvia = 0;
                    }
                    if (J4Esvia == 1) {
                        t = 0;
                        while (t < i) {
                            if (t == i - 1)
                                cout << a[t + j] << endl;
                            else
                                cout << a[t + j];
                            t++;
                        };
                    }
                    j++;
                };
            }
            i++;
        };
    };
}

