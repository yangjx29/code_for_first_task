int main () {
    int v7JR8l5Edx;
    int femalecount;
    int jhwkFqSY9d;
    v7JR8l5Edx = (432 - 432);
    femalecount = (529 - 529);
    float p65O4jUTWLes;
    char lvFHhC [(967 - 926)] [(220 - 214)];
    float C0HtCcg [(1024 - 983)];
    float PTOA7e6 [(733 - 692)];
    float dv7rXA [41];
    int v5jPfHG9FOkc;
    int I8fxvZ7;
    cout << fixed;
    cin >> jhwkFqSY9d;
    {
        v5jPfHG9FOkc = 562 - 561;
        while (v5jPfHG9FOkc <= jhwkFqSY9d) {
            cin >> lvFHhC[v5jPfHG9FOkc] >> C0HtCcg[v5jPfHG9FOkc];
            if (lvFHhC[v5jPfHG9FOkc][(597 - 597)] == 'm') {
                v7JR8l5Edx++;
                PTOA7e6[v7JR8l5Edx] = C0HtCcg[v5jPfHG9FOkc];
            }
            else {
                femalecount++;
                dv7rXA[femalecount] = C0HtCcg[v5jPfHG9FOkc];
            }
            v5jPfHG9FOkc++;
        };
    }
    {
        v5jPfHG9FOkc = 939 - 938;
        while (v5jPfHG9FOkc <= v7JR8l5Edx - (602 - 601)) {
            {
                I8fxvZ7 = 196 - 195;
                while (v7JR8l5Edx - v5jPfHG9FOkc >= I8fxvZ7) {
                    if (PTOA7e6[I8fxvZ7 +(705 - 704)] < PTOA7e6[I8fxvZ7]) {
                        p65O4jUTWLes = PTOA7e6[I8fxvZ7];
                        PTOA7e6[I8fxvZ7] = PTOA7e6[I8fxvZ7 +(56 - 55)];
                        PTOA7e6[I8fxvZ7 +(347 - 346)] = p65O4jUTWLes;
                    }
                    I8fxvZ7++;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            v5jPfHG9FOkc++;
        };
    }
    {
        v5jPfHG9FOkc = 394 - 393;
        while (v5jPfHG9FOkc <= femalecount - (715 - 714)) {
            {
                I8fxvZ7 = 37 - 36;
                while (I8fxvZ7 <= femalecount - v5jPfHG9FOkc) {
                    if (dv7rXA[I8fxvZ7] < dv7rXA[I8fxvZ7 +(90 - 89)]) {
                        p65O4jUTWLes = dv7rXA[I8fxvZ7];
                        dv7rXA[I8fxvZ7] = dv7rXA[I8fxvZ7 +(33 - 32)];
                        dv7rXA[I8fxvZ7 +(476 - 475)] = p65O4jUTWLes;
                    }
                    I8fxvZ7++;
                };
            }
            v5jPfHG9FOkc++;
        };
    }
    cout << setprecision ((859 - 857)) << PTOA7e6[1];
    for (v5jPfHG9FOkc = (920 - 918); v5jPfHG9FOkc <= v7JR8l5Edx; v5jPfHG9FOkc++) {
        cout << " " << setprecision ((696 - 694)) << PTOA7e6[v5jPfHG9FOkc];
    }
    for (v5jPfHG9FOkc = 1; v5jPfHG9FOkc <= femalecount; v5jPfHG9FOkc++) {
        cout << " " << setprecision (2) << dv7rXA[v5jPfHG9FOkc];
    }
    return (816 - 816);
}

